#include <iostream>
#include "Account.h"
#include <string>

Account::Account():balance{0.0}, name{"Account"}
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
