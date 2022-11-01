#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

int main()
{
    std::ifstream in_file("romeoandjuliet.txt");
    std::ofstream copy_file {"romeoandjuliet_copy.txt"};
    std::string line;
    int counter=1;
    
    if(!in_file){
        std::cerr<<"Error open file"<<std::endl;
        return -1;
    }
        
    if(!copy_file){
        std::cerr<<"Error creating file"<<std::endl;
        return -1;
    }
    
    while(std::getline(in_file,line)){
        std::string s = std::to_string(counter) + ". ";
        if(!line.empty()){
            line.insert(0,s);
            counter++;
        }

        copy_file<<line<<std::endl;
/*        copy_file<< std::setw(5) << std::left << counter << line<<std::endl;*/ //alternative

    }
    
    
	std::cout<<"Line counter: "<<counter<<std::endl;
    
	std::cout<<"Copy file modified."<<std::endl;
    
	return 0;
}
