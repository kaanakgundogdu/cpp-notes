#include <iostream>
#include <string>

using namespace std;


class Player{
private:
    string name;
    int health;
    int xp;
public:
    string get_name(){return name;}
    int get_health(){return health;}
    int get_exp(){return xp;}

    Player(string name_val="None", int health_val=0, int exp_val=0 );
    //Copy constructor
    Player(const Player &source);
    //Destructor
    ~Player(){cout<<"Dectructor called for "<<name<<endl;}
};

Player::Player(std::string name_val, int health_val, int exp_val ):name{name_val}, health{health_val}, xp {exp_val}
{std::cout<<"Three-args constructor"<<std::endl;}


Player::Player(const Player &source): name {source.name},health{source.health},xp {source.xp}{
    cout<<"Copy constructor - made copy of "<<source.name<<endl;
}

void display_player(Player p){
    cout<<"Name: "<<p.get_name()<<endl;
    cout<<"Health: "<<p.get_health()<<endl;
    cout<<"XP: "<<p.get_exp()<<endl;
}

int main()
{
    Player empty;
    Player compy_of_empty;

    display_player(empty);

    Player kaan {"Kaan"};
    display_player(kaan);

    Player hero {"Hero",200};

    Player villian {"Villian",100,44};




	return 0;
}
