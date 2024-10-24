#include <iostream>
using namespace std;

class student{
    string name;

    public:
    
    int age;
    bool gender;

    void setName(string s){
        name = s;  //Setter Function
    }

    void getName(){
        cout<<name<<endl;  //Getter Function
    }

    void printInt(){
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"Age = ";
        cout<<age<<endl;
        cout<<"Gender = ";
        cout<<gender<<endl; 
    }

};


int main(){

    // student a;
    //     a.name = "tim";
    //     a.age = 30;
    //     a.gender = 0;

    // cout<<a.name<<a.age<<a.gender;

    student arr[3];
    for(int i=0; i<3; i++){

        string s;
        cout<<"Name = ";
        cin>>s;
        arr[i].setName(s);  //Setter Function

        cout<<"Age = ";
        cin>>arr[i].age;
        cout<<"Gender = ";
        cin>>arr[i].gender;
    }
    
    cout<<endl;

    for(int i=0; i<3; i++){
        arr[i].getName();
        arr[i].printInt();
    }

    return 0;
}