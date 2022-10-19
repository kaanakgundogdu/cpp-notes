#ifndef ACCOUNT_UTIL_H
#define ACCOUNT_UTIL_H
#include <vector>
#include "Account.h"
#include "Saving_Account.h"

//Utility helper functions for Account Class

void display(const std::vector<Account> &accounts);
void deposit(std::vector<Account> &accounts,double amount);
void withdraw(std::vector<Account> &accounts,double amount);


//Utility helper functions for Saving Acc Class


void display(const std::vector<Saving_Account> &accounts);
void deposit(std::vector<Saving_Account> &accounts,double amount);
void withdraw(std::vector<Saving_Account> &accounts,double amount);



#endif // ACCOUNT_UTIL_H
