#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>

template <typename T>
void display(const std::deque<T> &d) {
    std::cout << "[";
    for (const auto &elem: d)
        std::cout << elem << " ";
    std::cout <<  "]"<< std::endl;
}


void display_vector_foreach(const std::vector<int> &vec) {
    std::cout << "[ ";
    std::for_each(vec.begin(), vec.end(),
        [](int x) { std::cout << x << " ";});
    std::cout << "]" << std::endl;
}


void test1() {
    std::cout << "\n---------------- Deque ----------------" << std::endl;

    std::deque<int> d {1,2,3,4,5};
    display(d);
    
    d = {2,4,5,6};
    display(d);
    
    std::deque<int> d1 (3, 3);    
    display(d1);
    
    d[0]  = 100;
    d.at(1) = 200;
    display(d);
}

void test2() {
    std::cout << "\n---------------- push and pops ----------------" << std::endl;

    std::deque<int> d {0,0,0};
    display(d);
    
    d.push_back(10);
    d.push_back(20);
    display(d);
    
    d.push_front(100);
    d.push_front(200);
    display(d);
    
    std::cout << "\n---------------- Front,Back and Size ----------------" << std::endl;

    std::cout << "Front: " << d.front() << std::endl;
    std::cout << "Back : " << d.back() << std::endl;
    std::cout << "Size  : " << d.size() << std::endl;
    
    std::cout << "\n--- pop_back,pop_front --- "<< std::endl;

    d.pop_back();
    d.pop_front();
    display(d);
}

void test3() {
    std::cout << "\n---------------- insert evens into back, odds into front ----------------" << std::endl;
    
    std::vector<int> vec {1,2,3,4,5,6,7,8,9,10};
    std::deque<int> d;
    
    display_vector_foreach(vec);

    for (const auto &elem: vec) {
        if (elem % 2 == 0)
            d.push_back(elem);
        else
            d.push_front(elem);
    }
    display(d);
}

void test4() {
    std::cout << "\n---------------- push front vs. back ordering ----------------" << std::endl;

    std::vector<int> vec {1,2,3,4,5,6,7,8,9,10};
    std::deque<int> d;
    
    display_vector_foreach(vec);

    std::cout << "\n--- push front ---" << std::endl;

    for (const auto &elem: vec) {
        d.push_front(elem);
    }    
    display(d);
    
    std::cout << "\n--- clear and  push_back ---" << std::endl;

    d.clear();
    
     for (const auto &elem: vec) {
        d.push_back(elem);
    }
    display(d);
}

void test5() {
    std::cout << "\n---------------- front_inserter back_inserter with COPY ----------------" << std::endl;

    std::vector<int> vec {1,2,3,4,5,6,7,8,9,10};
    std::deque<int> d;

    display_vector_foreach(vec);

    std::cout << "\n--- front_inserter ---" << std::endl;

    std::copy(vec.begin(), vec.end(), std::front_inserter(d));
    display(d);
    
    d.clear();
    
    std::cout << "\n--- clear and  back_inserter ---" << std::endl;

    std::copy(vec.begin(), vec.end(), std::back_inserter(d));
    display(d);
}

int main() {
    test1();
    test2();
    test3();
    test4();
    test5();
    return 0;
}

