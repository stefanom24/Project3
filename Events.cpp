//get rid of events class bc redundent --- from Anuj meeting
#include <iostream>
#include "Events.h"
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
