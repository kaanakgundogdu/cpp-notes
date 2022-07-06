#include <iostream>
#include <string>

int main()
{
    std::string empty_string;
    std::string name {"Kaan"};
    std::string copy_name=name;
    std::string cut_name {"Kaan",3}; //Kaa
    std::string odd_string {cut_name, 0,2};//Ka
    std::string x_string (3,'A');//WWW
    
    std::cout<<empty_string<<std::endl;
    std::cout<<name<<std::endl;
    std::cout<<copy_name<<std::endl;
    std::cout<<cut_name<<std::endl;
    std::cout<<odd_string<<std::endl;
    std::cout<<x_string<<std::endl;
    
    
	return 0;
}
