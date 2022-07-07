#include <iostream>
#include <string>

int main()
{
    std::string user_input {};
    
    std::cout<<"Enter your word: ";
    std::cin>>user_input;
    
    for(unsigned i {};i<user_input.length();++i){
        std::string new_word(user_input.length()*2,' ');
        int len = user_input.length()-1;

        if(i!=0){
            for(unsigned k=i; k>0; --k){
                new_word[len-k]=user_input[i-k];
                new_word[len+k]=user_input[i-k];
            }
        }
        new_word[len]=user_input[i];
        std::cout<<new_word<<std::endl;
    }
    
    
	return 0;
}
