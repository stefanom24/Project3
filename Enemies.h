// different types and difficulty levels. 
// randomize which aliens appear in each day. more than one?
#ifndef ENEMIES_HPP
#define ENEMIES_HPP
#include<string>

using namespace std;

class Enemies
{
    private:
   
    string enemyName;
    int enemyStats[3];
    
   
    public:
    
    Enemies();
    Enemies(string);
   
    string getEnemyname();
    int getStatsAt(int);
   
    void setEnemyname(string);
    bool setStatesAt(int , int); //takes an index, rating value
    
};

#endif
