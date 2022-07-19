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

    Player();
    Player(string name_val);
    Player(string name_val, int health_val, int exp_val );
};

//Not init. this is assignment
//Player::Player(){
//    name="None";
//    health=0;
//    xp=0;
//}


// Initializer
Player::Player(): name{"None"}, health{0}, xp {0} {}

Player::Player(std::string name_val): name{name_val}, health{0}, xp {0}{}

Player::Player(std::string name_val,int health_val, int exp_val):
name{name_val}, health{health_val}, xp {exp_val}{}



int main()
{
    Player empty;
    Player kaan {"Kaan"};
    Player villian {"Villian",100,44};

	return 0;
}
