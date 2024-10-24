#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;

    int id = 0;

    for(int i=0; i<n; i++){

        if(arr[i]==key){
            id = i;
        }
        
    }

    int j =1; 

    while(j<n-id-1){
        arr[id]=arr[j+id];
    }
    
    

    for(int i=0; i<n-1; i++){
        cout<<arr[i];
    }



    return 0;
}