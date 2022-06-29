#include <iostream>

int main(){
    
    int fav_Number;
    std::cout<<"Enter yout favorite number between 1 and 100:";
    
    std::cin>>fav_Number;
    
    std::cout<<"Amazing!! That's my favorite number too!"<<std::endl;
    std::cout<<"No really!! " << fav_Number << " is my favorite number!"<<std::endl;

    
    return 0;
}