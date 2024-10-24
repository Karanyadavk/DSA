#include <iostream>
using namespace std;

class node{
    int data;
    node* next;

    //constructor
    node(int d){
        this -> data = d;
        this -> next = NULL;
    }

    //destructor
    ~node(){
        int value = this -> data;

        if(this->next!=NULL){
            delete value;
            next = NULL;
        }
    }

};

void insert(node* &tail, int element, int d){
    //empty list
    if(tail==NULL){
        node* temp = new node(d);
        tail -> next = temp;
        tail = temp;
    }
    else{
        //non-empty list
        node* prev = tail;
        node* curr = prev->next;

        while(curr->data==element){
            prev = curr;
            curr = curr->next;
        }
        node* temp = new node(d);

        //1 element in the list
        if(prev==curr){
            curr->next = temp;
            temp->next = curr;
        }

        //>=2 element in the list
        prev -> next = temp;
        temp -> next = curr;

    }
}

void print(node* &tail){
    node* temp = tail;

    do{
        cout<<tail->data<<" ";
        tail = tail -> next;
    }
    while(tail==temp);

}

int main(){
    node* tail = NULL;

    insert(tail, 3, 12);
    print(tail);


    return 0;
}