#include <iostream>
using namespace std;

//#Approach 1 :
//count T.C = O(n) and S.C = O(1)

Node* count(Node* head){
    if(head==NULL){
        return NULL;
    }

    Node* temp = head;

    int zeroCnt = 0;
    int oneCnt = 0;
    int twoCnt = 0;

    while(temp != NULL){
        if(temp->data == 0){
            zeroCnt++;
        }

        else if(temp->data==1){
            oneCnt++;
        }

        else if(temp->data==2){
            twoCnt++;
        }

        temp = temp->next;
    }

    Node* temp = head;

    while(temp!=NULL){
        if(zeroCnt!=0){
            temp->data = 0;
            zeroCnt--;
        }
        else if(oneCnt!=0){
            temp->data=1;
            oneCnt--;
        }
        else if(twoCnt!=0){
            temp->data=2;
            twoCnt--;
        }

        temp = temp->next;
    }

    return head;
}

//#Approach 2:
//create three list each separate for 0, 1, 2 and then merge all of them and remove the dummy nodes
//T.C = O(n) and S.C = O(1)


void insertAtTail(Node* &tail, Node* curr){
    tail -> next = curr;
    tail = curr;
}

Node* sortList(Node *head){
    // Write your code here.
     Node* curr = head;

    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;

    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;

    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    while(curr!=NULL){
        if(curr->data==0){
            insertAtTail(zeroTail, curr);
        }
        else if(curr->data==1){
            insertAtTail(oneTail, curr);
        }
        else if(curr->data==2){
            insertAtTail(twoTail, curr);
        }

        curr = curr->next;
    }

    if(oneHead->next!=NULL){
        zeroTail->next = oneHead->next;
    }

    else{
        zeroTail->next = twoHead->next;
    }

    oneTail->next = twoHead->next;
    twoTail->next = NULL;

    head = zeroHead->next;
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;

}


int main(){


    return 0;
}