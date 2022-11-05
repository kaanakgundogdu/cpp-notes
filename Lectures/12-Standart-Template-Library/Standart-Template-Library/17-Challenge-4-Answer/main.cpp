#include <cctype>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <stack>
#include <queue>

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

bool is_palindrome(const std::string& s)
{
    std::stack<char> normal_s{};
    std::queue<char> reverse_s{};
    
    for(std::size_t i =0 ; i<s.length();i++){
        if(std::isalpha(s[i])){
            char c=std::toupper(s[i]);
            normal_s.push(c);
            reverse_s.push(c);
        }
    }
    
    while (!normal_s.empty()) {
        if(normal_s.top()!=reverse_s.front()){
            return false;
        }
        normal_s.pop();
        reverse_s.pop();
    }
    
    return true;
}

int main()
{
    std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };
   
    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for(const auto& s : test_strings) {
        std::cout << std::setw(8) << std::left << is_palindrome(s)  << s << std::endl;
    }
    std::cout << std::endl;
    return 0;
}