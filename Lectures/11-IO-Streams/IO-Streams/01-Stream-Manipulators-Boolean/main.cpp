#include <iostream>
#include <iomanip>

int main()
{
    std::cout<<"noboolalpha - default (10==10): "<<(10==10)<<std::endl;
    std::cout<<"noboolalpha - default (10==99): "<<(10==99)<<std::endl;
    
    std::cout<<"\n---------------------formatting---------------------"<<std::endl;

    //set true or false formatting
    std::cout<<std::boolalpha;
    std::cout<<"noboolalpha - boolalpha (10==10): "<<(10==10)<<std::endl;
    std::cout<<"noboolalpha - boolalpha (10==99): "<<(10==99)<<std::endl;
    
    std::cout<<"\n---------------------still works---------------------"<<std::endl;
    //setting still works
    std::cout<<"boolalpha - (2==2): "<<(2==2)<<std::endl;
    std::cout<<"boolalpha - (4==55): "<<(4==55)<<std::endl;
    
    std::cout<<"\n---------------------noboolalpha---------------------"<<std::endl;

    std::cout<<std::noboolalpha;//toggle 0 to 1
    std::cout<<"noboolalpha -  (10==10): "<<(10==10)<<std::endl;
    std::cout<<"noboolalpha -  (10==99): "<<(10==99)<<std::endl;  
      
    std::cout<<"\n---------------------setf method---------------------"<<std::endl;

    std::cout.setf(std::ios::boolalpha);//set true or false with setf
    std::cout<<"setf - boolalpha (10==10): "<<(10==10)<<std::endl;
    std::cout<<"setf - boolalpha (10==99): "<<(10==99)<<std::endl;   
 
     std::cout<<"\n---------------------reset defaults---------------------"<<std::endl;

    std::cout<<std::resetiosflags(std::ios::boolalpha);//reset defaults
    std::cout<<"default (10==10): "<<(10==10)<<std::endl;
    std::cout<<"default (10==99): "<<(10==99)<<std::endl;    

    
    return 0;
}
