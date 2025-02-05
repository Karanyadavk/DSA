#include <iostream>
using namespace std;

class Deque{
    int arr;
    int size;
    int front;
    int rear;

    public:

    Deque(int n){
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    bool pushFront(int x){
        if((front==0 && rear==size-1)  || (rear==(front-1)%(size-1))){
            return false;
        }
        else if(front == -1){
            front = rear = 0;
        }
        else if(front==0 && rear!=size-1){
            front = size-1;
        }
        else{
            front--;
        }
        arr[front]=x;
        return true;

    }


    bool pushRear(int x){
        if((front==0 && rear==size-1)  || (rear==(front-1)%(size-1))){
            return false;
        }
        else if(rear==-1){
            front = rear = 0;
        }
        else if(rear==size-1 && front!= 0){
            rear = 0;
        }
        else{
            rear++;
        }
        arr[rear]= x;
        return true;
    }

    int popFront(){
        if(front==-1){
            return -1;
        }
        ans = arr[front];
        arr[front]=-1;
        if(front==rear){
            front = rear = -1;
        }
        else if(front==size-1){
            front = 0;
        }
        else{
            front++;
        }
        return ans;
    }

    int popRear(){
        if(front==-1){
            return -1;
        }
        ans = arr[rear];
        arr[rear]=-1;
        if(front==rear){
            front = rear = -1;
        }
        else if(rear==0){
            rear = size-1;
        }
        else{
            rear--;
        }
        return ans;
    }

    int getFront(){
        if(front==-1){
            return -1;
        }
        return arr[front];
    }

    int getRear(){
        if(rear==-1){
            return -1;
        }
        return arr[rear];
    }

    bool isEmpty(){
        if(front==-1){
            return true;
        }
        else{
            return false;
        }
    }

    bool isFull(){
        if((front==0 && rear==size-1) || (front!=0 && rear==(front-1)%(size-1))){
            return true;
        }
        else{
            return false;
        }
    }

};


int main(){

    return 0;
}