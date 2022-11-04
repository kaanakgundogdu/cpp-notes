#include <iostream>
#include <map>
#include <set>

void display(const std::map<std::string, std::set<int>> &m) {
    std::cout << "[ ";
    for (const auto &elem: m) {
        std::cout << elem.first << ": [ " ;
            for (const auto &set_elem : elem.second)
                 std::cout << set_elem <<  " ";
            std::cout << "] " ;
    }
    std::cout << "]  " << std::endl;
}

template <typename T1, typename T2>
void display(const std::map<T1, T2> &l) {
    std::cout << "[ ";
    for (const auto &elem: l) {
        std::cout << elem.first << ":" << elem.second << " ";
    }
    std::cout << "]  " << std::endl;
}

void test1() {
    std::cout << "\n---------------- Maps ----------------" << std::endl;
    std::map<std::string, int> m {
        {"Kaan", 3},
        {"Kurogiri", 1},
        {"Mirio", 2}
    };
    display(m);      
    
    std::cout << "----- insert -----" << std::endl;

    m.insert( std::pair<std::string, int>("Togata", 10));
    display(m);
    
    std::cout << "----- make_pair -----" << std::endl;

    m.insert(std::make_pair("Seki", 5));
    display(m);
    
    m["Kaan"] = 18;
    display(m);
    
    m["Kaan"] += 10;               
    display(m);

    std::cout << "----- erase -----" << std::endl;

    m.erase("Kaan");
    display(m);

    std::cout << "----- count -----" << std::endl;

    std::cout << "Count for Mirio: " << m.count("Mirio") << std::endl;
    std::cout << "Count for Kaan: " << m.count("Kaan") << std::endl;
    
    auto it = m.find("Larry");
    if (it != m.end())
        std::cout << "Found: " << it->first << " : " << it->second << std::endl;    
        
    m.clear();
    
    display(m);

}

void test2() {
    std::cout << "\n---------------- insert ----------------" << std::endl;
    
    std::map<std::string, std::set<int>> grades  {
        {"Mirio", {100, 90} },
        {"Kaan",  {60} },
        {"Kurogiri", {80, 90, 100} }
    };
    
    display(grades);
    std::cout << "--- insert 34343 to kurogiri ---" << std::endl;

    grades["Kurogiri"].insert(34343);                 // insert 95 into the set of grades for "Larry"
    
    display(grades);
    
    std::cout << "\n----- insert to Kaan's second element -> sets -----" << std::endl;

    auto it = grades.find("Kaan");
    if (it != grades.end())                         
    {
            it->second.insert(888888);            
    }                                                         
    display(grades);
}


int main() {
    test1();
    test2();
    return 0;
}

