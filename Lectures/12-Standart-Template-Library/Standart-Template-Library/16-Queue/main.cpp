#include <iostream>
#include <queue>


// pass by value same as stack
// make copy and pop
template <typename T>
void display(std::queue<T> q) {
    std::cout << "[ ";
    while (!q.empty()) {
        T elem = q.front();
        q.pop();
        std::cout << elem << " ";
    }
    std::cout << "]" << std::endl;
}

int main() {
    std::cout <<"------------ Queue ----------------" <<std::endl;

    std::queue<int> q;
    
    for (int i: {1,2,3,4,5}) 
        q.push(i);
    display(q);

    std::cout <<"---- Front and back ----" <<std::endl;

    std::cout << "Front: " << q.front() << std::endl;
    std::cout << "Back:  " << q.back() << std::endl;
    
    std::cout <<"---- Push ----" <<std::endl;

    q.push(100);
    display(q);

    std::cout <<"---- Pop 2 times ----" <<std::endl;

    q.pop();
    q.pop();
    display(q);
    
    std::cout <<"---- Pop till empty ----" <<std::endl;

    while (!q.empty())
        q.pop();
    display(q);

    std::cout <<"---- Size ----" <<std::endl;

    std::cout << "Size: " << q.size() << std::endl;
    
    std::cout <<"---- Push 3 new item ----" <<std::endl;

    q.push(10);
    q.push(100);
    q.push(1000);
    
    display(q);
    

    std::cout << "Front: " << q.front() << std::endl;
    std::cout << "Back:  " << q.back() << std::endl;

    std::cout <<"---- Change front back ----" <<std::endl;

    q.front() = 9898;
    q.back() = 262626626;
    
    display(q);
    std::cout << "Front: " << q.front() << std::endl;
    std::cout << "Back:  " << q.back() << std::endl;
    
    return 0;
}

