#include <iostream>
#include <iomanip>

void ruler(){
    std::cout<<"\n1234567890123456789012345678901234567890"<<std::endl;
}

int main()
{
    
    int num1{1234};
    double num2{1234.5678};
    std::string hi {"hello"};
    
    std::cout<<"\n-------------Default------------------"<<std::endl;
    ruler();
    std::cout<<num1
             <<num2
             <<hi
             <<std::endl;
                    
    std::cout<<"\n-------------Default One per line------------------"<<std::endl;
    ruler();
    std::cout<<num1<<std::endl;
    std::cout<<num2<<std::endl;
    std::cout<<hi<<std::endl; 
                   
    std::cout<<"\n-------------Width 10 for num1------------------"<<std::endl;
    ruler();
    std::cout<<std::setw(10)<<num1
             <<num2
             <<hi
             <<std::endl;
                                   
    std::cout<<"\n-------------Width 10 for num1 and num2------------------"<<std::endl;
    ruler();
    std::cout<<std::setw(10)<<num1
             <<std::setw(10)<<num2
             <<hi
             <<std::endl;
                                             
    std::cout<<"\n-------------Width 10 for num1 and num2 and hi ------------------"<<std::endl;
    ruler();
    std::cout<<std::setw(10)<<num1
             <<std::setw(10)<<num2
             <<std::setw(10)<<hi
             <<std::endl;
                                                             
    std::cout<<"\n-------------Width 10 for num1 and num2 and hi - left for all------------------"<<std::endl;
    ruler();
    std::cout<<std::setw(10)<<std::left<<num1
             <<std::setw(10)<<std::left<<num2
             <<std::setw(10)<<std::left<<hi
             <<std::endl;

                                                             
    std::cout<<"\n-------------Width 10 for num1 and num2 and hi - left for all - set fill dash------------------"<<std::endl;
    std::cout<<std::setfill('-');
    ruler();
    std::cout<<std::setw(10)<<std::left<<num1
             <<std::setw(10)<<std::left<<num2
             <<std::setw(10)<<std::left<<hi
             <<std::endl;                
                
                                                                        
    std::cout<<"\n-------------Width 10 for num1 and num2 and hi - left for all - set fill char------------------"<<std::endl;
    ruler();
    std::cout<<std::setw(10)<<std::left<<std::setfill('$')<<num1
             <<std::setw(10)<<std::left<<std::setfill('/')<<num2
             <<std::setw(10)<<std::left<<std::setfill('*')<<hi
             <<std::endl;
    
    std::cout<<std::endl;     
	
    return 0;
}
