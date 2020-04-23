#include <iostream>
// use as inventory

// fixed array of size ?, for weapons/food.

//foraged items/foraging will come from here

#include <iostream>

#include <fstream>

#include <string>

#include <iomanip>

#include "Store.h"


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
}

int Store :: getWeaponName()
{
    return weaponName;
}



void Library :: updateMedical( int newMedical)
{
   
} 
void Library :: updateWeapon(string userName, string title, int newRating)
{
   
} 

