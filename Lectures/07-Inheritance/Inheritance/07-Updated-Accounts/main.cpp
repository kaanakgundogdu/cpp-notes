#include <iostream>
#include <vector>
#include "Saving_Account.h"
#include "Account_Util.h"

using namespace std;

int main()
{
    cout.precision(2);
    cout<<fixed;

    //Accounts
    vector<Account> accounts;
    accounts.push_back(Account{});
    accounts.push_back(Account{"Kaan"});
    accounts.push_back(Account{"Solo",2000});
    accounts.push_back(Account{"Lotto",5000});


    display(accounts);
    deposit(accounts,1000);
    withdraw(accounts,2000);

    //Saving Accounts
    vector<Saving_Account> saving_accounts;
    saving_accounts.push_back(Saving_Account{});
    saving_accounts.push_back(Saving_Account{"Mario"});
    saving_accounts.push_back(Saving_Account{"Hero",2000});
    saving_accounts.push_back(Saving_Account{"Helen",5000,5.0});

    display(saving_accounts);
    deposit(saving_accounts,1000);
    withdraw(saving_accounts,2000);

	return 0;
}
