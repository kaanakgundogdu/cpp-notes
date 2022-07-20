#include <iostream>
#include <string>

using namespace std;


class Player{
private:
    std::string name;
    int health;
    int xp;
public:
    void set_name(std::string name_val){
        name=name_val;
    }
    std::string get_name() const{
        return name;
    }

    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int exp_val );
};


Player::Player(): Player("None",0,0) {}


Player::Player(std::string name_val,int health_val, int exp_val):
name{name_val}, health{health_val}, xp {exp_val}{}

void display_player_name(const Player &p){
    cout<<p.get_name()<<endl;
}

int main()
{
    const Player villian {"Villian",100,55};//read only object cant change attiributes
    Player hero {"Hero",100,15};

//    if get_name function is not const

//    villian.set_name("Supe Villian"); //gives error

//    cout<<villian.get_name()<<endl; // gives error
//    cout<<hero.get_name()<<endl; // doesnt gives error

//    display_player_name(hero);// even not const this gives error

//    if get_name function is const

    cout<<villian.get_name()<<endl; // after giving const this works fine
    display_player_name(hero);
    display_player_name(villian);
	return 0;
}
