#include <iostream>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int savings;

    cin>>savings;

    if(savings>5000){
        if(savings>10000){
            cout<<"Roadtrip with neha"<<endl;
        }
        else{
            cout<<"Shopping with neha"<<endl;
        }
    }

    else if(savings>2000){
        cout<<"Go out with rashimi"<<endl;
    }

    else{
        cout<<"friends"<<endl;
    }


    return 0;
}