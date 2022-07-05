#include <iostream>

int main()
{
    int num1{10};// this is not assignment this is initializing
    int num2{20};// this is not assignment this is initializing
    
    num1=100; // assignment
    num1 = num2;
    num1 = num2=1000;
    
    //num1="Kaan";/this is compile error
    //100=num1;//gives error
    
    std::cout<<"num1 is "<<num1<<std::endl;
    std::cout<<"num2 is "<<num2<<std::endl;
    
    
	return 0;
}
