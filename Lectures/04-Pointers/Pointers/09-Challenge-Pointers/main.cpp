#include <iostream>
using namespace std;


void print(const int *const arr,size_t size);
int *apply_all(const int *const arr1,size_t size1,const int *const arr2,size_t size2);

int main()
{
    const size_t arr1_size {5};
    const size_t arr2_size {3};

    int arr1[] {1,2,3,4,5};
    int arr2[] {10,20,30};

    cout<<"Array 1: ";
    print(arr1,arr1_size);


    cout<<"Array 2: ";
    print(arr2,arr2_size);

    int *result=apply_all(arr1,arr1_size,arr2,arr2_size);
    constexpr size_t results_size=arr1_size*arr2_size;


    cout<<"Result: ";
    print(result,results_size);

    std::cout<<std::endl;

    delete [] result;
	return 0;
}

void print(const int *const arr,size_t size){
    cout<<"[ ";
    for(size_t i{0}; i<size;++i){
        cout<<arr[i]<<" ";
    }
    cout<<"]\n";
}

int *apply_all(const int *const arr1,size_t size1,const int *const arr2,size_t size2){
    int *new_storage {nullptr};
    new_storage = new int[size1 * size2];
    int counter {0};
    for(size_t i{0}; i<size2;++i){
        for(size_t j{0};j<size1;++j){
            *(new_storage+counter) = arr2[i] *arr1[j];
            ++counter;
        }
    }
    return new_storage;

}