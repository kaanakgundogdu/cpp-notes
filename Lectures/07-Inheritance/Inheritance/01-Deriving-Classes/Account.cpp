#include "Account.h"

Account::Account()
{
}

Account::~Account()
{
}

void deposit(double amount){
    std::cout<<"Acoount deposit called with "<<amount<<std::endl;
}

void withdraw(double amount){
    std::cout<<"Acoount withdraw called with "<<amount<<std::endl;
}
