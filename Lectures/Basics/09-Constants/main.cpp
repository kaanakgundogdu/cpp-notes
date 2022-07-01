#include <iostream>

int main(){
    
    const double priCe_per_room{30};
    const double sales_tax {0.06};
    const int estimate_expiry {30};
    int number_of_rooms {0};


    
    std::cout<<"hello welcome to Kaan's Carpet Service\n"<<std::endl;
    std::cout<<"How many rooms would you like cleaed? ";
    std::cin>>number_of_rooms;
    
    std::cout<<"\nEstimate for carpet cleaning service"<<std::endl;
    std::cout<<"Number of rooms: "<<number_of_rooms<<std::endl;
    
    std::cout<<"Price per room $ "<<priCe_per_room<<std::endl;
    
    std::cout<<"Cost $"<< priCe_per_room * number_of_rooms<<std::endl;
    
    std::cout<<"Tax $ "<<priCe_per_room*number_of_rooms*sales_tax<<std::endl;
    std::cout<<"-----------------------------------"<<std::endl;

    std::cout<<"Total estimate "<<priCe_per_room*number_of_rooms+priCe_per_room*number_of_rooms*sales_tax<<std::endl;
    std::cout<<"This estimate is valid for "<<estimate_expiry<<" days."<<std::endl;



    return 0;
}