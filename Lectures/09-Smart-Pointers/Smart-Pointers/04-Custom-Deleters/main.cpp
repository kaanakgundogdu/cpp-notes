#include <iostream>
#include <memory>

class Test{
private:
    int data;
public:
    Test():data{0}{std::cout<<"\tTest Constructor ( "<<data<<" )"<<std::endl;}
    Test(int data):data{data}{std::cout<<"\tTest Constructor ( "<<data<<" )"<<std::endl;}
    int get_data()const {return data;}
    ~Test(){std::cout<<"\tTest Destructor ( "<< data <<" )"<<std::endl;};
};

void custom_deleter(Test *ptr){
    std::cout<<"\tUsing my custom function deleter"<<std::endl;
    delete ptr;
}

int main()
{
	{
        std::shared_ptr<Test> test_ptr1 {new Test{100},custom_deleter};
    }
    std::cout<<"------------------------------"<<std::endl;
    
    {
        std::shared_ptr<Test> test_ptr2{new Test{250}, [] (Test *ptr){
            std::cout<<"\tUsing custom lamda deleter"<<std::endl;
            delete ptr;
        }};
    }
    
	return 0;
}
