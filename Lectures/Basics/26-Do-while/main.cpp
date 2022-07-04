#include <iostream>

int main()
{
    std::cout<<"\nDO WHILE LOOP\n";
    
    char selection{};
    
    do{
        std::cout<<"\n---------------"<<std::endl;
        std::cout<<"1.Do this"<<std::endl;
        std::cout<<"2.Do that"<<std::endl;
        std::cout<<"3.Do something else"<<std::endl;
        std::cout<<"Q. Quit"<<std::endl;
        std::cout<<"\nEnter your selection: ";
        std::cin>>selection;
        
        if(selection=='1')
            std::cout<<"1: doing this"<<std::endl;
        else if(selection=='2')
            std::cout<<"2: doing that"<<std::endl;
        else if(selection=='3')
            std::cout<<"3- doing someting else"<<std::endl;
        else if (selection=='Q' || selection=='q')
            std::cout<<"Sayanora"<<std::endl;
        else
            std::cout<<"Unknown option try again."<<std::endl;
            
    }while(selection!='q'&&selection!='Q');
	
    
    return 0;
}
