#include <iostream>
#include <set>

class Person {
    friend std::ostream &operator<<(std::ostream &os, const Person &p);
    std::string name;
    int age;
public:
    Person() : name{"Unknown"}, age{0} {}
    
    Person(std::string name, int age) : name{name}, age{age}  {}
    
    bool operator<(const Person &rhs) const {
        return this->age < rhs.age;
    }
    
    bool operator==(const Person &rhs) const {
        return (this->name == rhs.name && this->age == rhs.age);
    }
};

std::ostream &operator<<(std::ostream &os, const Person &p) {
    os << p.name << " : " << p.age;
    return os;
}

template <typename T>
void display(const std::set<T> &l) {
    std::cout << "[ ";
    for (const auto &elem: l) {
        std::cout << elem << " ";
    }
    std::cout << "]" << std::endl;
}

void test1() {
    std::cout << "\n------------- Sets -------------------" << std::endl;
    std::set<int> s1 {1, 4, 3, 5, 2};
    display(s1);
    
    std::cout << "\n-- Don't add duplicated chars --" << std::endl;

    s1 = {1,2,3,1,1,2,2,3,3,4,5};
    display(s1);
    
    s1.insert(0);
    s1.insert(10);
    
    display(s1);
    
    if (s1.count(10)) 
        std::cout << "10 is in the set" << std::endl;
    else
        std::cout << "10 is NOT in the set" << std::endl;

    auto it = s1.find(5);
    if (it != s1.end())
        std::cout << "Found: " << *it << std::endl;    
        
    s1.clear();
    
    display(s1);
}

void test2() {
    std::cout << "\n------------- emplace,erase -------------------" << std::endl;
    std::set<Person> stooges {
        {"Kaan", 1},
        {"Takako", 2},
        {"Kikuchi", 3}
    };
    display(stooges);

    stooges.emplace("Toshiki", 50);   
    display(stooges);
    
    std::cout << "\n--- Can't add Naoko, 50 already exists ---" << std::endl;

    stooges.emplace("Naoko", 50);
    display(stooges);
    
    std::cout << "\n--- find Takako and erase ---" << std::endl;

    auto it = stooges.find(Person{"Takako", 2});
    if (it != stooges.end())
        stooges.erase(it);
    
    display(stooges);
    
    std::cout << "\n--- find 50 and erase ---" << std::endl;

    it = stooges.find(Person("XXXX", 50));                                                                           
    if (it != stooges.end())
        stooges.erase(it);
    display(stooges); 
}

void test3() {
    std::cout << "\n------------- insert -------------------" << std::endl;
    
    std::set<std::string> s {"A", "B", "C"};
    display(s);
    
    auto result = s.insert("D");
    display(s);
    
    std::cout << std::boolalpha;
    std::cout << "first: " <<  *(result.first)<< std::endl;
    std::cout  << "second: " << result.second << std::endl; 
    
    std::cout << std::endl;

    result = s.insert("A");
    display(s);
    
    std::cout << std::boolalpha;
    
    std::cout << "\n--- *(result.first) ---" << std::endl;
    std::cout << "first: " <<  *(result.first)<< std::endl;
    
    std::cout << "\n--- result.second false bc. failed to add  already exists ---" << std::endl;
    std::cout  << "second: " << result.second << std::endl; 
}

int main() {
    test1();
    test2();
    test3();
    return 0;
}

