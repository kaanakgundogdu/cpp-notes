#include <iostream>


unsigned long long fibonacci_calculator(unsigned n);

int main()
{

    std::cout<<"Fibonacci of 1: "<<fibonacci_calculator(1)<<std::endl;
    std::cout<<"Fibonacci of 30: "<<fibonacci_calculator(30)<<std::endl;
    std::cout<<"Fibonacci of 40: "<<fibonacci_calculator(40)<<std::endl;


	return 0;
}

unsigned long long fibonacci_calculator(unsigned n){
    if(n<=1){
        return n;
    }

    return fibonacci_calculator(n-1)+fibonacci_calculator(n-2);

}