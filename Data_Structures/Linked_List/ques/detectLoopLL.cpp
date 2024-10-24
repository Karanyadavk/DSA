#include <iostream>
#include <map>
using namespace std;

bool detectLoop(node* head){        //time complexity and time complexity of this is O(n)
    if(head==NULL){
        return false;
    }
    node* temp = head;
    map<temp, bool> visited;

    while(temp!=NULL){
        if(visited[temp]==true){
            cout<<"start node of the loop is "<< temp->data<<endl;
            return true;
        }
        visited[temp]=true;
        temp = temp->next;
    }
    return false;
}

bool floydDetectLoop(node* head){       //time and space complexity is O(n) and O(1)
    if(head==NULL || head->next==NULL){
        return false;
    }

    node* slow = head;
    node*  fast = head;

    while(slow!=NULL && fast!=NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast = fast -> next;
        }
        if(fast==slow){
            return true;
        }
        slow = slow -> next;
    }
    return false;
}

int main(){

    return 0;
}