#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

void display_active_players(){
    cout<<"Active players: "<<Player::get_number_of_players()<<endl;
}

int main()
{
    display_active_players();

    Player hero{"hero"};
    display_active_players();

    Player villian{"villian"};
    display_active_players();

    {
        Player kaan{"Kaan"};
        display_active_players();
    }

    display_active_players();

    Player *enemy= new Player("Enemy",1212,22222);
    display_active_players();
    delete enemy;
    display_active_players();

	return 0;
}
