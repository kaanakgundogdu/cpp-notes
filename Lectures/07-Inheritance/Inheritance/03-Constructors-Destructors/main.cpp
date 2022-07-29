#include <iostream>

using namespace std;

class Base{
private:
    int value;
public:
    Base(): value {0} {cout<<"Base no-args cons."<<endl;}
    Base(int x): value {x} {cout<<"Base int overloaded cons."<<endl;}
    ~Base(){cout<<"Base destructor"<<endl;}
};

class Derived:public Base{
private:
    int doubled_value;

public:
//    Derived():doubled_value {0} {cout<<"Derived no args cons."<<endl;}
//    Derived(int x):doubled_value(x*2){cout<<"Derived int overloaded cons"<<endl;}
//    ~Derived(){ cout<<"Derived destructort"<<endl;}
};

int main()
{
    Base base;


//    std::cout<<"\n---------------Derived class---------------\n"<<std::endl;

//    Derived der;


	return 0;
}
