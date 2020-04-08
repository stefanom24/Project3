#include <iostream>
#include "Date.h"
using namespace std;

#ifndef EVENTS_H
#define EVENTS_H

class Events{
  private:
    int currentDay;
    int locationID;
    
  public: 
    Events();
    Events(int, int);
  
    setcurrentDay(int);
    setlocationID(int);
  
    getcurrentDay();
    getlocationID();
  
};
#endif
