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

    int key; 
    cin>>key;
    bool flag = false;

    int row =0;
    int column = m-1;

    while(row<=n-1 && column >= 0){
        if(arr[row][column]==key){
            flag = true;
            cout<<row<<" "<<column<<endl;
            break;
        }
        
        else if(arr[row][column]>key){
            column--;
        }

        else{
            row++;
        }
    }

    if(flag){
        cout<<"Element is found in the matrix";
    }
    else{
        cout<<"Element is not found in the matrix";
    }




    return 0;
}