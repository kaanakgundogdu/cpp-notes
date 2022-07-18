#ifndef _ACCOUNT_H
#define _ACCOUNT_H
#include <string>


class Account{
private:
    std::string name;
    double balance;
public:
    void set_balance(double bal){
        balance=bal;
    }
    double get_balance(){
        return balance;
    }

    //methods will be declared outside te class declaration
    void set_name(std::string n);
    std::string get_name();

    bool deposit(double amaoun);
    bool withdraw(double amaoun);

};
#endif // _ACCOUNT_H
