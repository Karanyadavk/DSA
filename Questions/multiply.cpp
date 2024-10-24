#include <iostream>
using namespace std;

int main(){

    int n, m, o;
    cin>>n>>m>>o;
    int arr[n][m];
    int arra[m][o];
    int array[n][o];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<o; j++){
            cin>>arra[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<o; j++){
            array[i][j]=0;
        }
    }

    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            for(int k =0; k<o; k++){
                array[i][k] += arr[i][j]*arra[j][k];
            }
        }
    }


    for(int i=0; i<m; i++){
        for(int j=0; j<o; j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}