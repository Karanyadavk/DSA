#include <iostream>
using namespace std;

class circularQueue{
    int arr;
    int size;
    int front;
    int rear;

    public:

    circularQueue(int n){
        size = n;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    bool enqueue(int value){
        if((front == 0 && rear == size-1)  || (rear==(front-1)%(size-1))){
            return false;
        }
        else if(front == -1){ //first element to get pushed
            front = rear = 0;
        }
        else if((rear == size-1 && front!=0)){
            rear = 0;
        }
        else{
            rear++;
        }
        arr[rear] = value;
    }

    int dequeue(){
        if(front==-1){
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        if(front==rear){
            front=rear=-1;
        }
        else if(front==size-1){
            front = 0;
        }
        else{
            front++;
        }
        return ans;
    }
};

int main(){

    return 0;
}