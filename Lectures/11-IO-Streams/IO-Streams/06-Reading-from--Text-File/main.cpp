#include <iostream>
#include <iomanip>
#include <fstream>

int open_file();
int open_file_continuously();

int main()
{

/*    open_file();*/
    open_file_continuously();
	return 0;
}


int open_file(){
    std::ifstream in_file;
    std::string line;
    in_file.open("test.txt");
    int num;
    double total;
    
    if(!in_file){
        std::cerr<<"Can't open file"<<std::endl;
        return -1;
    }
    
    std::cout<<"File ready"<<std::endl;
    
    in_file>>line>>num>>total;
    std::cout<<line<<std::endl;
    std::cout<<num<<std::endl;
    std::cout<<total<<std::endl;
    
    in_file.close();
    return 0;
}

int open_file_continuously(){
    std::ifstream in_file;
    std::string line;
    int num;
    double total;
    
    in_file.open("test.txt");
    if(!in_file){
        std::cerr<<"Can't open file"<<std::endl;
        return -1;
    }
    
    //while(!in_file.eof()) or
    while(in_file>>line>>num>>total) {
        std::cout<<std::setw(10) <<std::left<<line
                 <<std::setw(10) <<num
                 <<std::setw(10) <<total
                 <<std::endl;
    }

    
    in_file.close();
    return 0;
}