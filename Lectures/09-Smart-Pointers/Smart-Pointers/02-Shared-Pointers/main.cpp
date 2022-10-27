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

void func(std::shared_ptr<Test> p){
    std::cout<<"Use count: "<<p.use_count()<<std::endl;
}

int main()
{
    std::cout<<"\n----------------Section 1--------------------"<<std::endl;

    std::shared_ptr<int> p1 {new int {100}};
    std::cout<<"Use count: "<<p1.use_count()<<std::endl;//1
	
    std::shared_ptr<int> p2 {p1};
    std::cout<<"Use count: "<<p1.use_count()<<std::endl;//2
    
    p1.reset(); // p1 decrement and now null ptr
    std::cout<<"Use count: "<<p1.use_count()<<std::endl;//0
    std::cout<<"Use count: "<<p2.use_count()<<std::endl;//1
    
    std::cout<<"\n----------------Section 2--------------------"<<std::endl;

    
    std::shared_ptr<Test> ptr_test=std::make_shared<Test>(100);
    func(ptr_test);
    std::cout<<"Use count: "<<ptr_test.use_count()<<std::endl;
    {
        std::shared_ptr<Test> ptr_test1=ptr_test;
        std::cout<<"Use count: "<<ptr_test.use_count()<<std::endl;
        {
            std::shared_ptr<Test> ptr_test2=ptr_test;
            std::cout<<"Use count: "<<ptr_test.use_count()<<std::endl;
            ptr_test.reset();
        }
        std::cout<<"Use count: "<<ptr_test.use_count()<<std::endl;
    }
    std::cout<<"Use count: "<<ptr_test.use_count()<<std::endl;

    std::cout<<"\n----------------Section 3--------------------"<<std::endl;

    std::shared_ptr<Account> acc1=std::make_shared<Trust_Account>("Kaan",15000, 4.5);
    std::shared_ptr<Account> acc2=std::make_shared<Savings_Account>("Nagato",2000, 4.5);
    std::shared_ptr<Account> acc3=std::make_shared<Checking_Account>("Sanji",25000);
    
    std::vector<std::shared_ptr<Account>> accounts;
    accounts.push_back(acc1);
    accounts.push_back(acc2);
    accounts.push_back(acc3);
    
    for(const auto &acc:accounts){
        std::cout<<*acc<<std::endl;
        std::cout<<"Use count: "<<acc.use_count()<<std::endl;
    }
    std::cout<<"\n----------------"<<std::endl;
    std::cout<<"Use count: "<<acc1.use_count()<<std::endl;
    std::cout<<"Use count: "<<acc2.use_count()<<std::endl;
    std::cout<<"Use count: "<<acc3.use_count()<<std::endl;
    return 0;
}
