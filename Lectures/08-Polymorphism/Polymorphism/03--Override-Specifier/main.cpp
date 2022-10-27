#include <iostream>

class Base{
public:
    virtual void say_hello() const {
        std::cout<<"Hello I'm Base class object."<<std::endl;
    } 
    virtual void say_goodbye() const {
        std::cout<<"Bye bye, I'm Base class object."<<std::endl;
    }
    virtual ~Base(){}
};


class Derived:public Base{
public:
    //forgot to add const
    //this doesnt override base function creates new one
    virtual void say_hello() {
        std::cout<<"Hello I'm Derived class object."<<std::endl;
    }
    
    //forgot to add const again but this time func has override keyword
    // if you dont put const gives error this time.
    virtual void say_goodbye() const override {
        std::cout<<"Bye bye, I'm Derived class object."<<std::endl;
    }
    
    virtual ~Derived(){}
};


int main()
{    
    Base *p1 = new Base();
    p1->say_hello();
    Derived *p2 = new Derived();
    p2->say_hello();
    Base *p3= new Derived();
    p3->say_hello(); // Calls Base::say_hello, if you dont write override. 

    p1->say_goodbye();
    p2->say_goodbye();
    p3->say_goodbye();
    
	return 0;
}
