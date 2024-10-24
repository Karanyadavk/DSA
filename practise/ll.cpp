#include <iostream>
#include <map>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int d){
        this -> data = d;
        this -> next = NULL;
    }

    ~node(){        //destructor
    int value = this -> data;
    //free memory
    if(this -> next != NULL){
        delete next;
        this->next = NULL;
    }
    cout<<"the memory has been freed for the value"<<value<<endl;
}

};

void insertAtHead(node* &head, int d){
    node* temp = new node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(node* &tail, int d){
    node* temp = new node(d);
    tail -> next = temp;
    tail = temp;
}

void insertAtPosition(node* &tail, node* &head, int position, int d){
    if(position==1){
        insertAtHead(head, d);
        return;
    }

    node* temp = head;
    int cnt =1;

    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }

    if(temp -> next == NULL){
        insertAtTail(tail, d);
        return;
    }

    node* nodeToInsert = new node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}



void deletion(node* &head, int position){
    if(position == 1){
        head->next=NULL;
        delete head;
        return;
    }

    else{

    node* temp = head;
    node* prev = NULL;
    int cnt = 1;

    if(cnt < position){
        prev = temp;
        temp = temp->next;
        cnt++;
    }
    prev->next = temp->next;
    temp->next = NULL;
    delete temp;
    }
}

bool detectLoop(node* head){        //time complexity and time complexity of this is O(n)
    if(head==NULL){
        return false;
    }
    node* temp = head;
    map<node*, bool> visited;

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

node* floydDetectLoop(node* head){       //time and space complexity is O(n) and O(1)
    if(head==NULL || head->next==NULL){
        return NULL;
    }

    node* slow = head;
    node*  fast = head;

    while(slow!=NULL && fast!=NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast = fast -> next;
        }
        slow = slow -> next;
        if(fast==slow){
            cout<<"loop is present at "<< slow->data<<endl;
            return slow;
        }
    }
    return NULL;
}

node* getStarting(node* head){
    if(head==NULL){
        return NULL;
    }

    node* slow = head;
    node* intersection = floydDetectLoop(head);

    if(intersection==NULL){
        return NULL;
    }

    while(slow!=intersection){
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

node* removeLoop(node* head){
    if(head==NULL){
        return NULL;
    }

    node* intersect = getStarting(head);

    if(intersect==NULL){
        return head;
    }
    
    node* temp = intersect;

    while(temp->next!=intersect){
        temp = temp->next;
    }
    temp->next = NULL;
}


void print(node* &head){
    node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){

    node* node1 = new node(112);
    node* head = node1;
    insertAtHead(head, 12);
    insertAtHead(head, 15);
    print(head);

    node* tail = node1;

    // insertAtTail(tail, 13);
    // print(head);

    insertAtPosition(tail, head, 2, 23);
    print(head);

    insertAtPosition(tail, head, 2, 12);
    print(head);

    // deletion(head, 2);
    // print(head);

    tail -> next = head->next;

    if(detectLoop(head)){
        cout<<"loop cycle is present"<<endl;
    }
    else{
        cout<<"loop cycle is not present"<<endl;
    }

    if(floydDetectLoop(head)){
        cout<<"loop cycle is present"<<endl;
    }
    else{
        cout<<"loop cycle is not present"<<endl;
    }

    node* start = getStarting(head);
    cout<< start->data<<endl;

    return 0;
}