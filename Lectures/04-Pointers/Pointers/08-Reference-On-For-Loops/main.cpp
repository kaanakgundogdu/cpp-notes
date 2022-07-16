#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> names{"Kaan","Ata","Bak"};

    for(auto str:names){
        str="Meymun";
    }
    for(auto str: names){
        cout<<str <<" "; //nothing changes bc. upside loop made copy
    }

    std::cout<<std::endl;
    std::cout<<std::endl;

    for(auto &str:names){
        str="Meymun";
    }
    for(auto const &str: names){
        cout<<str <<" "; //this time changed
    }

    std::cout<<std::endl;
    std::cout<<std::endl;
	return 0;
}
