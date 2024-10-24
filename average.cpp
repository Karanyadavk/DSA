#include <iostream>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    double a, b;
    cin>>a>>b;

    double c = (a+b)/2;
    cout<<(a+b)/2<<endl;
    printf("%lf", c);

    return 0;
}