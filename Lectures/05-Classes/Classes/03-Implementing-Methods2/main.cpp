#include <iostream>
#include "Account.h"

using namespace std;

int main()
{

    Account kaan_acc;
    kaan_acc.set_name("Kaan");
    kaan_acc.set_balance(1000.0);

    if(kaan_acc.deposit(200.0)){
        cout<<"Deposit OK!"<<endl;
    }
    else{
        cout<<"Deposit FAILED!"<<endl;
    }
    if(kaan_acc.withdraw(500.0)){
        cout<<"Withdraw OK!"<<endl;
    }
    else{
        cout<<"Not money enough!"<<endl;
    }

    if(kaan_acc.withdraw(5500.0)){
        cout<<"Withdraw OK!"<<endl;
    }
    else{
        cout<<"Not money enough!"<<endl;
    }



	return 0;
}
