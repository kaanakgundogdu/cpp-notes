#include <iostream>
#include <vector>
#include <algorithm>

class Person {
    friend std::ostream &operator<<(std::ostream &os, const Person &p);
    std::string name;
    int age;
public:
    Person() = default;
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

void display_foreach(const std::vector<int> &vec) {
    std::cout << "[ ";
    std::for_each(vec.begin(), vec.end(),
        [](int x) { std::cout << x << " ";});
    std::cout << "]" << std::endl;
}

template <typename T>
void display(const std::vector<T> &vec) {
    std::cout << "[ ";
    for (const auto &elem: vec)
        std::cout << elem << " ";
    std::cout <<  "]"<< std::endl;
}


void test1() {
    std::cout << "\n------------Display vector---------------- "<< std::endl;

    std::vector<int> vec {1,2,3,4,5};
    display(vec);
    
    vec = {20,40,50,60};
    display_foreach(vec);
    
    std::vector<int> vec1 (9, 999); 
    display(vec1);
}

void test2() {
    std::cout << "\n------------Vector size maxsize, capacity---------------- "<< std::endl;

    std::vector<int> vec {1,2,3,4,5};
    display(vec);
    std::cout << "\nvec size: " << vec.size() << std::endl;
    std::cout << "vec max size: " << vec.max_size() << std::endl;
    std::cout << "vec capacity: " << vec.capacity() << std::endl;

    std::cout << "\n------------after push_back size maxsize, capacity---------------- "<< std::endl;

    vec.push_back(6);
    display(vec);
    std::cout << "\nvec size: " << vec.size() << std::endl;
    std::cout << "vec max size: " << vec.max_size() << std::endl;
    std::cout << "vec capacity: " << vec.capacity() << std::endl;
    
    std::cout << "\n------------shrink_to_fit size maxsize, capacity---------------- "<< std::endl;

    vec.shrink_to_fit();    // C++11
    display(vec);
    std::cout << "\nvec size: " << vec.size() << std::endl;
    std::cout << "vec max size: " << vec.max_size() << std::endl;
    std::cout << "vec capacity: " << vec.capacity() << std::endl;

    std::cout << "\n------------.reserve(100) size maxsize, capacity---------------- "<< std::endl;

    vec.reserve(100);
    display(vec);
    std::cout << "\nvec size: " << vec.size() << std::endl;
    std::cout << "vec max size: " << vec.max_size() << std::endl;
    std::cout << "vec capacity: " << vec.capacity() << std::endl;
    
}
void test3() {
    std::cout << "\n------------[ ] and .at( ) operators ---------------- "<< std::endl;

    std::vector<int> vec {1,2,3,4,5};
    display(vec);
    
    vec[0] = 9999;
    vec.at(1) = 4444;
    std::cout << "\n------------after change element ---------------- "<< std::endl;

    display(vec);
}

void test4() {
    std::cout << "\n------------Vector with custom Person class ---------------- "<< std::endl;
    std::vector<Person> stooges;
    
    Person p1 {"Kaan", 27};
    display(stooges);
    
    stooges.push_back(p1);
    display(stooges);
    
    stooges.push_back(Person{"Takako Mamiya", 25});
    display(stooges);
    
    std::cout << "\n--- emplace_back not push_back --- "<< std::endl;

    stooges.emplace_back("Toshiki Kadomatsu", 62);    
    display(stooges);
}

void test5() {
    std::cout << "\n------------Vector front and back ---------------- "<< std::endl;

    std::vector<Person> stooges {
        {"Junko Yagami", 64},
        {"CINDY", 43},
        {"Kikuchi Momoko", 54}
    };
    
    display(stooges);
    std::cout << "\nFront: " << stooges.front() << std::endl;
    std::cout << "Back: " << stooges.back() << std::endl;
    
    std::cout << "\n--- pop_back --- "<< std::endl;
    stooges.pop_back();
    display(stooges);
}

void test6() {
    std::cout << "\n------------Vector clear and erase ---------------- "<< std::endl;
    std::vector<int> vec {1,2,3,4,5};
    display(vec);
    
    vec.clear();
    display(vec);
    
    vec = {1,2,3,4,5,6,7,8,9,10};
    display(vec);
    vec.erase(vec.begin(), vec.begin() + 2);
    display(vec);
    
    vec = {1,2,3,4,5,6,7,8,9,10};
    
    std::cout << "\n--- erase evens --- "<< std::endl;
    display(vec);

    auto it = vec.begin();
    while (it != vec.end()) {
        if (*it %2 == 0)
            vec.erase(it);  
        else
            it++;   
    }
    display(vec);
}

void test7() {
    std::cout << "\n------------Vector swap ---------------- "<< std::endl;
    
    std::vector<int> vec1 {1,2,3,4,5};
    std::vector<int> vec2 {10,20,30,40,50};
    
    display(vec1);
    display(vec2);
    std::cout << std::endl;

    vec2.swap(vec1);
    display(vec1);
    display(vec2);
}

void test8() {
    std::cout << "\n------------Vector sort ---------------- "<< std::endl;

    std::vector<int> vec1 {1,21,3,40,12};    
    
    display(vec1);
    std::sort(vec1.begin(), vec1.end());
    display(vec1);
}

void test9() {
    // std::back_inserter contructs a back-insert iterator that inserts new elements 
    // at the end of the container it applied to. It's a special output iterator
    // It's awesome!!!!   and  very efficient
    // There is also a front_inserter we can use with deques and lists
    // Copy one list to another using an iterator and back_inserter
    
    std::cout << "\n------------Vector copy , back_inserter---------------- "<< std::endl;

    
    std::vector<int> vec1 {1,2,3,4,5};   
    std::vector<int> vec2 {10,20};
    
    display(vec1); 
    display(vec2);
    std::cout << std::endl;

    std::copy(vec1.begin(), vec1.end(), std::back_inserter(vec2));
    display(vec1);
    display(vec2);
    std::cout << std::endl;

    std::cout << "\n------------copy_if even---------------- "<< std::endl;

    
    vec1 = {1,2,3,4,5,6,7,8,9,10};
    vec2 = {10,20};
    
    display(vec1);
    display(vec2);
    std::cout << std::endl;
    
    std::copy_if(vec1.begin(), vec1.end(), std::back_inserter(vec2),
            [](int x) { return x%2 == 0; });
    display(vec1);
    display(vec2);
    
    
}

void test10() {
    std::cout << "\n------------ Transform ---------------- "<< std::endl;
    
    std::vector<int> vec1 {1,2,3,4,5};   
    std::vector<int> vec2 {10,20,30,40,50};
    std::vector<int> vec3;

    display(vec1);
    display(vec2);

    std::cout << "\n------------1*10, 2*20, 3*30, 4*40, 5*50  ---------------- "<< std::endl;

    std::transform(vec1.begin(), vec1.end(), vec2.begin(),
        std::back_inserter(vec3),
        [](int x, int y) { return x * y;});
        
    display(vec3);
    
}

void test11() {
    std::cout << "\n------------ Insertion from another vector ---------------- "<< std::endl;

    std::vector<int> vec1 {1,2,3,4,5,6,7,8,9,10};
    std::vector<int> vec2 {100,200,300,400};
    
    display(vec1);
    display(vec2);

    std::cout << "\n-- Add till find 5 -- "<< std::endl;

    auto it = std::find(vec1.begin(), vec1.end(), 5);
    if (it != vec1.end()) {
        std::cout << "inserting..." << std::endl;
        vec1.insert(it, vec2.begin(), vec2.end());
    } else {
        std::cout << "Sorry, 5 not found" << std::endl;
    }
    display(vec1);
}

int main()  {    

    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
    test8();
    test9();
    test10();
    test11();
    
    
    std::cout << std::endl;

    return 0;
}