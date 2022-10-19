#include <iostream>
#include <vector>
#include "Savings_Account.h"
#include "Account_Util.h"

using namespace std;

int main()
{
    cout.precision(2);
    cout<<fixed;

    vector<Checking_Account> checking_accounts;
    checking_accounts.push_back(Checking_Account{});
    checking_accounts.push_back(Checking_Account{"Kakarot"});
    checking_accounts.push_back(Checking_Account{"Prince",2000});
    checking_accounts.push_back(Checking_Account{"Odyse",5000});

    display(checking_accounts);
    deposit(checking_accounts,1000);
    withdraw(checking_accounts,2000);


    vector<Trust_Account> trust_accounts;
    trust_accounts.push_back(Trust_Account{});
    trust_accounts.push_back(Trust_Account{"Beppo"});
    trust_accounts.push_back(Trust_Account{"Appoo",2000});
    trust_accounts.push_back(Trust_Account{"Law",5000,2.0});

    display(trust_accounts);
    deposit(trust_accounts,5000);
    withdraw(trust_accounts,2000);

	return 0;
}
