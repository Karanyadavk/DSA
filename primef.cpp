#include <iostream>
#include <math.h>
using namespace std;

    
    int prime(int n){
        for(int i=2; i<n; i++){
            if(n%i==0){
                cout<<"no prime";
                break;
            }
        cout<<"prime no.";
        }
    }

    int main(){
        int n;
        cin>>n;

        prime(n);

        return 0;
    }
