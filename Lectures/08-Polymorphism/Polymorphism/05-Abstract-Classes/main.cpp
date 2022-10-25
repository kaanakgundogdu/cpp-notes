#include <iostream>
#include <vector>

class Shape{ //Abstract base class
private:

public:
    virtual void draw()=0;
    virtual void rotate()=0;
    virtual ~Shape(){}
};

class Open_Shape: public Shape{ //Abstract class
public:
    virtual ~Open_Shape(){}
};

class Closed_Shape: public Shape{ //Abstract class
public:
    virtual ~Closed_Shape(){}
};

class Line: public Open_Shape{ //Concrete class
public:
    virtual void draw() override{
        std::cout<<"Drawing a line"<<std::endl;
    }
    virtual void rotate() override{
        std::cout<<"Rotating line"<<std::endl;
    }
    virtual ~Line(){}
};

class Circle: public Closed_Shape{
public:
    virtual void draw() override{
        std::cout <<"Drawing a Circle"<<std::endl;
    }
    virtual void rotate() override{
        std::cout<<"Rotating a Circle"<<std::endl;
    }
    virtual ~Circle(){}
};

class Square: public Closed_Shape{
public:
    virtual void draw() override{
        std::cout<<"Drawing a Square"<<std::endl;
    }
    virtual void rotate() override{
        std::cout<<"Rotate a Square"<<std::endl;
    }
    virtual ~Square(){}
};

void screen_refresh(const std::vector<Shape *> &shapes){
    std::cout<<"Refreshing"<<std::endl;
    for(const auto p: shapes){
        p->draw();
    }
}

int main()
{
    Shape *circle_ptr=new Circle();
    circle_ptr->draw();
    circle_ptr->rotate();
    
    Shape *s1=new Line();
    Shape *s2=new Circle();
    Shape *s3=new Square();
    
    std::vector<Shape *> shapes{s1,s2,s3};
    
    screen_refresh(shapes);
    
    delete circle_ptr;
    delete s1;
    delete s2;
    delete s3;
	return 0;
}
