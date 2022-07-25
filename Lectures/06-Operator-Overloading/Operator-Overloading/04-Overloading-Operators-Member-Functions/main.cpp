#include <iostream>
#include <vector>
#include "MyString.h"


int main()
{
    MyString test_str_1 {"Hello"};

    MyString test_str_2 {"KAKAKAKAAKAKAK"};

    test_str_1.display();
    test_str_2.display();


    std::cout<<"\n---------------Operator tests----------\n"<<std::endl;

    MyString plus_operator_test= test_str_1 +"Kaan";
    plus_operator_test.display();

    MyString minus_operator_test=-test_str_2;
    minus_operator_test.display();



	return 0;
}