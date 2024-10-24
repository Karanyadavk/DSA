#include <iostream>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=n-i;j>=1;j-- ){
            cout<<" ";
        }
        for(int a = 1; a<=n; a++){
            cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}