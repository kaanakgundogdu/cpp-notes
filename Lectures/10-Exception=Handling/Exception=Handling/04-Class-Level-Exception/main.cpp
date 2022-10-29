#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "IllegalBalanceException.h"


int main()
{
    try{
        std::unique_ptr<Account> kaans_account=std::make_unique<Checking_Account>("Kaan",-55);
        std::cout<<*kaans_account<<std::endl;
    }
    catch(const IllegalBalanceException &ex){
        std::cerr<<ex.what()<<std::endl;
    }
	std::cout<<"Program completed."<<std::endl;
	return 0;
}
