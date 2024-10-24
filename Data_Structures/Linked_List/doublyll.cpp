#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;

    node(int d){
        this->data= d;
        this->prev= NULL;
        this->next=NULL;
    }

    ~node(){
        int val = this->data;

        if(this->next!=NULL){
            delete next;
            next = NULL;
        }
    }
};

void insertAtHead(node* &head, int d){
    node* temp = new node(d);

    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(node* &tail, int d){
    node* temp = new node(d);

    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtPosition(node* tail, node* &head, int position, int d){
    if(position == 1){
        insertAtHead(head, d);
        return;
    } 

    node* temp = head;
    int cnt = 1;

    while(cnt<position-1){
        temp = temp -> next;
        cnt++;
    }

    if(temp->next == NULL){
        insertAtTail(tail, d);
        return;
    }

    node* nodeToInsert = new node(d);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev= temp;

}

void deletion(node* &head, int position){
    if(position==1){
        node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;

        delete temp;
        return;
    }

    else{
    node* temp = head;
    node* prev = NULL;
    int cnt = 1;

    while(cnt<position){
        prev = temp;
        temp = temp -> next;
        cnt++;
    }

    prev->next = temp->next;
    temp->next = NULL;
    temp->prev = NULL;
    prev->next->prev = prev;

    delete temp;
    }

}

int getLength(node* &head){
    int len = 0;
    node* temp = head;
    

    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

void print(node* &head){
    node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


int main(){

    node* node1 = new node(10);
    node* head = node1;
    print(head);

    node* tail = head;

    cout<<getLength(head)<<endl;

    insertAtHead(head, 12);
    print(head);

    insertAtTail(tail, 14);
    print(head);
    
    insertAtPosition(tail, head, 2, 24);
    insertAtPosition(tail, head, 5, 2);
    insertAtPosition(tail, head, 1, 4);
    print(head);

    deletion(head, 1);
    print(head);

    deletion(head, 5);
    print(head);

    deletion(head, 2);
    print(head);
    
    return 0;
}