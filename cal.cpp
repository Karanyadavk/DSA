#include <iostream>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    float num1, num2;
    char op;

    cout<<"Write the numbers : "<<endl;
    cin>>num1>>num2;

    cout<<"Operator : "<<endl;
    cin>>op;

    switch (op)
    {
    case  '+' :
        cout<<num1+num2<<endl;
        break;
    case  '-' :
        cout<<num1-num2<<endl;
        break;
    case  '/' :
        cout<<num1/num2<<endl;
        break;
    case  '*' :
        cout<<num1*num2<<endl;
        break;
    
    default:
        cout<<"put only the operators"<<endl;
        break;
    }


    return 0;
}