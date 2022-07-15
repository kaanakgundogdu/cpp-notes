#include <iostream>

void double_data(int *int_ptr){
    *int_ptr *=2;
}

int main()
{
    int number {20};
    int *int_ptr{&number};

    std::cout<<"Number: "<<number<<std::endl;
    double_data(int_ptr);
    std::cout<<"Number after func: "<<number<<std::endl;

	return 0;
}
