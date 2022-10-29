#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "IllegalBalanceException.h"
#include "InsufficentFundsException.h"


int main()
{
    try{
        std::unique_ptr<Account> kaans_account=std::make_unique<Checking_Account>("Kaan",-55);
        std::cout<<*kaans_account<<std::endl;
    }
    catch(const IllegalBalanceException &ex){
        std::cerr<<ex.what()<<std::endl;
    }
    
    try{
        std::unique_ptr<Account> fujis_account=std::make_unique<Trust_Account>("Fuji",5000,2.3);
        fujis_account->withdraw(100000);
        std::cout<<*fujis_account<<std::endl;
    }
    catch(const InsufficentFundsException &ex){
        std::cerr<<ex.what()<<std::endl;
    }
    
	std::cout<<"Program completed."<<std::endl;
	return 0;
}
