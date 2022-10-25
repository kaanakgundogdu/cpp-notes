#include <iostream>


class Shape{ //Abstract base class
private:

public:
    virtual void draw()=0;
    virtual void rotate()=0;
    virtual ~Shape(){}
};

class Open_Shhape: public Shape{ //Abstract class
public:
    virtual ~Open_Shhape(){}
};

class Closed_Shape: public Shape{ //Abstract class
public:
    virtual ~Closed_Shape(){}
};

class Line: public Open_Shhape{ //Concrete class
public:
    virtual void draw() override{
        std::cout<<"Drawing a line"<<std::endl;
    }
    virtual void rotate() override{
        std::cout<<"Rotating line"<<std::endl;
    }
    
};


int main()
{
	std::cout<<"This is a template."<<std::endl;
	return 0;
}
