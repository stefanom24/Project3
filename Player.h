#ifndef PLAYER_HPP
#define PLAYER_HPP
#include<string>
using namespace std;

class Player
{
    private:
   
    string playerName;
    int userSupplies[15];
    int playerHealth;
   
    public:
    
    Player();
    Player(string);
   
    string getPlayerName();
    void setPlayerName(string);
    
    void setPlayerHealth(int);
    int getPlayerHealth();
    
};

#endif
