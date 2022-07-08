#include <iostream>
#include <cmath>

int main()
{
    double number {};

    std::cout<<"Enter a number(double): ";
    std::cin>>number;


    std::cout<<"The sqrt of "<<number<<" is "<<sqrt(number)<<std::endl;
    std::cout<<"The cubed root of "<<number<<" is "<<cbrt(number)<<std::endl;

    std::cout<<"The sine of "<<number<<" is "<<sin(number)<<std::endl;
    std::cout<<"The cosine root of "<<number<<" is "<<cos(number)<<std::endl;

    std::cout<<"The ceil of "<<number<<" is "<<ceil(number)<<std::endl;
    std::cout<<"The floor root of "<<number<<" is "<<floor(number)<<std::endl;
    std::cout<<"The round of "<<number<<" is "<<round(number)<<std::endl;

    double power {};

    std::cout<<"Enter a power to raise "<<number<<" to: ";
    std::cin>>power;
    std::cout<<number <<"raised to the "<<power<<" power is: "<<pow(number,power)<<std::endl;


	return 0;
}
