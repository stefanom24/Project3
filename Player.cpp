#include <iostream>

#include <string>

#include "Player.h"

using namespace std;

Player::Player()
{
    playerName = "";
    int supplySize = 0;
    for (int i = 0; i<15; i++) //initilizes user/player supplies array to 0
    {
        userSupplies[i] = 0;
        userSupplies++;
    }
}

Player::Player(string new_player)
{
    playerName = new_player;
}


string Player::getPlayerName()
{
    return playerName;
}



void Player :: setPlayerName(string new_player)
{
    playerName = new_player;
}
