#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;


    for(int i =0; i<=100; i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }

    int pocketmoney = 3000;
    for(int date=1; date<=30; date++){
        if(date%2==0){
            continue;
        }
        if(pocketmoney==0){
            break;
        }
        cout<<"Go out today"<<endl;
        pocketmoney -= 300;

    }

    
    for(int i=0; i<n; i++){
        if(n%i == 0){
            cout<<"not a prime no."<<endl;
            break;
        }
        else{
            cout<<"prime no."<<endl;
        }
    }

    return 0;
}