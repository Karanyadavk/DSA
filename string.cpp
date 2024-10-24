#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){

    string str = "dlsjalflfdflakieowjlasdljseofwk";


    // Uppercase using loop

    for(int i=0; i<str.size(); i++){
        str[i] -= 32;
    }

    for(int i=0; i<str.size(); i++){
        cout<<str[i];
    }
    cout<<endl;

    // Lowercase using loop

    for(int i=0; i<str.size(); i++){
        str[i] += 32;
    }

    for(int i=0; i<str.size(); i++){
        cout<<str[i];
    }
    cout<<endl;

    // Uppercase using transform

    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout<<str<<endl;

    // Lowercase using transform

    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout<<str<<endl;


    return 0;
}