#include <iostream>

int main()
{
    enum Direction{
        left,right,up,down
    };
    
    Direction heading{left};
    
    switch(heading){
        case left:
            std::cout<<"Going left"<<std::endl;
            break;
        case right:
            std::cout<<"Going right"<<std::endl;
            break;
        
        default:
            std::cout<<"OK!"<<std::endl;
    }
    
	return 0;
}
