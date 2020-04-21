#include <iostream>

#include <string>

#include "Date.h"

using namespace std;

Date::Date()
{
    currentDay = 1;
    //year,month,day?
}

Date::Date(int currentDay)
{
    currentDay = 1;
}


int Date::getDate()
{
    return currentDay;
}

void Date::setDate(int day)
{
    currentDay =  day;  
}    
