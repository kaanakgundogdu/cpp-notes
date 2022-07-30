
#include <iostream>

using namespace std;

class Base{
private:
    int value;
public:
    Base(): value {0} {cout<<"Base no-args cons."<<endl;}
    Base(int x): value {x} {cout<<"Base int overloaded cons."<<endl;}
    Base(const Base &other): value{other.value}{
        cout<<"Base copy constructor."<<endl;
    }

    Base &operator= (const Base &righths){
        cout<<"Base operator = "<<endl;
        if(this==&righths){
            return *this;
        }
        value=righths.value;
        return *this;
    }

    ~Base(){cout<<"Base destructor"<<endl;}
};

class Derived:public Base{
    using Base::Base;
private:
    int doubled_value;

public:
    Derived(): Base{}, doubled_value {0} {cout<<"Derived no args constructor."<<endl;}
    Derived(int x): Base{x}, doubled_value(x*2){cout<<"Derived int overloaded constructor"<<endl;}

    Derived(const Derived &other)
    : Base(other), doubled_value{other.doubled_value} {
            cout<<"Derived copy constructor";
    }

    ~Derived(){ cout<<"Derived destructort"<<endl;}
};

int main()
{
    Base b{100}; //Overloaded constructor
    Base b1{b}; //Copy constructor
    b=b1;       //Copy assignment

    cout<<"\n"<<endl;
//
//    Derived d{100}; //Overloaded constructor
//    Derived d1{d}; //Copy constructor
//    d=d1;          //Copy assignment

	return 0;
}
