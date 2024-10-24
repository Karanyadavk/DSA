#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int d){
        this -> data = d;
        this -> next = NULL;
    }
};

void insertAtHead(node* &head, int d){
    node* temp = new node(d);
    temp -> next = head;
    head = temp;
}

void print(node* &head){
    node* temp = head;

    while(temp != NULL){
        cout<<temp -> data<<endl;
        temp = temp -> next;
    }
}


int main(){
    node* head = NULL;

    insertAtHead(head, 12);
    insertAtHead(head, 10);

    print(head);

    return 0;
}