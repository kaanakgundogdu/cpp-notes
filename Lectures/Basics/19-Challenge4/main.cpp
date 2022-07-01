#include <iostream>

int main()
{
    float total_money{0};
    int dolar_count {0};
    int quarter_count {0};
    int dime_count {0};
    int nickel_count {0};
    int penny_count {0};
    
    std::cout<<"Enter money amount: ";
    std::cin>>total_money;
    
    total_money/=100;
    
    dolar_count=total_money/1;
    total_money= total_money-dolar_count*1;
    
    quarter_count=total_money/0.25;
    total_money= total_money-quarter_count*.25; 
   
    dime_count=total_money/.10;
    total_money= total_money-dime_count*.10;
    
    nickel_count=total_money/0.05;
    total_money= total_money-nickel_count*.05;
    
    penny_count=total_money/0.01;
    total_money= total_money-(penny_count*.01);
    
    std::cout<<"Dolars  : "<<dolar_count <<std::endl;
    std::cout<<"Quarters: "<<quarter_count <<std::endl;    
    std::cout<<"Dimes   : "<<dime_count <<std::endl;
    std::cout<<"Nickels : "<<nickel_count <<std::endl;    
    std::cout<<"Pennies : "<<penny_count <<std::endl;
    
    
    
	return 0;
}
