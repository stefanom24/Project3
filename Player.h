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
    int playerMedSupplies;

    //int userSupplies[15];

   

    public:

    

    Player();

    Player(string);

   

    string getPlayerName();
    string getWeaponName();
    int getPlayerHealth();
    int getPlayerMedSupplies();
    

    void setPlayerName(string);
    void setWeaponName(string);
    void setPlayerHealth(int);
    void setPlayerHealing(int);
    void setPlayerMedSupplies(int);
    

};



#endif
