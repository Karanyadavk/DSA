#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){

    string str = "394097493457";

    sort(str.begin(), str.end(), greater<int>());
    cout<<str<<endl;
    sort(str.begin(), str.end());
    cout<<str<<endl;



    return 0;
}