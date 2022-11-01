#include <iostream>
#include <string>
#include <vector>

//If you're making class template dont make .cpp file
// .h file is enough
// template classes contained in only header files.
template<typename T>
class Item{
private:
    std::string name;
    T value;
public:
    Item(std::string name, T value):name{name},value{value}
    {}
    std::string get_name()const{return name;}
    T get_value() const{ return value;}
};

template<typename T1,typename T2>
struct My_Pair{
    T1 first;
    T2 second;
};


int main()
{
	std::cout<<"-----------------------------"<<std::endl;
    
    Item<int> item1 {"Sword",100};
	std::cout<<item1.get_name()<<std::endl;
    
    Item<std::string> item2 {"Knight's Sword","One thousand"};
	std::cout<<item2.get_name()<<std::endl;

    Item<Item<std::string>> item3{"Sword and Shield",{"Onna","Polimoli"}};
	std::cout<<item3.get_name()<<", "
             <<item3.get_value().get_name()<<", "
             <<item3.get_value().get_value()<<std::endl;

	std::cout<<"-----------------------------"<<std::endl;

    std::vector<Item<double>> vec {};
    vec.push_back(Item<double>{"Excalibur",2003.41});
    vec.push_back(Item<double>{"Gramr",9903.88});
    vec.push_back(Item<double>{"Harpe",6542.924});
    
    for(const auto &i : vec){
        std::cout<<i.get_name()<<", "<<i.get_value()<<std::endl;
    }
    
    std::cout<<"-----------------------------"<<std::endl;
    
    My_Pair <std::string, int> pair_1 {"Kaan",2022};
    My_Pair <int, double> pair_2 {77,43.58};
    
    std::cout<<"1. "<<pair_1.first<<" 2. "<<pair_1.second<<std::endl;
    std::cout<<"1. "<<pair_2.first<<" 2. "<<pair_2.second<<std::endl;

    
    std::cout<<std::endl;

	return 0;
}
