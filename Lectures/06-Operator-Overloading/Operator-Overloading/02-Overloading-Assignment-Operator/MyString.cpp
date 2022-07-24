#include "MyString.h"
#include <iostream>
#include <cstring>



MyString::MyString():
str {nullptr}
{
    str=new char[1];
    *str='\0';
}


MyString::MyString(const char *s):
str {nullptr}
{
    if(s==nullptr){
        str=new char[1];
        *str='\0';
    }
    else{
        str= new char(std::strlen(s)+1);
        std::strcpy(str,s);
    }
}

MyString::MyString(const MyString &source):str {nullptr}
{
    str= new char(std::strlen(source.str)+1);
    std::strcpy(str,source.str);
}


MyString::~MyString()
{
    delete [] str;
}

MyString &MyString::operator = (const MyString &righths)
{
    std::cout<<"Copy assignment"<<std::endl;
    if(this == &righths){
        return *this;
    }
    delete [] this->str;
    str=new char(std::strlen(righths.str)+1);
    std::strcpy(this->str,righths.str);
    return *this;
}


void MyString::display() const
{
    std::cout<<"String is "<<str<<" and length is "<<get_length()<<std::endl;
}
int MyString::get_length() const
{
    return std::strlen(str);
}
const char *MyString::get_str() const
{
    return str;
}
