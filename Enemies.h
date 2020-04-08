// different types and difficulty levels. 
// randomize which aliens appear in each day. more than one?
#ifndef ENEMIES_HPP
#define ENEMIES_HPP
#include<string>

using namespace std;

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
    
};

#endif
