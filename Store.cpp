#include <iostream>
// use as inventory

// fixed array of size ?, for weapons/food.

//foraged items/foraging will come from here

#include <iostream>

#include <fstream>

#include <string>

#include <iomanip>

#include "Store.h"
#include "Player.h"
#include "Game.h"

using namespace std;

int split (string splitMe, char separator, string storeArray[], int arraySize)
{
    int numberPieces = 0;
    int index = 0;
    
    if (splitMe.length() == 0)
        {
            numberPieces = 0;
            return 0;
        }
    splitMe = splitMe + separator; 
    for (int i = index; i < splitMe.length(); i++)
    {
        if (splitMe[i] == separator)
        {
            if( storeArray[numberPieces].length() > 0)
            {
                numberPieces++;
            }
            
        }
        else 
        {
            storeArray[numberPieces] += splitMe[i];
        }
        if ( numberPieces > arraySize)  
        {
            return -1;
        }
    }
    return numberPieces;
}


Store:Store()
{
    numMedical = 0;
    //initialize weapons array
}

int Store :: getWeaponName(int )
{
    return weaponName;
}



void Store :: updateMedical( int newMedical)
{
   numMedical = numMedical;
} 
void Store :: updateWeaponsAvail(string newUserWeapon, string currentUserWeapon)
{
   
} 
