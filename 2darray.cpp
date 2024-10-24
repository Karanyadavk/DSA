#include <iostream>
using namespace std;

int main(){

    int n, m;
    cin>>n>>m;
    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    int key;
    cin>>key;
    bool flag = false;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(key==arr[i][j]){
                cout<<endl<<i<<" "<<j<<endl;
                flag = true;
            }
        }
    }

    if(flag){
        cout<<"Element found in the matrix";
    }
    else{
        cout<<"Element not found";
    }



    return 0;
}