#include <iostream>

int main(){

    std::cout<<"\n------------Character type-------\n"<<std::endl;

    //Character type
    char middle_initial{'J'};
    std::cout<<"My middle initial is " << middle_initial<<std::endl;
    
    std::cout<<"\n------------integer types-------\n"<<std::endl;

    //integer types
    unsigned short int exam_score {55}; // same as unsigned short exam_score {55}
    std::cout<<"My exam score was " << exam_score<<std::endl;
    
    int countries_represented {65};
    std::cout<<"There were " << countries_represented<<" countries represented in my meeting." <<std::endl;
    
    long people_in_florida {20610000};
    
    std::cout<<"There are about " <<  people_in_florida <<" people in Florida." <<std::endl;
    
    long long people_on_earth {7'600'000'000};
//    long people_on_earth = 7'600'000'000; // this causes overflow and gives you -989934592
    std::cout<<"There are about " <<  people_on_earth <<" people on Earth." <<std::endl;
    
    long long distance_to_alpha_centauri {9'461'000'000'000};
    std::cout<<"The distance to alpha centauri is " << distance_to_alpha_centauri <<" kilometers." <<std::endl;

    std::cout<<"\n------------floating point types-------\n"<<std::endl;

    float car_payment{401.23};
    std::cout<<"My car payment is "<< car_payment <<std::endl;

    double pi {3.14159};
    std::cout<<"Pi is "<< pi <<std::endl;
    
    long double large_amount {2.7e120};
    std::cout<< large_amount << " is very  big number!" <<std::endl;

    std::cout<<"\n------------Boolean type-------\n"<<std::endl;
    
    bool is_game_over {false};
    std::cout<< "The value of is game over is " << is_game_over <<std::endl;

    std::cout<<"\n------------Overflow example-------\n"<<std::endl;

    short value1 {30000};
    short value2 {1000};
    short product {value1 * value2};//Product doesnt fit in short. This cause overflow
    
    std::cout<< "The product of "<< value1<<" and "<<value2<<" is " << product <<std::endl;

    
    return 0;
}