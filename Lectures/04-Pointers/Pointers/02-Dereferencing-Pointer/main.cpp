#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int score{100};
    int *score_ptr{&score};

    std::cout<<"*score_ptr is "<<*score_ptr<<std::endl;
    *score_ptr=200;
    std::cout<<"new *score_ptr is "<<*score_ptr<<std::endl;
    std::cout<<"score is "<<score<<std::endl;


	return 0;
}
