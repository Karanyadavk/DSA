#include <iostream>
#include <queue>

using namespace std;

class heap{
    public:
    
    int arr[100];
    int size;

    heap(){
        arr[0] = -1;
        size = 0;
    }

    void insert(int val){
        size = size+1;
        int index = size;

        arr[index] = val;


        while(index>1){
            int parent = index/2;
            if(arr[index]>arr[parent]){
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
    }

    void print(){
        for(int i=1; i<=size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void deletion(){
        if(size==0){
            cout<<"there is nothing to delete"<<endl;
            return ;
        }

        arr[1] = arr[size];
        size--;


        int i = 1;

        while(i<size){
            int right = 2*i+1;
            int left = 2*i;
            if(right<size && arr[right]>arr[i]){
                swap(arr[i], arr[right]);
                i = right;
            }
            else if(left<size && arr[left]>arr[i]){
                swap(arr[i], arr[left]);
                i=left;
            }
            else{
                return;
            }
        }
    }

   
};

 void heapify(int arr[], int n, int i){
        int largest = i;
        int left = 2*i;
        int right = 2*i + 1;

        if(left<=n && arr[largest]<arr[left]){
            largest = left;
        }

        if(right<=n && arr[largest]<arr[right]){
            largest = right;
        }

        if(largest!=i){
            swap(arr[largest], arr[i]);
            heapify(arr, n, largest);
        }
    }

void heapSort(int arr[], int n){
    int size = n;

    while(size>1){
        swap(arr[size], arr[1]);
        size--;

        heapify(arr, size, 1);
    }
}

int main(){

    heap h;

    h.insert(55);
    h.insert(52);
    h.insert(51);
    h.insert(45);
    h.insert(50);
    h.insert(67);

    h.print();
    h.deletion();
    h.print();

    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;
    for(int i = n/2; i>0; i--){
        heapify(arr, n, i);
    }
    cout<<"printing the array now : "<< endl;
    for(int i=1; i<=n; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;

    heapSort(arr, n);

    cout<<"printing the heap sort now : "<< endl;
    for(int i=1; i<=n; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;

    // max heap

    priority_queue<int> mx;

    mx.push(3);
    mx.push(5);
    mx.push(2);
    mx.push(7);
    mx.push(1);

    cout<<mx.top()<<endl;
    mx.pop();
    cout<<mx.top()<<endl;
    cout<<mx.size()<<endl;
    if(mx.empty()){
        cout<<"the priority queue is empty"<<endl;
    }
    else{
        cout<<"the queue is not empty"<<endl;
    }


    cout<<"MIN Heap : "<<endl;

    // min heap

    priority_queue<int , vector<int>, greater<int> > mn;

    mn.push(3);
    mn.push(5);
    mn.push(2);
    mn.push(7);
    mn.push(1);

    cout<<mn.top()<<endl;
    mn.pop();
    cout<<mn.top()<<endl;
    cout<<mn.size()<<endl;
    if(mn.empty()){
        cout<<"the priority queue is empty"<<endl;
    }
    else{
        cout<<"the queue is not empty"<<endl;
    }


    return 0;
}