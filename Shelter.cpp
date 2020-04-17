#include <iostream>
#include "Shelter.h"
using namespace std;

Shelter::Shelter(){
  shelterID = 0;
  defensePoints = 0;
  suppliesAmount = 0;
}

Shelter::Shelter(int input_){
  int input = input_;
  if(input == 1){
    setshelterID(1);
    setdefensePoints(50);
    setsuppliesAmount(28);
  }
  else if(input == 2){
    setshelterID(2);
    setdefensePoints(25);
    setsuppliesAmount(14);
  }
  else if(input == 3){
    setshelterID(3);
    setdefensePoints(10);
    setsuppliesAmount(35);
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
