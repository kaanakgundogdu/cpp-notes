#include <iostream>

using namespace std;

class Deep{
private:
    int *data;
public:

    int get_data_value(){return *data;}
    void set_data_value(int val){*data=val;}
    Deep(int d);
    Deep(const Deep &source);
    ~Deep();
};

Deep::Deep(int d){
    data=new int;
    *data=d;
}
Deep::Deep(const Deep &source):Deep (*source.data) {
    cout<<"Copy constructor - deep copy"<<endl;
}

Deep::~Deep(){
    delete data;
    cout<<"Destructor freeing data"<<endl;
}

void displaay_deep(Deep s){
    cout<<s.get_data_value()<<endl;
}


int main()
{

    Deep obj1 {100};
    displaay_deep(obj1);

    Deep obj2 {obj1};
    obj2.set_data_value(1000);
    displaay_deep(obj2);

	return 0;
}
