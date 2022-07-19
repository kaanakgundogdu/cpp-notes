#include <iostream>
#include <string>

using namespace std;


class Player{
private:
    string name;
    int health;
    int xp;
public:
    void set_name(string name_val){
        name=name_val;
    }
    string get_name(){
        return name;
    }

    Player(){
        name="Empty";
        health=100;
        xp=55;
    }
    Player(string name_val, int health_val, int exp_val ){
        name=name_val;
        health=health_val;
        xp=exp_val;
    }
};

int main()
{
    Player old_char;//this gives compile error if there is no "no args contructor"

    Player kaan("Kaan", 100, 333);
    kaan.set_name("Kaan");
    std::cout<<kaan.get_name()<<std::endl;

	return 0;
}
