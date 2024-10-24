#include <iostream>
using namespace std;



int fact(int n){
    int pro = 1;
    for(int i =2; i<=n; i++){
        pro *= i;
    }
    return pro;
}

int main(){

    int n;
    cin>>n;
    // cin>>n>>r;

    // int c = fact(n)/(fact(r)*fact(n-r));
    // cout<<c;

    for(int i=0; i<=n; i++){
        for(int j=0; j<=i; j++){
            int c = fact(i)/(fact(j)*fact(i-j));
            cout<<c;
        }
        cout<<endl;
    }

    return 0;
}