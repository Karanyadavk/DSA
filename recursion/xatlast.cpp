#include <iostream>
using namespace std;

string atLast(string s){
    if(s.length()==0){
        return "";
    }

    char ch = s[0];
    string ans = atLast(s.substr(1));

    if(ch=='x'){
        return ans+ch;
    }
    return ch+ans;
}

int main(){

    cout<<atLast("xdfslxsxxxdfs");


    return 0;
}