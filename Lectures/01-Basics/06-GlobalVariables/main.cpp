#include <iostream>

int age {18}; // Global variable


int main(){
    
//    int age {16}; // if you use this its shadows global var and use this var. 
    
    
    std::cout<<"I'm "<<age<<" years old"<<std::endl;
    return 0;
}