#include <iostream>
#include <queue>
using namespace std;

class Queue{
    public:
    int arr;
    int size;
    int front;
    int rear;

    Queue(){
        size = 1000001;
        arr = new int[size];
        front = rear = 0;
    }

    bool isEmpty(){
        if(front==rear){
            return true;
        }
        else{
            return false;
        }
    }

    void enqueue(int data){
        if(rear==size){
            return -1;
        }
        
        arr[rear]=data;
        rear++;
    }

    int dequeue(){
        if(front==rear){
            return -1;
        }
        arr[front]=-1;
        front++;
        if(front==rear){
            front = 0;
            rear = 0;
        }
        return arr[front];
    }

    int front(){
        if(front==rear){
            return -1;
        }
        else{
            return arr[front];
        }
    }

};

int main(){

    // queue<int> q;

    // q.push(12);
    // cout<<"the front element in the queue is : "<<q.front()<<endl;
    // q.push(14);
    // cout<<"the front element in the queue is : "<<q.front()<<endl;
    // q.push(16);
    // cout<<"the front element in the queue is : "<<q.front()<<endl;

    // cout<<"the size of the queue is : "<<q.size()<<endl;

    // q.pop();
    // cout<<"the front element in the queue is : "<<q.front()<<endl;
    
    // q.pop();
    // if(q.empty()){
    //     cout<<"the queue is empty"<<endl;
    // }
    // else{
    //     cout<<"the queue is not empty"<<endl;
    // }

    // q.pop();
    // if(q.empty()){
    //     cout<<"the queue is empty"<<endl;
    // }
    // else{
    //     cout<<"the queue is not empty"<<endl;
    // }
    

    return 0;
}