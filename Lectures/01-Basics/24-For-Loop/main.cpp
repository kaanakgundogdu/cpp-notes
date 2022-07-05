#include <iostream>
#include <vector>

int main()
{
    
    for(int i {0}; i<10;++i){
        std::cout<<i<<std::endl;
    }
    std::cout<<"\n"<<std::endl;

    
    for (int i {1}, j {4}; i<=5; ++i,++j){
        std::cout<<i<<" * "<<j<<" = "<<i*j<<std::endl;
    }
    
    std::cout<<"\n"<<std::endl;

    std::vector<int> nums {10,20,30,40,50};
    
    for (unsigned i{0}; i < nums.size();i++){
        std::cout<<nums[i]<<std::endl;
    }
    
    // range-based for Loop
    
    std::cout<<"\nrange-based for Loop"<<std::endl;
    for(int num:nums){ // you can use auto for int
        std::cout<<num<<std::endl;
    }
    
    std::cout<<"\nLooping string"<<std::endl;

    for (auto c: "Kaan" ){
        std::cout<<c<<std::endl;
    }
    
	return 0;
}
