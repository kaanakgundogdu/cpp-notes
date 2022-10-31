#include <iostream>
#include <iomanip>
#include <fstream>

int read_with_getline();
int read_with_char();

int main()
{
    /*return read_with_getline();*/
    return read_with_char();
}

int read_with_getline(){
    std::ifstream in_file;
    std::string line {};
    
    in_file.open("poem.txt");
    
    if(!in_file){
        std::cerr<<"Can't open file"<<std::endl;
        return -1;
    }
    
    while(std::getline(in_file,line)){
        std::cout<<line<<std::endl;
    }
    
    
	in_file.close();
	return 0;
}


int read_with_char(){
    std::ifstream in_file;
    char c{};
    
    in_file.open("poem.txt");
    
    if(!in_file){
        std::cerr<<"Can't open file"<<std::endl;
        return -1;
    }
    
    while(in_file.get(c)){
        std::cout<<c;
    }
    
    std::cout<<std::endl;
	in_file.close();
	return 0;
}