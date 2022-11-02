#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <cctype>

class Person{
    std::string name;
    int age;
public:
    Person()=default;
    Person(std::string name, int age)
    :name{name},age{age} {}
    bool operator<(const Person &rhs) const{
        return this->age < rhs.age;
    }
    bool operator == (const Person &rhs) const{
        return(this->name==rhs.name && this->age == rhs.age);
    }
};

void find_test(){
    std::cout<<"\n--------Found in Vector---------------"<<std::endl;
    std::vector<int> vec{1,2,3,4,5};
    auto loc = std::find(std::begin(vec),std::end(vec),1);
    if(loc!=std::end(vec)){
        std::cout<< "Found the number: "<<*loc<<std::endl;
    }
    else{
        std::cout<<"Couldn't find the number"<<std::endl;
    }

    std::cout<<"\n--------Found in List maybe---------------"<<std::endl;
    std::list<Person> players{
        {"Kaan",27},
        {"Mariya Takeuchi",67},
        {"Meiko Nakahara",63}
    };
    
    auto loc1=std::find(players.begin(),players.end(),Person{"Kaan",27});

    if(loc1!=players.end()){
        std::cout<< "Found the player Kaan."<<std::endl;
    }
    else{
        std::cout<<"Couldn't find the player Kaan"<<std::endl;
    }
}

void count_test(){
    std::cout<<"\n--------count in Vector---------------"<<std::endl;
    std::vector<int> vec{1,2,3,1,4,1,5};
    
    int num= std::count(vec.begin(),vec.end(),1);
    std::cout<<num<<" occurences found in vector."<<std::endl;
}  

void count_if_test(){
    std::cout<<"\n--------count_if---------------"<<std::endl;
    std::vector<int> vec{1,2,3,15,0,4,51,5,542};
    int even_num= std::count_if(vec.begin(),vec.end(),
    [](int x){
        return x%2==0;
    });
    std::cout<<even_num<<" even numbers found in vector."<<std::endl;

    int odd_num= std::count_if(vec.begin(),vec.end(),
    [](int x){
        return x%2!=0;
    });
    std::cout<<odd_num<<" odd numbers found in vector."<<std::endl;


}

void replace_test(){
    std::cout<<"\n--------replace ---------------"<<std::endl;
    std::vector<int> vec{1,2,1,15,1,4,51,1,542};
    for(auto i:vec){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
    
    std::replace(vec.begin(),vec.end(),1,999);

    for(auto i:vec){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
    
}

void all_of_test(){
    std::cout<<"\n--------all_of ---------------"<<std::endl;
    std::vector<int> vec{11,20,30};
    
    bool is_all_greater_10= std::all_of(vec.begin(),vec.end(),
    [](int x) {return x>10;});
    if(is_all_greater_10)
        std::cout<<"All elements greater than 10."<<std::endl;
    else
        std::cout<<"Not all elements greater than 10."<<std::endl;
}

//transform elements in a container
void string_transform_test(){
    std::cout<<"\n--------transform elements in a container ex. string ---------------"<<std::endl;
    std::string str1 {"My string is this."};
    std::cout<<"Before: "<<str1<<std::endl;
    
    std::transform(str1.begin(),str1.end(),
                   str1.begin(),::toupper);
    std::cout<<"After: "<<str1<<std::endl;

}



int main()
{
//    find_test();
    count_test();
    count_if_test();
    replace_test();
    all_of_test();
    string_transform_test();
	std::cout<<std::endl;
	return 0;
}
