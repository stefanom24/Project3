// use as inventory
// fixed array of size ?, for weapons/food.
//foraged items/foraging will come from here
#include <iostream>


	//only carry one weapon 
	//healing items
#ifndef STORE_HPP
#define STORE_HPP
#include<string>

using namespace std;

class Store
{
    private:
   
    string weaponsAvail[3];
    string userWeapon;
    int numMedical;
    
    
    public:
    
    Store();
   
    int readWeapons(string);
    string getUserWeaponName(int);
    
    
    void viewAllItems(string, int);
    void printWeaponName();
    void updateWeapon(string, string, int);
    void updateMedical(int, int);
    
};

#endif
	
	
