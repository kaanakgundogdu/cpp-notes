#include <iostream>

int main()
{
    
    int counter {10};
    int result {0};
    
    std::cout<<"Counter "<<counter<<std::endl;
    
    counter++;//counter +1
    std::cout<<"Counter: "<<counter<<std::endl;  
    
    ++counter;
    std::cout<<"Counter: "<<counter<<std::endl;

    counter=10;
    std::cout<<"\n\nCounter: "<<counter<<std::endl;

    result=++counter;//counter increment before its use bc. its preincrement.
    std::cout<<"Counter: "<<counter<<std::endl;
    std::cout<<"Result: "<<result<<std::endl;
    
    counter=10;
    std::cout<<"\n\nCounter: "<<counter<<std::endl;
    result=counter++;//result become counter and than increment works
    std::cout<<"Counter: "<<counter<<std::endl;
    std::cout<<"Result: "<<result<<std::endl;


    counter=10;
    result=0;
    std::cout<<"\n\nCounter: "<<counter<<std::endl;
    result= ++counter+ 10 ;
    std::cout<<"Counter: "<<counter<<std::endl;
    std::cout<<"Result: "<<result<<std::endl;
    
    counter=10;
    result=0;
    std::cout<<"\n\nCounter: "<<counter<<std::endl;
    result= counter++ + 10 ;
    std::cout<<"Counter: "<<counter<<std::endl;
    std::cout<<"Result: "<<result<<std::endl;

    
	return 0;
}
