#include <iostream>
#include <memory>
#include <vector>

#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"


class Test{
private:
    int data;
public:
    Test():data{0}{std::cout<<"Test Constructor ( "<<data<<" )"<<std::endl;}
    Test(int data):data{data}{std::cout<<"Test Constructor ( "<<data<<" )"<<std::endl;}
    int get_data()const {return data;}
    ~Test(){std::cout<<"Test Destructor ( "<< data <<" )"<<std::endl;};
};

int main()
{
    //old way
	/*Test *t1= new Test(1000);
    delete t1;*/
    std::unique_ptr<Test> t1 {new Test(100)};
    std::unique_ptr<Test> t2 = std::make_unique<Test>(2222);
    
    std::unique_ptr<Test> t3;
    t3=std::move(t1);
    
    if(!t1){
        std::cout<<"t1 is null ptr"<<std::endl;
    }
    
    std::unique_ptr<Account> a1= std::make_unique<Checking_Account>("Kaan",1000);
    std::cout<<*a1<<std::endl;
    a1->deposit(15000); 
    std::cout<<*a1<<std::endl;
    
    std::vector<std::unique_ptr<Account>> accounts;
    accounts.push_back(std::make_unique<Savings_Account>("Link",1000,7.6));
    accounts.push_back(std::make_unique<Checking_Account>("Helen",6000));
    accounts.push_back(std::make_unique<Trust_Account>("Jose",20000,4.5));
    
    for(const auto &acc:accounts){
        std::cout<<*acc<<std::endl;
    }
    
	return 0;
}
