#include <iostream>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;

    for(int i=0; i<=n; i++){
        for(int j=1; j< n+1-i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }


    return 0;
}