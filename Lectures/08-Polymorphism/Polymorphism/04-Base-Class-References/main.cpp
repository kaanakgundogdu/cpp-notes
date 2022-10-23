#include <iostream>

class Account{
public:
    virtual void withdraw(double amount){
        std::cout<<"In Account::withdraw"<<std::endl;
    }
    virtual ~Account(){
        std::cout<<"Account::destructor"<<std::endl;
    }
};

class Checking:public Account{
public:
    virtual void withdraw(double amount){
        std::cout<<"In Checking::withdraw"<<std::endl;
    }
    virtual ~Checking(){
        std::cout<<"Checking::destructor"<<std::endl;
    }
};

class Savings: public Account{
public:
    virtual void withdraw(double amount){
        std::cout<<"In Savings::withdraw"<<std::endl;
    }
    virtual ~Savings(){
        std::cout<<"Savings::destructor"<<std::endl;
    }
};

class Trust: public Account{
public:
    virtual void withdraw(double amount){
        std::cout<<"In Trust::withdraw"<<std::endl;
    }
    virtual ~Trust(){
        std::cout<<"Trust::destructor"<<std::endl;
    }
};

void do_withdraw(Account &account, double amount){
    account.withdraw(amount);
}

int main()
{
    Account a;
    Account &ref=a;
    ref.withdraw(1000);//Account withdraw
    
    Trust t;
    Trust &ref_t=t;
    ref_t.withdraw(1000);//Trust withdraw

    Account a1;
    Savings a2;
    Checking a3;
    Trust a4;
    
    do_withdraw(a1,100); // Account withdraw
    do_withdraw(a2,200); // Savings withdraw
    do_withdraw(a3,300); // Checking withdraw
    do_withdraw(a4,400); // Trust withdraw
    
    return 0;
}
