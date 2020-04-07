#include <iostream>
#include "Events.h"
using namespace std;

#ifndef SHELTER_H
#define SHELTER_H

class Shelter{
  private:
    int locationID;
    int defensePoints;
    int forageEase;
  
  public:
    Shelter();
    Shelter(int);
  
    getdefensePoints();
    getforageEase();
  
    setdefensePoints(int);
    setforageEase(int);
};
#endif
