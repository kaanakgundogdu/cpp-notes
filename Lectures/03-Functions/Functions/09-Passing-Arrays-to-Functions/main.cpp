#include <iostream>

void print_array(const int arr[],size_t size);
void set_array(int arr[],size_t size,int val);

int main()
{
    int nums[] = {1,2,3,4,5,6};
    int size=sizeof(nums)/sizeof(nums[0]);

    std::cout<<"size "<<size<<std::endl;
    print_array(nums,size);
    set_array(nums,size,999);//THIS CHANGES ORIGINAL ARRAY
    std::cout<<"AFTER SET ARRAY"<<std::endl;

    print_array(nums,size);
	return 0;
}


void print_array(const int arr[],size_t size){
    for(size_t i{0}; i<size;++i){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
    //after adding const below code gives compile error
//    arr[i]=50000;//bug i dont want to change array in print function.
    //if you wanto to prevent that add constant before function param
}

void set_array(int arr[],size_t size,int val){
    for(size_t i{0}; i<size;++i){
        arr[i]=val;
    }
}