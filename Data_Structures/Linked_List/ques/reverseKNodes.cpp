/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */
 int getLength(Node* head){
     int len = 0;
     Node* temp = head;

     while(temp!=NULL){
         len++;
         temp = temp->next;
     }
     return len;
 }

Node* kReverse(Node* head, int k) {
    // Write your code here.
    if(head == NULL){
        return NULL;
    }

    int l = getLength(head);

    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    int cnt = 0;
    while(curr!=NULL && cnt<k){
        forward = curr->next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
        cnt++;
    }

    int r = l - k;

    if(forward!=NULL){
        if (r >= k) {
          head->next = kReverse(forward, k);
          r -= k;
        }
        else{
            head->next = forward;
        }
    }
    return prev;
}