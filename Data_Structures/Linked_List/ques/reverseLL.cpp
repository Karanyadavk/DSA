#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
LinkedListNode<int>* reverse(LinkedListNode<int>* head){
    // base case
    if(head==NULL || head->next==NULL){
        return head;
    }

    LinkedListNode<int>* chotaHead = reverse(head->next);
    head->next->next = head;
    head->next = NULL;

    return chotaHead;

}

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    return reverse(head);
    /*
    if(head==NULL || head->next==NULL){
        return head;
    }
    LinkedListNode<int>* curr = head;
    LinkedListNode<int>* prev = NULL;
    LinkedListNode<int>* forward = NULL;

    while(curr!=NULL){
        forward = curr -> next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }

    return prev;
    */
}