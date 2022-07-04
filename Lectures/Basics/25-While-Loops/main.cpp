#include <iostream>

int main()
{
    int number {};
    bool is_done {false};

    
    while(!is_done){
        std::cout<<"Enter an integer between 1 and 5: ";
        std::cin>>number;
        
        if(number<=1 ||number >=5){
            std::cout<<"Out of range, try again."<<std::endl;
        }
        else{
            std::cout<<"Thanks"<<std::endl;
            is_done=true;
        }
        
    }
    
	return 0;
}
