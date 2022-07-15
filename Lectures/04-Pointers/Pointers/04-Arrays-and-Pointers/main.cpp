#include <iostream>
using namespace std;

int main()
{
    int scores[] {100,95,88};

    cout<<"Value of scores: "<<scores<<endl;
    int *score_ptr{scores};
    cout<<"Value of score pointer: "<<score_ptr<<endl;

    std::cout<<"\nArray subscript notation"<<std::endl;
    cout<<scores[0]<<endl;
    cout<<scores[1]<<endl;
    cout<<scores[2]<<endl;

    std::cout<<"\nPointer subscript notation"<<std::endl;
    cout<<score_ptr[0]<<endl;
    cout<<score_ptr[1]<<endl;
    cout<<score_ptr[2]<<endl;

    std::cout<<"\nPointer offset notation"<<std::endl;
    cout<< *score_ptr <<endl;
    cout<< *(score_ptr + 1) <<endl;
    cout<<*(score_ptr + 2) <<endl;

    std::cout<<"\nArray offset notation"<<std::endl;
    cout<<*scores<<endl;
    cout<<*(scores +1)<<endl;
    cout<<*(scores + 2)<<endl;

	return 0;
}
