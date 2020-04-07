#include <iostream>

#include <string>

#include "Player.h"

using namespace std;

Player::Player()
{
    playerName = "";
    
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
