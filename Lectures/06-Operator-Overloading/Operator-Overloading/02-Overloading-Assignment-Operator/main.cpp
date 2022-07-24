#include <iostream>
#include <vector>
#include "MyString.h"


int main()
{
    MyString a {"Hellow"};

    MyString b;

    b=a;
    b="This is test";

    std::cout<<"Template"<<std::endl;


	return 0;
}
