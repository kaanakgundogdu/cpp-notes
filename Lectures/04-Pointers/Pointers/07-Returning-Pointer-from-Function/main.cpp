#include <iostream>

using namespace std;

int *create_array(size_t size, int init_value=0){
    int *new_storage {nullptr};
    new_storage = new int[size];
    for (size_t i{0}; i<size ; ++i){
        *(new_storage+i)= init_value;
    }
    return new_storage;
}

void display(const int *const array, size_t size){
    for(size_t i{0}; i<size ; ++i){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int *numbers_ptr {nullptr};
    size_t size {0};
    int init_value{};

    cout<<"How many int you want? ";
    cin>>size;

    cout<<"What value init. to? ";
    cin>>init_value;


    numbers_ptr= create_array(size,init_value);

    cout<<"\n-----------------------------------"<<endl;

    display(numbers_ptr,size);
    delete [] numbers_ptr;

	return 0;
}
