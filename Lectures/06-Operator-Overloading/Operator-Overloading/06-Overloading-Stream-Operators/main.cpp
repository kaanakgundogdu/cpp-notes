#include <iostream>
#include <vector>
#include "MyString.h"

using namespace std;

int main()
{
    MyString test_str_1 {"Hello"};

    MyString test_str_2 {"KAKAKAKAAKAKAK"};

    MyString test_str_3 ;


    std::cout<<"Enter the third test string ";
    cin>>test_str_3;
    cout<<"The three stooges are "<<test_str_1<<", "<<test_str_2<<", "<<test_str_3<<endl;


    std::cout<<"\n-------------------------\n"<<std::endl;

    std::cout<<"Enter the three stooges names seperated by space: ";
    cin>>test_str_1>>test_str_2>>test_str_3;

    cout<<"The three stooges are "<<test_str_1<<", "<<test_str_2<<", "<<test_str_3<<endl;



	return 0;
}