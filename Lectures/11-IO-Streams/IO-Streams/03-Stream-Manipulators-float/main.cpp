#include <iostream>
#include <iomanip>

int main()
{
    double num1 {123456789.987654321};
    double num2 {1234.5678};
    double num3 {1234.0};
    
	std::cout<<"\n--------------Default settings---------------"<<std::endl;
    std::cout<<num1<<std::endl;
    std::cout<<num2<<std::endl;
    std::cout<<num3<<std::endl;
    
	std::cout<<"\n--------------Percision 2---------------"<<std::endl;
    std::cout<<std::setprecision(2);
    std::cout<<num1<<std::endl;
    std::cout<<num2<<std::endl;
    std::cout<<num3<<std::endl;
    
	std::cout<<"\n--------------Percision 5---------------"<<std::endl;
    std::cout<<std::setprecision(5);
    std::cout<<num1<<std::endl;
    std::cout<<num2<<std::endl;
    std::cout<<num3<<std::endl;    
    
	std::cout<<"\n--------------Percision 9---------------"<<std::endl;
    std::cout<<std::setprecision(9);
    std::cout<<num1<<std::endl;
    std::cout<<num2<<std::endl;
    std::cout<<num3<<std::endl;
    

	std::cout<<"\n--------------Percision 3 And Fixed---------------"<<std::endl;
    std::cout<<std::setprecision(3)<<std::fixed;
    std::cout<<num1<<std::endl;
    std::cout<<num2<<std::endl;
    std::cout<<num3<<std::endl;
    

	std::cout<<"\n--------------Percision 3 And Scientific---------------"<<std::endl;
    std::cout<<std::setprecision(3)<<std::scientific;
    std::cout<<num1<<std::endl;
    std::cout<<num2<<std::endl;
    std::cout<<num3<<std::endl;    

	std::cout<<"\n--------------Percision 3 And Scientific and Uppercase---------------"<<std::endl;
    std::cout<<std::setprecision(3)<<std::scientific<<std::uppercase;
    std::cout<<num1<<std::endl;
    std::cout<<num2<<std::endl;
    std::cout<<num3<<std::endl;
    
	std::cout<<"\n--------------Percision 3 And Fixed and Show positive---------------"<<std::endl;
    std::cout<<std::setprecision(3)<<std::fixed<<std::showpos;
    std::cout<<num1<<std::endl;
    std::cout<<num2<<std::endl;
    std::cout<<num3<<std::endl;
    
    //Back to Defaults
    
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);
    std::cout<<std::resetiosflags(std::ios::showpos);

    
	std::cout<<"\n--------------Percision 10 And show point---------------"<<std::endl;
    std::cout<<std::setprecision(10)<<std::showpoint;
    std::cout<<num1<<std::endl;
    std::cout<<num2<<std::endl;
    std::cout<<num3<<std::endl;

    //Back to Defaults
    
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);
    std::cout<<std::setprecision(6);
    std::cout<<std::resetiosflags(std::ios::showpos);
    std::cout<<std::resetiosflags(std::ios::showpoint);

	std::cout<<"\n--------------Again Default settings---------------"<<std::endl;
    std::cout<<num1<<std::endl;
    std::cout<<num2<<std::endl;
    std::cout<<num3<<std::endl;
	return 0;
}
