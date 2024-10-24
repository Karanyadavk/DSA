#include <iostream>
using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }
    return n + sum(n-1);
}

int product(int n){
    if(n==0){
        return 1;
    }
    return n * product(n-1);
}

int power(int n, int p){
    if(p==0){
        return 1;
    }
    return n* power(n, p-1);
}

int fibo(int n){
    if(n==0 || n==1){
        return n;
    }

    return fibo(n-1)+fibo(n-2);
}

int main(){

    int n, p;
    cin>>n>>p;

    cout<<sum(n)<<endl;
    cout<<product(n)<<endl;
    cout<<power(n, p)<<endl;
    cout<<fibo(n)<<endl;

    return 0;
}