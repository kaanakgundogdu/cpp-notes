#include <iostream>
#include <fstream>
#include <string>

void copy_with_get_line(std::ifstream &in_file, std::ofstream &out_file);
void copy_with_char(std::ifstream &in_file, std::ofstream &out_file);


int main()
{
    std::ifstream in_file {"poem.txt"};
    std::ofstream out_file {"poem_copy.txt"};

    
    if(!in_file){
        std::cerr<<"Error open file"<<std::endl;
        return -1;
    }
    
    if(!out_file){
        std::cerr<<"Error create file"<<std::endl;
        return -1;
    }
    
    /*copy_with_get_line(in_file,out_file);*/
    copy_with_char(in_file,out_file);
    
    std::cout<<"File copied"<<std::endl;
    in_file.close();
    out_file.close();
    
    
    
	std::cout<<std::endl;
	return 0;
}

void copy_with_get_line(std::ifstream &in_file, std::ofstream &out_file){
    std::string line;
    while(std::getline(in_file,line)){
        out_file<<line<<std::endl;
    }
}
void copy_with_char(std::ifstream &in_file, std::ofstream &out_file){
    char c;
    while(in_file.get(c)){
        out_file.put(c);
    }
}