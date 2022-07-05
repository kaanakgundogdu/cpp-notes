#include <iostream>

int main()
{
    int num {};
    int a{10},b{20};
    int result{};
    
    
    result= (a>b)? a:b;
    std::cout<<"Result is: "<<result<<std::endl;

    result= (a<b)? (b-a): (a-b);
    std::cout<<"Result is: "<<result<<std::endl;
    
    result=(a!=0)? (b/a):0;
    std::cout<<"Result is: "<<result<<std::endl;
    
    std::cout<<"Enter an integer: ";
    std::cin>>num;

    std::cout<<num<<" is " << ( (num%2==0) ? "even":"odd")<<std::endl;

    
    
    
	return 0;
}
