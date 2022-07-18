#include <iostream>
#include <string>

using namespace std;

class Player{
private:
    string name;
    int health;
    int xp;

public:
    void set_name(string new_name){
        name=new_name;
    }

    Player(){
        cout<<"No args constructor called"<<endl;
    }
    Player(string def_name){
        cout<<"string args constructor called"<<endl;
    }
    Player(string def_name, int health, int exp){
        cout<<"def_name health exp args constructor called"<<endl;
    }
    ~Player(){
        cout<<"Destructor called for "<<name<<endl;
    }

};



int main()
{

    {
        //this plyaer  only avaible in this scope when leave the scope destructor calls auto.
        Player slayer;
        slayer.set_name("Slayer");
    }

    {
        Player kaan;
        kaan.set_name("Kaan");
        Player hero("Hero");
        hero.set_name("Hero");
        Player villian("Villian",100,12);
        villian.set_name("Villian");
    }

    Player *enemy=new Player;
    (*enemy).set_name("Enemy");

    delete enemy;

    std::cout<<"Template"<<std::endl;


	return 0;
}
