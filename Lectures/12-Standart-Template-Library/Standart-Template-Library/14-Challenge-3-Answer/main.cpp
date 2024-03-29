#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <set>
#include <string>
#include <iomanip>

void display_words(const std::map<std::string, int> &words) {
    std::cout << std::setw(12) << std::left << "\nWord"
                << std::setw(7) << std::right << "Count"<< std::endl;
    std::cout << "--------------" << std::endl;
    for (auto pair: words)
        std::cout << std::setw(12) << std::left << pair.first 
                       << std::setw(7) << std::right << pair.second << std::endl;
}


void display_words(const std::map<std::string, std::set<int>> &words)
{
     std::cout << std::setw(12) << std::left << "\nWord"
                << "Occurrences"<< std::endl;
    std::cout << "------------------------------------------------------------" << std::endl;
    for (auto pair: words) {
        std::cout << std::setw(12) << std::left << pair.first 
                       << std::left << "[ ";
        for (auto i: pair.second) 
            std::cout << i << " ";
        std::cout << "]" << std::endl;
    }
}

std::string clean_string(const std::string &s) {
    std::string result;
    for (char c: s) {
        if (c == '.' || c == ',' || c == ';' || c == ':')
            continue;
        else
            result += c;
    }
    return result;
}

void part1() {
    std::map<std::string, int> words;
    std::string line;       
    std::string word;   
    std::ifstream in_file {"words.txt"};
    if (in_file) {
        
        while(in_file>>line){
            line=clean_string(line);
            auto it = words.find(line);
            if(it != words.end()){
                words[line] +=1;
            }
            else
                words.insert(std::make_pair(line,1));
        }        
        in_file.close();
        display_words(words);
    } else {
        std::cerr << "Error opening input file" << std::endl;
    }
}
    
void part2() {
    std::map<std::string, std::set<int>> words;
    std::string line;
    std::string row;
    std::string word;
    std::ifstream in_file {"words.txt"};
    int counter=0;
    if (in_file) {
     
        /*while(in_file>>line){
            line=clean_string(line);
            auto it = words.find(line);
            if(it != words.end()){
                counter++;
                words[line].insert(counter);
            }
            else
                words.insert(std::make_pair(line,std::set{1}));
        }   */
        while(std::getline(in_file,row)){
            counter++;
            std::stringstream ss(row);
            while(ss>>line){
                    
                line=clean_string(line);
                auto it = words.find(line);
                if(it != words.end()){
                    words[line].insert(counter);
                }
                else
                    words.insert(std::make_pair(line,std::set{counter}));
            }             
        }
        while(in_file>>line){
            std::cout<<"line: "<<line<<std::endl;
                
            line=clean_string(line);
            auto it = words.find(line);
            if(it != words.end()){
                words[line].insert(counter);
            }
            else
                words.insert(std::make_pair(line,std::set{1}));
        } 
        in_file.close();
        display_words(words);
    } else {
        std::cerr << "Error opening input file" << std::endl;
    }
}

int main() {
    //part1();
    part2();
    std::cout<<std::endl;
    return 0;
}

