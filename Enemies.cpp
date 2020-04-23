#include <iostream>

#include <string>

#include "Enemies.h"

using namespace std;


Enemies :: Enemies()

{

    private:

    string enemyName = "";
    int enemyHealth = 100;
    int statSize = 0;
    for (int i = 0; i<3; i++) //initilizes enemie stats array to 0
    {
        enemyStats[i] = 0;
        enemyStats++;
    }
    
}


Enemies :: Enemies(string new_enemy)
{
    enemyName = new_Enemy;
}

   

string Enemies::getEnemyname(string )
{
    return enemyName;
}



void Enemies:: setEnemyHealth(int change)
{
    enemyHealth = enemyHealth - change;
}
void Enemies:: setEnemyname(string)
{
    enemyName = new_enemy;
}

   
