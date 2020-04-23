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
    int numMedical;
    
    
    public:
    
    Store();
   
    int readWeapons(string);
    
    
    void viewAllItems(string, int);
    void updateWeaponsAvail(string, string, int);
    void updateMedical(int, int);
    
};

#endif
	
	
