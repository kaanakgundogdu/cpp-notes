#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>

class Player{
private:
    static int number_of_players;
    std::string name;
    int health;
    int xp;
public:
    void set_name(std::string name_val){
        name=name_val;
    }
    std::string get_name(){
        return name;
    }
    int get_health(){
        return health;
    }
    int get_xp(){
        return xp;
    }

    Player(std::string name_val="None", int health_val=0, int exp_val=0 );

    Player(const Player &source);

    ~Player();

    static get_number_of_players();
};

#endif // _PLAYER_H_