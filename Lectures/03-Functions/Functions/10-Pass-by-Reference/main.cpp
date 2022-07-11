#include <iostream>

void swap(int &a,int &b);

int main()
{
    int first_number {10}, second_number {50};
    std::cout<<"Numbers before swap: first number: "<<first_number<< " second number: "<<second_number<<std::endl;
    swap(first_number,second_number);
    std::cout<<"Numbers after swap: first number: "<<first_number<< " second number: "<<second_number<<std::endl;


	return 0;
}

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}