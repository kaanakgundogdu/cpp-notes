#include <iostream>
#include <vector>
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main()
{

    Account *savings_ptr =new Savings_Account("Poza",2000,2.1);
    Account *checking_ptr =new Checking_Account("Poza",2000);
    Account *trust_ptr =new Trust_Account("Poza",20000,2.1);
    
    cout.precision(2);
    cout<<fixed;
    
    vector<Account *> accounts {savings_ptr,checking_ptr,trust_ptr};

    display(accounts);
    deposit(accounts,1000);
    withdraw(accounts,2000);
    display(accounts);


    delete savings_ptr;
    delete checking_ptr;
    delete trust_ptr;
	return 0;
}
