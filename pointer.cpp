#include <iostream>
using namespace std;

int main(){

    int n = 10;
    int *nptr = &n;

    cout<<&n<<endl;
    cout<<nptr<<endl;
    cout<<*nptr<<endl;

    *nptr++;
    nptr++;
    cout<<nptr<<endl;
    cout<<*nptr<<endl;




    return 0;
}