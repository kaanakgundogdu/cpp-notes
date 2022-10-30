#include <iostream>
#include <iomanip>

int main()
{
    int num{255};
    
	std::cout<<"\n--------------Displaying different bases---------------"<<std::endl;
    
    std::cout<<std::dec<<num<<std::endl;
    std::cout<<std::hex<<num<<std::endl;
    std::cout<<std::oct<<num<<std::endl;   
 
	std::cout<<"\n--------------Showing the base prefixes---------------"<<std::endl;
    std::cout<<std::showbase;
    std::cout<<std::dec<<num<<std::endl;
    std::cout<<std::hex<<num<<std::endl;
    std::cout<<std::oct<<num<<std::endl; 
    
	std::cout<<"\n--------------Hex with uppercase---------------"<<std::endl;
    std::cout<<std::showbase<<std::uppercase;
    std::cout<<std::dec<<num<<std::endl;
    std::cout<<std::hex<<num<<std::endl;
    std::cout<<std::oct<<num<<std::endl;   
 
	std::cout<<"\n--------------Show + sign---------------"<<std::endl;
    std::cout<<std::showpos;
    std::cout<<std::dec<<num<<std::endl;
    std::cout<<std::hex<<num<<std::endl;
    std::cout<<std::oct<<num<<std::endl; 
    
	std::cout<<"\n--------------Setting using the set method---------------"<<std::endl;
    
    int a{244};
    std::cout.setf(std::ios::showbase);
    std::cout.setf(std::ios::uppercase);
    std::cout.setf(std::ios::showpos);
    std::cout<<std::dec<<a<<std::endl;
    std::cout<<std::hex<<a<<std::endl;
    std::cout<<std::oct<<a<<std::endl;    
	std::cout<<"\n--------------Reset defaults---------------"<<std::endl;
    
    int b{100};
    std::cout<<std::resetiosflags(std::ios::basefield);
    std::cout<<std::resetiosflags(std::ios::showbase);
    std::cout<<std::resetiosflags(std::ios::showpos);
    std::cout<<std::resetiosflags(std::ios::uppercase);
    std::cout<<std::dec<<b<<std::endl;
    std::cout<<std::hex<<b<<std::endl;
    std::cout<<std::oct<<b<<std::endl;
    
	return 0;
}
