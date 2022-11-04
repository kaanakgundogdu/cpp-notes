#include <iostream>
#include <list>
#include <algorithm>
#include <iterator> // for std::advance

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
    os << p.name << ":" << p.age;
    return os;
}


template <typename T>
void display(const std::list<T> &l) {
    std::cout << "[ ";
    for (const auto &elem: l) {
        std::cout << elem << " ";
    }
    std::cout << "]" << std::endl;
}

void test1() {
    std::cout << "\n------------- list, push_back, push_front -------------" << std::endl;

    std::list<int> l1 {1,2,3,4,5};
    display(l1);
    
    std::list<std::string> l2;
    l2.push_back("Back");
    l2.push_front("Front");
    display(l2);
    
    std::list<int> l3;
    l3 = {1,2,3,4,5,6,7,8,9,10};
    display(l3);
    
    std::list<int> l4 (14, 4);
    display(l4);
}

void test2() {
    std::cout << "\n------------- Size, Front, Back -------------" << std::endl;

    std::list<int> l {1,2,3,4,5,6,7,8,9,10};
    display(l);
    std::cout << "Size: " << l.size() << std::endl;
    
    std::cout << "Front : " << l.front() << std::endl;
    std::cout << "Back  : " << l.back() << std::endl;
    
    std::cout << "\n--- Clear --- "<< std::endl;

    l.clear();
    display(l);
    std::cout << "Size: " << l.size() << std::endl;
}

void test3() {
    std::cout << "\n------------- resize -------------" << std::endl;

    std::list<int> l {1,2,3,4,5,6,7,8,9,10};
    display(l);
    
    std::cout << "\n--- resize(5) ---" << std::endl;

    l.resize(5);
    display(l);

    std::cout << "\n--- resize(10) ---" << std::endl;

    l.resize(10);
    display(l);
    
    std::cout << "\n--- Person default constructor resize(5) --- "<< std::endl;

    std::list<Person> persons;
    persons.resize(5);             
    display(persons);
    
}
void test4() {
    std::cout << "\n------------- Find with iterator and insert -------------" << std::endl;

    std::list<int> l {1,2,3,4,5,6,7,8,9,10};
    display(l);
    auto it = std::find(l.begin(), l.end(), 5);
    if (it != l.end()) {
        l.insert(it, 100);
    }
    display(l);
    
    std::cout << "\n--- insert a list where iterator is --- "<< std::endl;

    std::list<int> l2 {1000,2000,3000};
    display(l2);
    l.insert(it, l2.begin(), l2.end());
    display(l);
    
    std::cout << "\n--- std::advance --- "<< std::endl;
    std::cout << "iterator is in 5, std::advance(it, -4) -> now iterator is in 100 "<< std::endl;
    std::advance(it, -4);    
    std::cout << *it << std::endl;
    
    std::cout << "--- erase iterator now iterator is invalid dont use this it again --- "<< std::endl;

    l.erase(it);                   
    display(l);
    
}

void test5() {
    std::cout << "\n------------- emplace_back -------------" << std::endl;

    std::list<Person>  stooges {
        {"Kaan", 27},
        {"Tomoko Aran", 64},
        {"Naoko Gushima", 53}
    };
    
    display(stooges);
    std::string name;
    int age{};
    std::cout << std::endl;
    std::cout << "\nEnter the name of the next stooge: ";
    getline(std::cin, name);
    std::cout << "Enter their age: ";
    std::cin >> age;
    
    stooges.emplace_back(name, age);
    display(stooges);

    std::cout << "\n---------  Insert Kikuchi Momoko before Tomoko Aran ---------- "<< std::endl;

    auto it = std::find(stooges.begin(), stooges.end(), Person{"Tomoko Aran", 64});
    if (it != stooges.end())
        stooges.emplace(it, "Kikuchi Momoko", 54);
    display(stooges);    
}

void test6() {
    std::cout << "\n------------- Sort -------------" << std::endl;
    
    std::list<Person>  stooges {
        {"Kaan", 27},
        {"Tomoko Aran", 64},
        {"Naoko Gushima", 53}
    };
    
    display(stooges);
    stooges.sort();
    display(stooges);
}


int main() {
    
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    std::cout << std::endl;
    return 0;
}

