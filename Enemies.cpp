// different types and difficulty levels. 

// randomize which aliens appear in each day. more than one?

#ifndef ENEMIES_HPP

#define ENEMIES_HPP

#include<string>


Enemies :: Enemies()

{

    private:

    string enemyName = "";

    int statSize = 0;
    for (int i = 0; i<15; i++) //initilizes enemie stats array to 0
    {
        enemyStats[i] = 0;
        enemyStats++;
    }
    
}


Enemies :: Enemies(string new_Enemy)
{
    enemyName = new_Enemy;
}

   

string Enemies::getEnemyname(string )
{
    
}


int Enemies:: getStatsAt(int)
{
    
}


void Enemies:: setEnemyname(string)
{
    
}

bool Enemies:: setStatesAt(int , int) //takes an index, rating value
{
    
}
    




