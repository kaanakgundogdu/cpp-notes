#include <iostream>
#include <cstring>
#include <cctype>

int main()
{
    char first_name[20] {};
    char last_name[20] {};
    char full_name[20] {};
    
    
    std::cout<<"Please enter your first name: ";
    std::cin>>first_name;
    
    std::cout<<"Please enter your last name: ";
    std::cin>>last_name;
    
    std::cout<<"Hello "<<first_name<<" your first name has "<<strlen(first_name)<<" characters,"<<std::endl;
    std::cout<<"and your last name "<<last_name<<" has "<<strlen(last_name)<<" characters."<<std::endl;

    strcpy(full_name,first_name);
    strcat(full_name," ");
    strcat(full_name,last_name);
    std::cout<<"Your full name is "<<full_name<<std::endl;

    std::cout<<"\n---------------------------\n"<<std::endl;

    std::cout<<"Please enter your full name: ";
    std::cin>>full_name;
    std::cout<<"Your full name is "<<full_name<<std::endl; // if you give kaan akg it only takes kaan
    
	return 0;
}
