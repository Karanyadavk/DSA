#include <iostream>
#include <stack>
using namespace std;

int main(){

    string ch = "123456789";

    stack<char> s;

    for(int i=0; i<ch.length(); i++){
        s.push(ch[i]);
    }

    string ans = "";

    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }

    cout<<ans<<endl;


    return 0;
}