#include "Account.h"

void Account::set_name(std::string n){
    name=n;
}


std::string Account::get_name(){
    return name;
}

bool Account::deposit(double amount){
    balance+=amount;
    return true;
}

bool Account::withdraw(double amaount){
    if(balance - amaount >= 0){
        balance-=amaount;
        return true;
    }
    return false;
}

