#include <iostream>
#include "Account.h"
#include "Savings_Account.h"
#include <string>

using namespace std;


int main()
{
    std::cout<<"-------------------Acc1--------------------"<<std::endl;

    Account acc1{};
    acc1.deposit(2000.0);
    acc1.withdraw(500.0);

    std::cout<<"-------------------acc_ptr--------------------"<<std::endl;
    Account *acc_ptr{nullptr};
    (*acc_ptr).deposit(2000.0);
    (*acc_ptr).withdraw(500.0);
    delete acc_ptr;

    std::cout<<"\n-------------------SAVINGS ACC--------------------\n"<<std::endl;

    std::cout<<"-------------------sav_acc--------------------"<<std::endl;
    Savings_Account sav_acc {};
    sav_acc.deposit(2000.0);
    sav_acc.withdraw(500.0);

    std::cout<<"-------------------sav_ptr--------------------"<<std::endl;
    Savings_Account *sav_ptr {nullptr};
    (*sav_ptr).deposit(2000.0);
    (*sav_ptr).withdraw(500.0);
    delete sav_ptr;


	return 0;
}
