#include <iostream>
#include "Account.h"

Account::Account()
{
}

Account::~Account()
{
}

void Account::deposit(double amount){
    std::cout<<"Acoount deposit called with "<<amount<<std::endl;
}

void Account::withdraw(double amount){
    std::cout<<"Acoount withdraw called with "<<amount<<std::endl;
}
