#ifndef PLAYER_HPP
#define PLAYER_HPP
#include<string>
using namespace std;

class Player
{
    private:
   
    string playerName;
    int userSupplies[15];
   
    public:
    
    Player();
    Player(string);
   
    string getPlayerName();
    void setPlayerName(string);
    
};

#endif
