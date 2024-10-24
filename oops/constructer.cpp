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

    student(){
        cout<<"Deafult Constructer"<<endl;
    } //Deafult Constructer

    student(string s, int a, bool g){
        name = s;
        age = a;
        gender = g;
        cout<<"Parameterised Constucter"<<endl;
    } //Parameterised Constructer

    student(student &a){
        name = a.name;
        age = a.age;
        gender = a.gender;
        cout<<"Copy Constucter"<<endl;
    } // Copy Constucter

    ~student(){
        cout<<"Destructor"<<endl;
    }

    void printInt(){
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"Age = ";
        cout<<age<<endl;
        cout<<"Gender = ";
        cout<<gender<<endl; 
    }

    bool operator == (student &a){  // Operator Oveloading
            if(name == a.name && age == a.age && gender == a.gender){
                return true;
            }
            
            return false;
            
        }

};

int main(){

    student a("Neha", 20, 1);
    student b("Mohan", 21, 0);
    student d;
    student c(a);

    if(c==a){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not Same"<<endl;
    }
        
    if(b==a){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not Same"<<endl;
    }
    

    return 0;
}