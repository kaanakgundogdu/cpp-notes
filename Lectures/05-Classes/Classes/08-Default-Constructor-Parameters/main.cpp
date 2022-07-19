#include <iostream>
#include <string>

using namespace std;


class Player{
private:
    string name;
    int health;
    int xp;
public:
    Player(string name_val="None", int health_val=0, int exp_val=0 );
};

Player::Player(string name_val, int health_val, int exp_val ):
name{name_val}, health{health_val}, xp {exp_val}
{std::cout<<"Three-args constructor"<<std::endl;}


int main()
{
    Player empty;
    Player kaan {"Kaan"};
    Player hero {"Hero",200};
    Player villian {"Villian",100,44};

	return 0;
}
