#include <iostream>


class Base{
public:
    int a{0};
    void display(){ std::cout<<"a"<<", "<<b<<", "<<c<<std::endl;}
protected:
    int b{0};
private:
    int c{0};
};

class Derived:public Base{
    //a public
    //b protected
    //c will not accessible

public:
    void access_base_members(){
        a=100;//OK
        b=200;//OK
//        c=300;//not accessible

    }

};

int main()
{

    std::cout<<"---------------Base class---------------"<<std::endl;
    Base base;
    base.a=100;//OK
//    base.b=200;//compiler error
//    base.c=300;//comp error

    std::cout<<"\n---------------Derived class---------------\n"<<std::endl;

    Derived der;
    der.a=100;
//    der.b=200; // ERROR
//    der.c=300; //ERROR

	return 0;
}
