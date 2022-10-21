#include <iostream>

class Base{
public:
    void say_hello() const{
        std::cout<<"Hello - I'm Base class object."<<std::endl;
    }
};

class Derived: public Base{
public:
    void say_hello() const{
        std::cout<<"Hello - I'm Derived class object."<<std::endl;
    }
};

void greetings(const Base &obj){
    std::cout<<"Greetings: ";
    obj.say_hello();
}

int main()
{
	Base base_obj;
    base_obj.say_hello();
    greetings(base_obj);

    Derived der_obj;
    der_obj.say_hello();
    greetings(der_obj);

    //if you dont say virtual it binds staticly
    Base *ptr =new Derived();
    ptr->say_hello();

    delete ptr;
	return 0;
}
