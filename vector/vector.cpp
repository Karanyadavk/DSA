#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    } //1 2 3 4

    vector<int>::iterator it;

    for(it=v.begin();it!=v.end(); it++){
        cout<<*it<<endl;
    } // 1 2 3 4

    for(auto element : v){
        cout<<element<<endl;
    } // 1 2 3 4

    v.pop_back(); // 1 2 3

    vector<int> v2 (3, 50);

    swap(v, v2);

    for(auto element : v2){
        cout<<element;
    }
    cout<<endl;

    for(auto element : v){
        cout<<element;
    }
    cout<<endl;

    pair <int, char> p;

    p.first = 10;
    p.second = 'j';

    cout<<p.first<<endl;
    cout<<p.second<<endl;

    return 0;
}