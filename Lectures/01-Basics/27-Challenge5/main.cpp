#include <iostream>
#include <vector>
#include <iomanip>

int main()
{
    std::vector <int> numbers;
    char selection{};
    do{
        std::cout<<"P- Print numbers"<<std::endl;
        std::cout<<"A- Add a number"<<std::endl;
        std::cout<<"M- Mean of numbers"<<std::endl;
        std::cout<<"S- Display samllest num"<<std::endl;
        std::cout<<"L- Display largest num"<<std::endl;
        std::cout<<"Q- Quit"<<std::endl;
        std::cout<<"\nEnter your selection: ";
        std::cin>>selection;

        
        if(selection=='P'||selection=='p'){
            std::cout<<"\n[ ";
            for(unsigned i{0}; i<numbers.size();++i){
                std::cout<<numbers[i]<<" ";
            }
            std::cout<<"]\n";

        }
        else if(selection=='A'||selection=='a'){
            int addedNumber{0};
            std::cout<<"\nEnter an integer: ";
            std::cin>>addedNumber;
            numbers.push_back(addedNumber);
        }
        
        else if(selection=='M'||selection=='m' ){
            int sum=0;
            double mean;
            if(numbers.size()==0){
                std::cout<<"\nVector is empty\n"<<std::endl;
            }
            else{
                for(auto i:numbers){
                    sum+=i;
                }
                mean=static_cast<double>(sum)/numbers.size();
                std::cout<<std::fixed<<std::setprecision(1);
                std::cout<<"\nMean is "<<mean<<"\n"<<std::endl;
            }
        }
        
        else if(selection=='S'||selection=='s'){
            if(numbers.size()==0){
                std::cout<<"\nVector is empty\n"<<std::endl;
            }
            else{
                int smallest=numbers[0];
                for(auto i:numbers){
                    if(i<smallest)
                        smallest=i;
                }
                std::cout<<"\nSmallest number is: "<<smallest<<"\n"<<std::endl;
            }
        }
        
        else if(selection=='L'||selection=='l'){
            if(numbers.size()==0){
                std::cout<<"\nVector is empty\n"<<std::endl;
            }
            else{
                int biggest=0;
                for(auto i:numbers){
                    if(i>biggest)
                        biggest=i;
                }
                std::cout<<"\nLargest number is: "<<biggest<<"\n"<<std::endl;
            }
        }
        
        else if(selection=='Q'||selection=='q'){
            std::cout<<"Sayanora"<<std::endl;
        }
        else{
            std::cout<<"Invalid input "<<std::endl;
        }
        
        
    }while(selection!='q'&& selection!='Q');
    
    
	return 0;
}
