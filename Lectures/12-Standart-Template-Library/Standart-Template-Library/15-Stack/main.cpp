#include <iostream>
#include <stack>
#include <vector>
#include <list>

// pass by value to display stack
// bc for displaying stack you have to pop elements.
template <typename T>
void display(std::stack<T> s) {
    std::cout << "[ ";
    while (!s.empty()) {
        T elem = s.top();
        s.pop();
        std::cout << elem << " ";
    }
    std::cout << "]" << std::endl;
}

int main() {
    std::cout <<"------------ Stack ----------------" <<std::endl;

    std::stack<int> s;
    std::stack<int, std::vector<int>> s1;
    std::stack<int, std::list<int>> s2;
    std::stack<int, std::deque<int>> s3;

    std::cout <<"\n---- Push ----" <<std::endl;

    for (int i: {1,2,3,4,5}) 
        s.push(i);
    display(s);

    s.push(100);
    display(s);
        
    std::cout <<"\n---- Pop 2 times ----" <<std::endl;

    s.pop();
    s.pop();
    display(s);

    std::cout <<"\n---- Pop till empty ----" <<std::endl;

    while (!s.empty())
        s.pop();
    display(s);
    
    std::cout <<"\n---- Stack size ----" <<std::endl;

    std::cout << "Size: " << s.size() << std::endl;
    
    std::cout <<"\n---- Change stack top ----" <<std::endl;
    
    s.push(10);
    display(s);


    s.top() = 100;
    display(s);
    return 0;
}

