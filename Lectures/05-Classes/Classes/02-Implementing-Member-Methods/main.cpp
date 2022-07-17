#include <iostream>
#include <string>

using namespace std;

class Account{
private:
    string name;
    double balance;
public:
    void set_balance(double bal){
        balance=bal;
    }
    double get_balance(){
        return balance;
    }

    //methods will be declared outside te class declaration
    void set_name(string n);
    string get_name();

    bool deposit(double amaoun);
    bool withdraw(double amaoun);

};

void Account::set_name(string n){
    name=n;
}


string Account::get_name(){
    return name;
}

bool Account::deposit(double amount){
    balance+=amount;
    return true;
}

bool Account::withdraw(double amaount){
    if(balance - amaount >= 0){
        balance-=amaount;
        return true;
    }
    return false;
}


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
