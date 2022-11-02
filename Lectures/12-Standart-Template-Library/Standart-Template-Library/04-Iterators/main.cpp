#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>

void display(const std::vector<int> &vec){
    std::cout<<"[";
    for(auto const &i:vec)
        std::cout<<i<<" ";
    std::cout<<"]"<<std::endl;
}

void test1(){
    std::cout<<"\n------------Display element with iterator-----------------"<<std::endl;
    std::vector<int> nums1 {1,2,3,4,5};
    auto it=nums1.begin();//point 1.
    std::cout<<*it<<std::endl;
    it++;//point 2.
    std::cout<<*it<<std::endl;
    
    it+=2;//point 4
    std::cout<<*it<<std::endl;
    
    it-=1;//point 3
    std::cout<<*it<<std::endl;
    
    it=nums1.end()-1;// last point
    std::cout<<*it<<std::endl;    
}

void test2(){
    std::cout<<"\n------Display all elements with iterators-----------------------"<<std::endl;
    std::vector<int> nums1 {1,2,3,4,5};
    std::vector<int>::iterator it_b=nums1.begin();
    while(it_b!=nums1.end()){
        std::cout<<*it_b<<std::endl;
        it_b++;
    }
    std::cout<<"\n------Changed all elements to zero with iterators -----------------------"<<std::endl;
    it_b=nums1.begin();
    while(it_b!=nums1.end()){
        *it_b=0;
        it_b++;
    }
    display(nums1);
}

void test3(){
    std::cout<<"\n------Const iterator-----------------------"<<std::endl;
    std::vector<int> nums1 {1,2,3,4,5};
    std::vector<int>::const_iterator it_c=nums1.begin();
    //auto it1=nums1.cbegin();
    while(it_c!=nums1.end()){
        std::cout<<*it_c<<std::endl;
        it_c++;
    }
    
    //if you try to change with const iterator
    //program doesn't compile
/*    it_c=nums1.begin();
    *it_c=0;*/
    
}

void test4(){
    std::cout<<"\n------Reverse iterator-----------------------"<<std::endl;
    std::vector<int> nums1 {1,2,3,4,5};
    auto it1=nums1.rbegin();
    while(it1!=nums1.rend()){
        std::cout<<*it1<<std::endl;
        it1++;
    }
    
    std::cout<<"\n------Const Reverse iterator over a List-----------------------"<<std::endl;
    std::list<std::string> names{"Frederic","Eve","Vaundy","King Gnu"};
    auto it2=names.crbegin();
    it2++;
    std::cout<<*it2<<std::endl;

    
    
    std::cout<<"\n------iterator over a MAP-----------------------"<<std::endl;

    std::map<std::string,std::string> favorites{
        {"Kaan","C++"},
        {"BRADIO", "happy shanana"},
        {"frederic", "ONLYWONDER"}
    };
    
    auto it3=favorites.begin();
    while(it3!=favorites.end()){
        std::cout<<it3->first<<": "<<it3->second<<std::endl;
        it3++;
    }
}

void test5(){
    std::cout<<"\n------Subset of vector-----------------------"<<std::endl;
    std::vector<int> vec {1,2,3,4,5,6,7,8,9,10};
    auto start=vec.begin() +2;
    auto finish=vec.end() -3;
    
    while(start!=finish){
        std::cout<<*start<<std::endl;
        start++;
    }   
}

int main()
{
/*    test1();
    test2();
    test3();
    test4();*/
    test5();
	std::cout<<std::endl;
	return 0;
}
