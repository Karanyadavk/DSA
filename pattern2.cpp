#include <iostream>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int rows, cols;
    cin>>rows>>cols;

    for(int i = 1; i<=rows; i++){
        for(int j=1; j<=cols; j++){
            if(i==1 || i==rows || j == cols || j == 1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }


    return 0;
}