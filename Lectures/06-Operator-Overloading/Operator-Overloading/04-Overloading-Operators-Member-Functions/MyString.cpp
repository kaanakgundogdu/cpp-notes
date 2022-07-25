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

MyString::MyString(MyString &&source) : str(source.str)
{
    source.str=nullptr;
    std::cout<<"Move contructor used"<<std::endl;
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


MyString &MyString::operator = (MyString &&righths)
{
    std::cout<<"Using move assignment"<<std::endl;
    if(this == &righths){
        return *this;
    }

    delete [] str;
    str =righths.str;
    righths.str=nullptr;
    return *this;
}

MyString MyString::operator-() const{
    char *buff= new char(std::strlen(str)+1);
    std::strcpy(buff,str);
    for(size_t i=0;i<std::strlen(buff); i++){
        buff[i]=std::tolower(buff[i]);
    }
    MyString temp (buff);

    delete [] buff;
    return temp;
}

MyString MyString::operator+(const MyString &righths) const{
    char *buff= new char(std::strlen(str) + std::strlen(righths.str) + 1);
    std::strcpy(buff,str);
    std::strcat(buff,righths.str);

    MyString temp (buff);
    delete [] buff;
    return temp;
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
