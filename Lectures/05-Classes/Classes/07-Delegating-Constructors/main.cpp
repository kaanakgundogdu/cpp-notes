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


Player::Player(): Player{"None",0,0}
{std::cout<<"No-args constructor"<<std::endl;}

Player::Player(string name_val): Player{name_val,0,0}
{std::cout<<"One-arg constructor"<<std::endl;}


Player::Player(string name_val, int health_val, int exp_val ):
name{name_val}, health{health_val}, xp {exp_val}
{std::cout<<"Three-args constructor"<<std::endl;}




int main()
{
    Player empty;
    Player kaan {"Kaan"};
    Player villian {"Villian",100,44};



	return 0;
}
