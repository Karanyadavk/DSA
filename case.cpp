#include <iostream>
using namespace std;

int main(){
    char button;

    cin>>button;

    switch (button)
    {
    case 'a':
        cout<<"Hello"<<endl;
        break;
    case 'b':
        cout<<"Hell"<<endl;
        break;
    case 'c':
        cout<<"Hel"<<endl;
        break;
    case 'd':
        cout<<"He"<<endl;
        break;
    case 'e':
        cout<<"H"<<endl;
        break;
    
    default:
        cout<<"I am still learning"<<endl;
        break;
    }


}