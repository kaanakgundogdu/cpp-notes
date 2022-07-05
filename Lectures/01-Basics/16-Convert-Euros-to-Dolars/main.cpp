#include <iostream>

int main()
{
    const double usd_per_eur{1.19};
    
    
    
    std::cout<<"Welcome to the EUR to USD converter"<<std::endl;
    std::cout<<"Enter the value in EUR: ";
    
    double euros {0.0};
    double dollars {0.0};
    
    std::cin>>euros;
    dollars=euros*usd_per_eur;
    
    std::cout<<euros<<" euros is equivalent to "<<dollars<<std::endl;

	return 0;
}
