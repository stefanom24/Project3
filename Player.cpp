#include <iostream>



#include <string>



#include "Player.h"



using namespace std;



Player::Player()

{

    playerName = "";

    //int supplySize = 0;

    playerHealth = 100;
    weaponName = "";
    playerMedSupplies = 0;

 

}



Player::Player(string new_player)

{

    playerName = new_player;

}


string Player::getWeaponName()
{
    return weaponName
}


string Player::getPlayerName()

{

    return playerName;

}

int Player::getPlayerMedSupplies()
{
    return playerMedSupplies;
}


void Player::setPlayerMedSupplies(int change, int IorD)//takes in change amount and if incre or decre
{
    if (IorD == 0)
    {
        //decrease
        playerMedSupplies = playerMedSupplies - change;
    }
    else if (IorD == 1)
    {
        playerMedSupplies = playerMedSupplies + change;
    }
    else
    {
        cout << "Invalid Option." << endl;
    }
    
}
void Player :: setPlayerName(string new_player)

{

    playerName = new_player;

}

void Player :: setWeaponName(string new_weapon)
{
    weaponName = new_weapon;
}

void Player::setPlayerHealth(int dmgInput_){

    int dmgInput = dmgInput_;

    

    playerHealth = dmgInput;

}

void Player::setPlayerHealing(int heal)
{
    playerHealth = playerHealth + heal;
}

int Player::getPlayerHealth(){

    return playerHealth;

}
