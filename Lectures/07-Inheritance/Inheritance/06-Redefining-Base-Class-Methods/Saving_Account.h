#ifndef SAVING_ACCOUNT_H
#define SAVING_ACCOUNT_H
#include "Account.h"


class Saving_Account: public Account
{
    friend std::ostream &operator<<(std::ostream &os,const Saving_Account &account);
protected:
    double int_rate;
public:

    Saving_Account();
    Saving_Account(double balance, double int_rate);

    void deposit(double amount);
    //Withdraw inherited
};

#endif // SAVING_ACCOUNT_H
