#include <iostream>
#include <cstring>
#include <cctype>

int main()
{
    char full_name[20] {};
    char temp[20] {};

    
    std::cout<<"Please enter your full name: ";
    std::cin.getline(full_name,50);
    std::cout<<"Your full name is "<<full_name<<std::endl;
 
    strcpy(temp,full_name);
    if(strcmp(temp,full_name)==0){
        std::cout<<full_name<<" and "<<temp<<" are the same."<<std::endl;
    }   
    else{
        std::cout<<full_name<<" and "<<temp<<" are different."<<std::endl;
    }
    
    for(unsigned i {0}; i<strlen(full_name);++i){
        if(isalpha(full_name[i]))
            full_name[i]=toupper(full_name[i]);
    }

    std::cout<<"\nUppercase\n"<<std::endl;

    std::cout<<"Your full name is "<<full_name<<std::endl;

    
    
	return 0;
}
