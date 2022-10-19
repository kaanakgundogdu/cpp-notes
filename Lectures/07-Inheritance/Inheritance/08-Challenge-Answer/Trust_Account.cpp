#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name,double balance,double int_rate):
Account{name,balance},int_rate{int_rate}
{
}


bool Trust_Account::deposit(double amount)
{
    if(amount<5000){
        amount += amount * (int_rate/100);
        return Account::deposit(amount);
    }
    amount += amount * (int_rate/100);
    return Account::deposit(amount+50);
}

std::ostream &operator<<(std::ostream &os,const Trust_Account &account)
{
    os<<"[Trust Account: "<<account.name<<" : "<<account.balance<<", "<<account.int_rate<<"%]";
    return os;
}