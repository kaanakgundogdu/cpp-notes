#include <iostream>

int main(){
    
    const double price_per_small_room{25};
    const double price_per_big_room{35};
    const double sales_tax {0.06};
    const int estimate_expiry {30};
    int number_of_small_rooms {0};
    int number_of_big_rooms {0};
    int total_cost {0};
    

    
    std::cout<<"hello welcome to Kaan's Carpet Service\n"<<std::endl;
    std::cout<<"How many small rooms would you like cleaed? ";
    std::cin>>number_of_small_rooms;  
    
    
    std::cout<<"How many big rooms would you like cleaed? ";
    std::cin>>number_of_big_rooms;
    
    total_cost=number_of_small_rooms*price_per_small_room + number_of_big_rooms*price_per_big_room;

    
    std::cout<<"\nEstimate for carpet cleaning service"<<std::endl;
    std::cout<<"Number of small rooms: "<<number_of_small_rooms<<std::endl;
    std::cout<<"Number of big rooms: "<<number_of_big_rooms<<std::endl;
    
    std::cout<<"Price per small room $ "<<price_per_small_room<<std::endl;
    std::cout<<"Price per big room $ "<<price_per_big_room<<std::endl;
    
    std::cout<<"Cost $"<< total_cost<<std::endl;
    
    std::cout<<"Tax $ "<<total_cost*sales_tax<<std::endl;
    std::cout<<"-----------------------------------"<<std::endl;

    std::cout<<"Total estimate "<< total_cost +  total_cost*sales_tax<<std::endl;
    std::cout<<"This estimate is valid for "<<estimate_expiry<<" days."<<std::endl;



    return 0;
}