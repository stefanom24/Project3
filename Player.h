#ifndef PLAYER_HPP

#define PLAYER_HPP

#include<string>

using namespace std;



class Player

{

    private:

   

    string playerName;
    string weaponName;
    int playerHealth;

    //int userSupplies[15];

   

    public:

    

    Player();

    Player(string);

   

    string getPlayerName();
    string getWeaponName();
    int getPlayerHealth();
    

    void setPlayerName(string);
    void setWeaponName(string);
    void setPlayerHealth(int);
    

};



#endif
