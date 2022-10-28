#include <iostream>
#include <memory>
#include <vector>

class Test{
private:
    int data;
public:
    Test():data{0}{std::cout<<"\tTest Constructor ( "<<data<<" )"<<std::endl;}
    Test(int data):data{data}{std::cout<<"\tTest Constructor ( "<<data<<" )"<<std::endl;}
    int get_data()const {return data;}
    ~Test(){std::cout<<"\tTest Destructor ( "<< data <<" )"<<std::endl;};
};

auto make(){
    auto ptr = std::make_unique<std::vector<std::shared_ptr<Test>>>();
    return ptr;
}

void fill(std::vector<std::shared_ptr<Test>> &vec , int num ){
    int a =0;
    std::cout<<"---------------Add---------------"<<std::endl;
    for(int i =0 ; i<num;i++){
        std::cout<<"Enter number ["<<i+1<<"]"<<std::endl;
        std::cin>>a;

        vec.push_back(std::make_shared<Test>(a));
    }
}

void display(const std::vector<std::shared_ptr<Test>> &vec){
    std::cout<<"---------------Display---------------"<<std::endl;
    for(const auto &ptr:vec){
        std::cout<<ptr->get_data()<<std::endl;
    } 
}

int main()
{
	std::unique_ptr<std::vector<std::shared_ptr<Test>>> vec_ptr;
    vec_ptr=make();
    std::cout<<"How mant data points do you want: "<<std::endl;
    int num=0;
    std::cin>>num;
    fill(*vec_ptr,num);
    display(*vec_ptr);
	return 0;
}
