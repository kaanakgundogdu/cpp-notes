#include <iostream>
#include <string>

int main()
{
    std::string empty_string;
    std::string name {"Kaan"};
    std::string copy_name=name;
    std::string cut_name {"Kaan",3}; //Kaa
    std::string odd_string {cut_name, 0,2};//Ka
    std::string x_string (3,'A');//AAA
    
    std::cout<<empty_string<<std::endl;
    std::cout<<name<<std::endl;
    std::cout<<copy_name<<std::endl;
    std::cout<<cut_name<<std::endl;
    std::cout<<odd_string<<std::endl;
    std::cout<<x_string<<std::endl;
    std::cout<<x_string<<std::endl;
    
    std::cout<<"\nFindin substring \n"<<std::endl;

    std::string test_string {"This is a test"}; 

    std::cout<<"This is "<<test_string.find("This")<<" index"<<std::endl;
    std::cout<<"test is "<<test_string.find("test")<<" index"<<std::endl;
    std::cout<<"qwewqewq is "<<test_string.find("qwewqewq")<<" index"<<std::endl;
    
    std::cout<<"\nRemoving char\n"<<std::endl;
    std::cout<<"Normal string    : \t"<<test_string<<std::endl;
    std::cout<<"This word removed: \t"<<test_string.erase(0,5)<<std::endl;

    std::cout<<"\nLength\n"<<std::endl;

    std::cout<<name<<" strings length is: "<<name.length()<<std::endl;

    std::cout<<"\nJoint\n"<<std::endl;
    
    std::string full_name = name + " Akgundogdu";

    std::cout<<name<<" after added surname: "<<full_name<<std::endl;

	return 0;
}
