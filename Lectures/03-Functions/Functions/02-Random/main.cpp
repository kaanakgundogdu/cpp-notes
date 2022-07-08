#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    int random_number{};
    size_t count {10};
    int min {1};
    int max {6};


    std::cout<<"Ran_max on my system is: "<<RAND_MAX<<std::endl;

    srand(time(nullptr));//seed for random number

    for(size_t i {1}; i<=count;++i ){
        random_number=rand()% (max - min + 1) + min;
        std::cout<<random_number<<std::endl;

    }

	return 0;
}
