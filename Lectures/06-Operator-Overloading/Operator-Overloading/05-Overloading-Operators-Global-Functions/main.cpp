#include <iostream>
#include <vector>
#include "MyString.h"


int main()
{
    MyString test_str_1 {"Hello"};
    test_str_1.display();
    MyString test_str_2 {"KAKAKAKAAKAKAK"};
    test_str_2.display();
    MyString test_str_3 {"Hello"};
    test_str_3.display();

    std::cout<<"\n"<<std::endl;


    std::cout<<test_str_1.get_str()<<" == "<<test_str_2.get_str()<<" : "<<(test_str_1==test_str_2)<<std::endl;
    std::cout<<test_str_1.get_str()<<" == "<<test_str_3.get_str()<<" : "<<(test_str_1==test_str_3)<<std::endl;

    std::cout<<"\n-------------------------\n"<<std::endl;





	return 0;
}