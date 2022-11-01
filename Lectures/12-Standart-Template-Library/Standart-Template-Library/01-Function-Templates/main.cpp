#include <iostream>
#include <string>

template <typename T>
T min(T a, T b){
    return (a<b) ? a:b;
}

template <typename T1, typename T2>
void print_element(T1 a, T2 b){
    std::cout<<a<<" " << b<<std::endl;
}
template<typename T>
void swap_template(T &first, T &second){
    T temp=first;
    first=second;
    second=temp;
}

struct Person{
    std::string name;
    int age;
    bool operator < (const Person &rhs) const{
        return this->age < rhs.age;
    }
    void operator = (Person &rhs){
        this->name=rhs.name;
        this->age=rhs.age;
    }
};
std::ostream &operator << (std::ostream &os,const Person p){
    os<<p.name<<" age: "<<p.age;
    return os;
}


int main()
{
    Person p1 {"Kaan",27};
    Person p2 {"Take",33};
    
    Person young_person=min(p1,p2);
    std::cout<<young_person.name<<" is young one."<<std::endl;
    print_element(p1,p2);

    swap_template(p1,p2);
    std::cout<<"After swap..."<<std::endl;
    print_element(p1,p2);
    
	std::cout<<"-----------------------------"<<std::endl;

	std::cout<<min<int>(2,3)<<std::endl;
	std::cout<<min(255,30)<<std::endl;
	std::cout<<min('A','B')<<std::endl;
	std::cout<<min(23.6,11.2)<<std::endl;
	std::cout<<min(4+2*3,5+80)<<std::endl;

	std::cout<<"-----------------------------"<<std::endl;
    
    print_element<int,int>(10,30);
    print_element(10,30);
    print_element<char,double>('S',5.3);
    print_element('A',6.9);
    print_element(1000,"Lololele");
    print_element(2002,std::string{"Kaan"});
	std::cout<<std::endl;
	return 0;
}
