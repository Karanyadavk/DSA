#include <iostream>
#include <map>
using namespace std;

Node* rmDupLoop(Node* head){        //T.C = O(N^2) !!!!!check it if it is right or wrong
    Node* curr = head;

    while(curr!=NULL){
        Node* forward = head -> next;
        while(forward!=NULL){
            if(curr->data == forward->data){
                Node* next_next = curr->next->next;
                Node* nodeToDelete = curr->next;
                delete(nodeToDelete);
                curr = next_next;
            }
            else{
                forward = forward->next;
            }
        }
        curr = curr->next;
    }
}

// Approach 2 is sort the unsorted list and then use sorted list algo -> T.C = O(N)

//Approach 3 is using map 

Node* rmDupMap(Node* head){
     // Write your code here
      if( head == NULL){
        return NULL;

    }
    unordered_map< int, bool> visited;

    Node *curr = head;
    while( curr -> next != NULL){
        visited[curr -> data ] = true;

        if( visited[curr -> next -> data] == true){
            curr -> next = curr -> next -> next;
        }
        else{
            curr = curr -> next;
        }
    }
    
    return head;
}


int main(){
    

    return 0;
}