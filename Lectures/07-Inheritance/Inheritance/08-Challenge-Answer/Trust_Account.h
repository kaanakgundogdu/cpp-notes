#ifndef TRUST_ACCOUNT_H
#define TRUST_ACCOUNT_H
#include "Account.h"

class Trust_Account: public Account
{
    friend std::ostream &operator<<(std::ostream &os,const Trust_Account &account);
private:
    static constexpr const char *def_name="Unnamed Trust Account";
    static constexpr const double def_balance=0.0;
    static constexpr const double def_int_rate=0.0;
protected:
    double int_rate;
public:
    Trust_Account(std::string name=def_name,double balance=def_balance,double int_rate=def_int_rate);
    bool deposit(double amount);

};

#endif // TRUST_ACCOUNT_H
