#ifndef PLAYER_HPP
#define PLAYER_HPP
#include<string>
using namespace std;

class Player
{
    private:
   
    string playerName;
    
   
    public:
    
    Player();
    Player(string);
   
    string getPlayerName();
    void setPlayerName(string);
    
};

#endif
