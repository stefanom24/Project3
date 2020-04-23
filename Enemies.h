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

    int enemieStats[3];

    
    public:

   
    Enemy();

    Enemy(string);

   

    string getEnemyname();

    int getStatsAt(int);
    int getEnemyHealth();

   

    void setEnemyname(string);
    void setEnemyHealth(int);
   
    
};

#endif
