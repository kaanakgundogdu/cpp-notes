#include <iostream>
#include <string>

void print(int);
void print(double);
void print(std::string);

int main()
{
    print(10);
    print(300.0);
    print("C-syle string");// C-syle string converted to a c++ string

    std::string s{"c++ string"};
    print(s);

	return 0;
}

void print(int num){
    std::cout<<"Printing int "<<num<<std::endl;
}

void print(double num){
    std::cout<<"Printing double "<<num<<std::endl;
}

void print(std::string s){
    std::cout<<"Printing string "<<s<<std::endl;
}