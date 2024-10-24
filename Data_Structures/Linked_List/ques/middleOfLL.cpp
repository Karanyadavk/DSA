/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

// int getlength(Node* head){
//     Node* temp = head;
//     int len = 0;
//     while(temp!=NULL){
//         len++;
//         temp=temp->next;
//     }

//     return len;
// }

Node* getMiddle(Node* head){
    // for null or 1 element list
    if(head==NULL || head->next == NULL){
        return head;
    }
    // for two element list
    if(head->next->next==NULL){
        return head->next;
    }

    Node* fast = head->next;
    Node* slow = head;

    while(fast!=NULL){
        fast = fast-> next;
        if(fast!=NULL){
            fast = fast -> next;
        }
        slow = slow -> next;
    }

    return slow;
}

Node *findMiddle(Node *head) {
    // Write your code here
    return getMiddle(head);

    // int l = getlength(head);
    // int middle = l/2+1;
    // int cnt = 1;

    // while(cnt<middle){
    //     temp = temp->next;
    //     cnt++;
    // }

    // return temp;
}

