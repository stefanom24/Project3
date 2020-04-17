#include <iostream>
#include "Shelter.h"
using namespace std;

Shelter::Shelter(){
  shelterID = 0;
  defensePoints = 0; //Probability of raid events. Low defense = 50%, Medium defense = 25%, High defense = 10%.
  suppliesAmount = 0; //Costs 7 supplies a day to survive, need total of 49 supplies to survive the seven days.
}

Shelter::Shelter(int input_){
  int input = input_;
  if(input == 1){
    setshelterID(1); //Friend's apartment in the city.
    setdefensePoints(50); //Low defense.
    setsuppliesAmount(28); //High supplies.
  }
  else if(input == 2){
    setshelterID(2); //Campsite in mountains/
    setdefensePoints(25); //Medium defense.
    setsuppliesAmount(14); //Medium supplies.
  }
  else if(input == 3){
    setshelterID(3); //Bunker, if found.
    setdefensePoints(10); //High defense.
    setsuppliesAmount(35); //Ultra high supplies.
  }
}

Shelter::setshelterID(int input_){
  int input = input_;
  shelterID = input;
}

Shelter::setdefensePoints(int input_){
  int input = input_;
  defensePoints = input;
}

Shelter::setsuppliesAmount(int input_){
  int input = input_;
  suppliesAmount = input;
}

Shelter::getshelterID(){
  return shelterID;
}

Shelter::getdefensePoints(){
  return defensePoints;
}

Shelter::getsuppliesAmount(){
  return suppliesAmount;
}
