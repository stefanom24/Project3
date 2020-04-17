#include <iostream>
#include "Events.h"
using namespace std;

#ifndef SHELTER_H
#define SHELTER_H

class Shelter{
  private:
    int shelterID;
    int defensePoints;
    int suppliesAmount;
  
  public:
    Shelter();
    Shelter(int);
  
    getdefensePoints();
    getsuppliesAmount();
  
    setdefensePoints(int);
    setsuppliesAmount(int);
};
#endif
