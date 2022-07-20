#include "Player.h"

int Player::number_of_players{0};

Player::Player(std::string name_val, int health_val, int xp_val)
:name{name_val},health{health_val},xp{xp_val} {
    ++number_of_players;
}

Player::Player(const Player &source): Player(source.name,source.health,source.xp){}

Player::~Player(){
     --number_of_players;
}

int Player::get_number_of_players(){
    return number_of_players;
}
