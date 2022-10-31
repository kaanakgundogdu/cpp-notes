#include <iostream>
#include <iomanip>
#include <fstream>
#include<string.h>

int main()
{
    std::ifstream play{};
    std::string word_to_search;
    std::string line;
    int total_words=0;
    int found_words=0;
    
    play.open("romeoandjuliet.txt");
    
    if(!play){
        std::cerr<<"Couldn't open the file"<<std::endl;
        return -1;
    }
    
    std::cout<<"Enter a word to search in play: ";
    std::cin>>word_to_search;
    
    while(play>>line){
        std::size_t f= line.find(word_to_search);
        /*if(line.compare(word_to_search) == 0) This cant find love. love's like words.*/
        if(f!=std::string::npos){
            found_words++;
        }
        total_words++;
    }
    
    std::cout<<total_words<<" words were searched."<<std::endl;
    
	std::cout<<"The word '"<<word_to_search<<"' "<<" is appared "<<found_words<<" times."<<std::endl;
	return 0;
}
