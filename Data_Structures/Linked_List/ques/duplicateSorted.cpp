#include <iostream>
using namespace std;

Node* removeDuplicate(Node* head){
    //empty list
    if(head==NULL){
        return NULL;
    }

    //non-empty list

    Node* curr = head;
    while(curr!=NULL){
        if((curr->next != NULL) && curr == curr->next){
            Node* next_next = curr->next->next;
            Node* nodeToDelete = curr->next;
            delete(nodeToDelete);
            curr = next_next;
        }
        else{
            curr = curr->next;
        }
    }
    return head;
}


int main(){


    return 0;
}