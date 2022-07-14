#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int num{10};

    cout<<"Value of num "<<num<<endl;
    cout<<"Size of num "<<sizeof num<<endl;
    cout<<"Address of num "<<&num<<endl;

    int *p;
    cout<<"\nValue of p "<<p<<endl;
    cout<<"Address of p "<<&p<<endl;
    cout<<"Size of p "<<sizeof p<<endl;

    p=nullptr;
    cout<<"\nValue of p after nullptr "<<p<<endl;

    int score{10};
    double high_temp{100.7};

    int *score_ptr {nullptr};
    score_ptr=&score;
    cout<<"\nValue of score "<<score<<endl;
    cout<<"Address of score   is: "<<&score<<endl;
    cout<<"Value of score_ptr is: "<<score_ptr<<endl;

//    score_ptr=&high_temp;//address of double gives complie error

	return 0;
}
