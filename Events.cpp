class Enemies
{
    private:
   
    string enemieName;
    int enemieStats[3];
    
   
    public:
    
    Enemie();
    Enemie(string);
   
    string getEnemiename();
    int getStatsAt(int);
   
    void setEnemiename(string);
    bool setStatesAt(int , int); //takes an index, rating value
    

#include <iostream>
#include <fstream>
#include <string>
#include "Book.h"
#include "User.h"

using namespace std;
Enemie::Enemie()
{
    enemieName = "";
    int statsSize = 0;
    for (int i = 0; i<3; i++)
    {
        enemieStats[i] = 0;
        statsSize++;
    }
}


string Enemie :: getEnemieName()
{
    return enemieName;
}
int Enemie :: getStatsAt(int i)
{
    if ( i < 50 && i >= 0)
    {
       return enemieStats[i]; 
    }
    else
    {
        return -1;
    }
}
   


void Enemie :: setEnemieName(string new_EnemieName)
{
    enemieName = new_EnemieName;
}
bool Enemie :: setStatsAt(int i, int r) //takes a book index, rating value 
{
    
    if (  (r >= 0 && r <= 5) && i < 50 && i >= 0) //CHANGE R HERE TO REFLECT ENEMIE STATS
    {
       enemieStats[i] = r;
       return true;
    }
    else 
    {
        return false;
    }
}
