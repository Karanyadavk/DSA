#include <iostream>
using namespace std;

class base{ //run time //virtual function
    public:
    virtual void print(){
        cout<<"this is a print fun of base class"<<endl;
    }
    virtual void display(){
        cout<<"this is a print fun of base class"<<endl;
    }
};

class derived : public base{  // run time // virtual function
    public:
    void print(){
        cout<<"this is a print fun of derived class"<<endl;
    }
    void display(){ 
        cout<<"this is a display fun of derived class"<<endl;
    }
};

class op{  //compile time //operator overloading
    int real, imag;
    public:

    op(int r=0, int i=0){
        real = r;
        imag = i;
    }

    op operator + (op const &obj){
        op res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;

        return res;
    }

    void print(){
        cout<<real<<" +i"<<imag<<endl;
    }
};

class function{ // compile time // function overloading
    public:
    fun(){
        cout<<"I am a function with no argument"<<endl;
    }
    fun(int x){
        cout<< "I am a function with int argument"<<endl;
    }
    fun(double y){
        cout<<"I am a function with double argument"<<endl;
    }
};

int main(){

    function a;
    a.fun();
    a.fun(4);
    a.fun(6.2);

    op test(5, 6), test2(7, 6);
    op test3 = test + test2;
    test3.print();

    base *baseptr;
    derived d;
    baseptr = &d;

    baseptr -> print();
    baseptr -> display();

    // nothing but experimentation that's all
    base apple;
    apple.print();
    apple.display();


    return 0;
}