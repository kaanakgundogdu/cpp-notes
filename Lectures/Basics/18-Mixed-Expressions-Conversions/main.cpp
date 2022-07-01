#include <iostream>

int main()
{
    int total {};
    int num1{}, num2{}, num3{}; //each init. zero
    const int count{3};
    
    
    std::cout<<"Enter 3 integers seperated by space: ";
    std::cin>>num1>>num2>>num3;
    
    total=num1+num2+num3;
    double average {0.0};
    average= static_cast<double>(total)/count;

//    average=(double)total/count;// old c style cast dont want to do this
    
    
    std::cout<<"The three numbers were: "<<num1<<","<<num2<<","<<num3<<std::endl;
    std::cout<<"Tum sum of the numbers is: "<<total<<std::endl;
    std::cout<<"The average of the numbers is: "<<average<<std::endl;
	return 0;
}
