#include <iostream>
#include <vector>

class I_Printable{
    friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);
public:
    virtual void print(std::ostream &os) const =0;
};

std::ostream &operator<<(std::ostream &os, const I_Printable &obj){
    obj.print(os);
    return os;
}

class Account: public I_Printable{
public:
    virtual void withdraw(double amount){
        std::cout<<"In Account::withdraw"<<std::endl;
    }
    virtual void print(std::ostream &os) const override{
        os<<"Account Display";
    }
    virtual ~Account(){}
};


class Checking:public Account{
public:
    virtual void withdraw(double amount){
        std::cout<<"In Checking::withdraw"<<std::endl;
    }
    virtual void print(std::ostream &os) const override{
        os<<"Checking Display";
    }
    virtual ~Checking(){}
};

class Savings: public Account{
public:
    virtual void withdraw(double amount){
        std::cout<<"In Savings::withdraw"<<std::endl;
    }
    virtual void print(std::ostream &os) const override{
        os<<"Savings Display"; 
    }
    virtual ~Savings(){}
};

class Trust: public Account{
public:
    virtual void withdraw(double amount){
        std::cout<<"In Trust::withdraw"<<std::endl;
    }
    virtual void print(std::ostream &os) const override{
        os<<"Trust Display";
    }
    virtual ~Trust(){}
};

class Dog: public I_Printable{
public:
    virtual void print(std::ostream &os) const override{
        os<<"Hav Hav Hav!!";
    }
    virtual ~Dog(){}
};

void print(const I_Printable &obj){
    std::cout<<obj<<std::endl;
}

int main()
{
    Account *acc_ptr1=new Checking();
    Account *acc_ptr2=new Savings();
    Account *acc_ptr3=new Trust();
    
    std::vector<Account *> accounts {acc_ptr1,acc_ptr2,acc_ptr3};
    
    for(const auto p : accounts){
        print(*p);
    }    
    
    Dog *dog_ptr=new Dog(); 
    print(*dog_ptr);
    
    delete acc_ptr1;
    delete acc_ptr2;
    delete acc_ptr3;
    delete dog_ptr;
    
	return 0;
}
