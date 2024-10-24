#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main(){

    int n;
    cin>>n;
    int sum = 1;
    int originaln = n;
    
    while(n>0){
        int lastdigit = n%10;
        sum += pow(lastdigit, 3);
        n = n/10;
    }

    if(originaln == sum){
        cout<<"Armstrong";
    }
    else{
        cout<<"Not Armstrong";
    }


    return 0;
}