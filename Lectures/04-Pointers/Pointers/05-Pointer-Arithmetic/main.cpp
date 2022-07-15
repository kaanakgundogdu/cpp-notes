#include <iostream>
#include <string>

using namespace std;

int main()
{
    int scores[] {100,90,88,44,55,-1};
    int *score_ptr {scores};

    while(*score_ptr!=-1){
        std::cout<<*score_ptr<<std::endl;
        score_ptr++;
//        you can use one line for upside code
//        std::cout<<*score_ptr++<<std::endl;
    }

    std::cout<<"-------------------\n"<<std::endl;

    string s1{"Kaan"};
    string s2{"Kaan"};
    string s3{"Ali"};

    string *s1_ptr {&s1};
    string *s2_ptr {&s2};
    string *s3_ptr {&s3};
    string *s4_ptr {&s1};

    std::cout<<s1_ptr<<" == "<<s2_ptr<<": "<<(s1_ptr==s2_ptr)<<std::endl;
    std::cout<<s1_ptr<<" == "<<s3_ptr<<": "<<(s1_ptr==s3_ptr)<<std::endl;
    std::cout<<s1_ptr<<" == "<<s4_ptr<<": "<<(s1_ptr==s4_ptr)<<std::endl;

    std::cout<<*s1_ptr<<" == "<<*s2_ptr<<": "<<(*s1_ptr==*s2_ptr)<<std::endl;

    std::cout<<"Template"<<std::endl;


	return 0;
}
