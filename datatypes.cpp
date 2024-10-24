#include <iostream>
using namespace std;

int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif

    int a;
    float b;
    double c;
    char d;
    long int e;
    short int f;
    signed g;
    unsigned h;

    cout<<"size of integer : "<<sizeof(a)<<endl;
    cout<<"size of float : "<<sizeof(b)<<endl;
    cout<<"size of double : "<<sizeof(c)<<endl;
    cout<<"size of character : "<<sizeof(d)<<endl;
    cout<<"size of long int : "<<sizeof(e)<<endl;
    cout<<"size of short int : "<<sizeof(f)<<endl;
    cout<<"size of signed : "<<sizeof(g)<<endl;
    cout<<"size of unsigned : "<<sizeof(h)<<endl;

    // byte to bits
    cout<<"\n BYTE TO BITS \n\n";
    cout<<"size of integer : "<<sizeof(a)*8<<"bits"<<endl;
    cout<<"size of float : "<<sizeof(b)*8<<"bits"<<endl;
    cout<<"size of double : "<<sizeof(c)*8<<"bits"<<endl;
    cout<<"size of character : "<<sizeof(d)*8<<"bits"<<endl;
    cout<<"size of long int : "<<sizeof(e)*8<<"bits"<<endl;
    cout<<"size of short int : "<<sizeof(f)*8<<"bits"<<endl;
    cout<<"size of signed : "<<sizeof(g)*8<<"bits"<<endl;
    cout<<"size of unsigned : "<<sizeof(h)*8<<"bits"<<endl;


    return 0;
}