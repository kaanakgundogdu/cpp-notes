#include <iostream>

int main()
{
    
    int a{10},b{20};
    int score{92};
    int result{};
    
    
    result= (a>b)? a:b;
    std::cout<<"Result is: "<<result<<std::endl;

    result= (a<b)? (b-a): (a-b);
    std::cout<<"Result is: "<<result<<std::endl;
    
    result=(a!=0)? (b/a):0;
    std::cout<<"Result is: "<<result<<std::endl;



    
    
	return 0;
}
