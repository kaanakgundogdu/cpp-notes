#include <iostream>
#include <iomanip>
#include <fstream>

int main()
{
    std::ifstream grades{};
    grades.open("grades.txt");
    std::string line;
    std::string correct_answer;
    std::string name;
    std::string answer;
    int point=0;
    int total=0;
    int students_count=0;
    
    
    
    if(!grades){
        std::cerr<<"Couldn't open the file"<<std::endl;
        return -1;
    }
    
    std::cout<<std::setw(20)<<std::left<<"Student"
             <<std::setw(20)<<"Score"
             <<std::endl;
    std::cout<<std::setw(0)<<std::right;
    std::cout<<"--------------------------------"<<std::endl;
    int i=0;
    
    while(std::getline(grades,line)){
        if (i==0){
            correct_answer=line;
            i++;
            continue;
        }
        if(i%2!=0){
            std::cout<<std::setw(20)<<std::left<<line;
            students_count++;
        }
        else{

            for(std::size_t j=0; j<line.length();j++){
                if(line[j]==correct_answer[j]){
                    point++;
                }
            }
            std::cout<<std::left<<point<<" / 5"
            <<std::endl;
        }
        total+=point;
        point=0;
        i++;
    }
    
    std::cout<<std::setw(0)<<std::right;

    std::cout<<"--------------------------------"<<std::endl;
    std::cout<<"Average: "<<static_cast<double>(total)/students_count<<std::endl;
    
	std::cout<<std::endl;
    
    grades.close();
	return 0;
}
