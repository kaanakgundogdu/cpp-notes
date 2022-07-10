#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> num);
void print_vector(vector<string> v);

int main()
{

    int num {10};

    std::cout<<"num before calling pass_by_value1: "<<num<<std::endl;
    pass_by_value1(num);
    std::cout<<"num after calling pass_by_value1: "<<num<<std::endl;

    string name {"Kaan"};
    std::cout<<"\nname before calling pass_by_value2: "<<name<<std::endl;
    pass_by_value2(name);
    std::cout<<"num after calling pass_by_value2: " <<name<<std::endl;

    vector<string> players {"Ronaldo", "Ibra","Zidane"};
    std::cout<<"\nplayers before calling pass_by_value3: ";
    print_vector(players);
    pass_by_value3(players);

    std::cout<<"\nplayers after calling pass_by_value3: ";
    print_vector(players);
	return 0;
}

void pass_by_value1(int num){
    num=100;
}

void pass_by_value2(string s){
    s="Changed";
}

void pass_by_value3(vector<string> v){
    v.clear();//delete all vector elements
}
void print_vector(vector<string> v){
    for(auto s:v){
        cout<<s<<" ";

    }
}