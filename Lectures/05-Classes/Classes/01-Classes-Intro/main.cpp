#include <iostream>
#include <string>

using namespace std;

class Player{
public:
    string name;
    int health;
    int xp;

    void talk(string text_to_say){
        cout<<name<<" says "<<text_to_say<<endl;
    }
    void is_dead();


};

int main()
{
    Player kaan;
    kaan.name="Kaan";
    kaan.health=100;
    kaan.xp=12;

    kaan.talk("sa");

    Player *enemy=new Player;

    (*enemy).name="Enemy";
    (*enemy).health=99;
    enemy->xp=15;
    enemy->talk("I wil find you and i will kill you!");

    delete enemy;

	return 0;
}
