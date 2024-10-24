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
    LinkedListNode<int>* curr = head;
    LinkedListNode<int>* prev = NULL;
    LinkedListNode<int>* next = NULL;

    while(curr != NULL){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

LinkedListNode<int>* mid(LinkedListNode<int>* head){
    LinkedListNode<int>* slow = head;
    LinkedListNode<int>* fast = head->next;

    while(fast!=NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }

    return slow;
}

bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    if(head==NULL || head->next==NULL){
        return true;
    }

    

    LinkedListNode<int>* middle = mid(head);

    LinkedListNode<int>* temp = middle -> next;
    middle -> next = reverse(temp);
    
    LinkedListNode<int>* start = head;

    while(temp!=NULL){
        if(start->data != temp->data){
            return false;
        }
    }

    return true;
}

// discuss
