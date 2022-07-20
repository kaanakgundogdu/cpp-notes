#include <iostream>
#include <vector>

using namespace std;

class Move{
private:
    int *data;
public:

    int get_data_value(){return *data;}
    void set_data_value(int val){*data=val;}
    Move(int d);
    Move(const Move &source);

    //Move constructo
    Move(Move &&source) noexcept;

    ~Move();
};

Move::Move(int d){
    data=new int;
    *data=d;
    cout<<"Constructor for "<<d<<endl;
}
Move::Move(const Move &source):Move (*source.data) {
    cout<<"Copy constructor - Move copy "<<*data<<endl;
}


Move::Move(Move &&source) noexcept : data(source.data){
    source.data=nullptr;
    cout<<"Move contructor - moving resource: "<<*data<<endl;
}


Move::~Move(){
    if(data!= nullptr){
        cout<<"Destructor freeing data for: "<<*data<<endl;
    }else{
        cout<<"Destructor freeing data for nullptr"<<endl;
    }
    delete data;
}


int main()
{
    vector<Move> move_vector;

    move_vector.push_back(Move{10});
    move_vector.push_back(Move{20});
    move_vector.push_back(Move{30});
    move_vector.push_back(Move{40});
    move_vector.push_back(Move{50});
    move_vector.push_back(Move{60});
    move_vector.push_back(Move{70});
    move_vector.push_back(Move{80});

	return 0;
}
