#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>


class Account
{
    friend std::ostream &operator<<(std::ostream &os,const Account &account);
protected:
    double balance;
public:
    void deposit(double amount);
    void withdraw(double amount);

    Account();
    Account(double balance);

};

#endif // ACCOUNT_H
