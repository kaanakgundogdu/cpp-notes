#include <iostream>
#include <vector>

void swap(int &a,int &b);
void print_vector(const std::vector<int> &v);
int main()
{
    int first_number {10}, second_number {50};
    std::cout<<"Numbers before swap: first number: "<<first_number<< " second number: "<<second_number<<std::endl;
    swap(first_number,second_number);
    std::cout<<"Numbers after swap: first number: "<<first_number<< " second number: "<<second_number<<std::endl;

    std::vector<int> data {1,2,3,4,5,6};
    print_vector(data);

	return 0;
}

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void print_vector(const std::vector<int> &v){
    for(auto num:v){
        std::cout<<num<<" ";
    }
    std::cout<<std::endl;
}
