#include <iostream>

int main()
{
    char letter_grade {};
    
    std::cout<<"Enter letter grade you expect on the exam (A-F): ";
    std::cin>>letter_grade;
    
    switch(letter_grade){
        case 'a':
        case 'A':
            std::cout<<"You need a 90 or above, study hard!"<<std::endl;
            break;
        case 'b':
        case 'B':
            std::cout<<"You need a 80-89 for B, study hard!"<<std::endl;
            break;
        case 'c':
        case 'C':
            std::cout<<"You need a 70-79, study hard!"<<std::endl;
            break;
        case 'd':
        case 'D':
            std::cout<<"You need a 60-69 or above, study hard!"<<std::endl;
            break;
        case 'f':
        case 'F':{
            char confirm {};
            
            std::cout<<"Are you sure (Y/N)? ";
            std::cin>>confirm;
            if(confirm=='Y'||confirm=='y'){
                std::cout<<"Ok, I guess you didn't study... "<<std::endl;

            }
            else if(confirm=='N'||confirm=='n'){
                std::cout<<"Good, go study!"<<std::endl;

            }
            else{
                std::cout<<"Invalid answer"<<std::endl;
            }
            
            break;
        }

        default:
            std::cout<<"Sorry, not valid grade."<<std::endl;


    }
    
    
	return 0;
}
