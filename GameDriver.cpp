// include all necessary header files.
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
#include <cstlib>
#include <ctime>

int randomNumbers(int min, int max)
{
    // rand() % (max-min+1) + min
    return (rand() % (max-min+1)) + min;
}

int playerFight(int playerRoll, int enemyRoll){
  if(playerRoll > enemyRoll){
    cout << "Player is doing damage to Alien!" << endl;
    Player pl;
    pl.getWeaponName;
    if(pl == "Knife"){
      int damage = playerRoll - enemyRoll * 1;
      int newEnemyHealth = getEnemyHealth() - damage;
      setEnemyHealth(newEnemyHealth);
    }
    else if(pl == "Pistol"){
      int damage = playerRoll - enemyRoll * 2;
      int newEnemyHealth = getEnemyHealth() - damage;
      setEnemyHealth(newEnemyHealth);
    }
    else if(pl == "Assault Rifle"){
      int damage = playerRoll - enemyRoll * 3;
      int newEnemyHealth = getEnemyHealth() - damage;
      setEnemyHealth(newEnemyHealth);
    }
  }
  else if(enemyRoll > playerRoll){
    cout << "Alien is doing damage to Player!" << endl;
    int damage = enemyRoll - playerRoll;
    int newPlayerHealth = getPlayerHealth - damage;
    setPlayerHealth(newPlayerHealth);
  }
  else{
    cout << "Player and enemy have rolled the same number! No damage is dealt to either Player or Enemy." << endl;
  }
}

int main(){
  bool quit = false;
  int dayCount = 1;
  
  while(quit = false){
    while(dayCount == 1){
      int input;
      int input2;
      Shelter shel;
      cout << "March 7th, 20??" << endl << "06:29 AM" << endl;
      cout << "It's early in the morning and most people are still asleep in Denver, Colorado." << endl << "06:30 AM" << endl;
      cout << "A trinkling of alarms can be heard spreading through the streets of Denver until everyone's phone is blaring the emergency alarm in unison." << endl;
      cout << "Our hero wakes up, stumbles through his cluttered studio apartment to grab his phone. Rubbing his eyes and focusing on the phone's screen, the emergency message reads: 'This is not a drill. It has been reported by NASA and other world renowned space administrations that unknown alien forces are moving into Earth's orbit for unknown reasons. Do not panic, they could be coming in peace. However, in the event of a Global Emergency the Military will be enacted to it's full power -- rely on them, rely on us the government, but most importantly rely on your own power." << endl;
      cout << "The hero faces a choice:" << endl;
      cout << "===== CHOICES =====" << endl;
      cout << "1. PANIC! Pack up anything you deem useful in your apartment and choose a base." << endl;
      cout << "2. Prepare. Head to a local general store and grab supplies." << endl;
      cout << "What will our hero do?" << endl;
      cin >> input;
      switch(input){
        case 1:
          {
            cout << "You run around your apartment grabbing some food and water, a kitchen knife, and a photo of your parents." << endl;
            cout << "It's time to pick a base where you will hunker down in during the invasion: " << endl;
            cout << "===== CHOICES =====" << endl;
            cout << "1. Friend's Apartment in the city. Your friend Trent has been a doomsday prepper since 16, you know he'll have tons of supplies but his Apartment will be more susceptible to attacks." << endl;
            cout << "2. It's every man for themselves. Head to a campsite in the mountains where you will be more hidden but will have less access to supplies." << endl;
            cout << "3. Look for Bunker. You've heard rumors of a bunker built during the Cold War but Uncle Bernie's stories were never reliable. 50% chance of finding Bunker, if found: ultra high supplies and high defense, if not found: game over." << endl;
            cout << "What will our hero do?" << endl;
            cin >> input2;
            if(input2 == 1){
              shel.Shelter(input2);
              cout << "Selected: Friend's Apartment in the city." << endl;
            }
            else if(input2 == 2){
              shel.Shelter(input2);
              cout << "Selected: Campsite." << endl;
            }
            else if(input2 == 3){
              //Implement probability function here to figure out next steps.
              int bunkerProb = 0;
              bunkerProb = randomNumbers(1, 100);
              //If not found: game over menu with restart or quit option.
              //If found: shel.Shelter(input2)
              if(bunkerProb >= 1 && bunkerProb <= 50){
                shel.Shelter(input2);
                cout << "Selected: Bunker." << endl;
              }
              else{
                cout << "You look endlessly for the bunker. It was not in the base of the mountains like Uncle Bernie said, it starts getting late and cold. You set up to sleep in a cave until tomorrow however you are not so fortunate and were found by an Alien patrol during the night." << endl;
                cout << "===== GAME OVER! =====" << endl;
                quit = true;
              }
            }
            else{
              cout << "Wrong input. Please try again." << endl;
              //Route back to case 1.
            }
            dayCount++;
            break;
          }
        case 2:
          {
            cout << "You head to a general store. Outside you see thousands of people running around in a form of organized chaos." << endl;
            cout << "As you get to the store, you see many people had the same idea as you and are raiding the store. As you look around the store, you find a First Aid Kit and a Knife." << endl;
            cout << "As you head for the exit, someone stops you and says 'Sir, please give me one of those things. I got here late and have nothing to take with me, please I have no one to help me!'" << endl;
            cout << "You face a choice: " << endl;
            cout << "===== CHOICES =====" << endl;
            cout << "1. You keep the First Aid Kid and give her the Knife." << endl;
            cout << "2. You keep the Knife and give her the First Aid Kit." << endl;
            cin >> input2;
            if(input2 == 1){
              // Add First Aid Kit into Inventory.
            }
            else if(input2 == 2){
              // Add Knife into Inventory.
            }
            else{
              cout << "Invalid input. Please try again." << endl;
              cin >> input2;
            }
            dayCount++;
            break;
          }
      }
    }
    
    while(dayCount == 2){ 
      int input;
      int input2;
      Shelter shel;
      cout << "March 8th, 20??" << endl << "Day 2" << endl;
      cout << "You wake up and feel refreshed from last night's sleep." << endl;
      cout << "You have this many supplies: " << shel.getsuppliesAmount << endl << "Remember you need 7 supplies a day to survive the full 7 days." << endl;
      // Subtract 7 supplies from Supplies Amount. 
      cout << "With that in mind what would you like to do today?" << endl;
       
      while(dayCycle = false){
        cout << "===== CHOICES =====" << endl;
        cout << "1. Go out looting for supplies." << endl; // Day cycle ends after this. 
        cout << "2. Bunker down at home (keep in mind depending on the shelter you picked you'll have a chance of a random encounter with an Alien)." << endl; // Day cycle ends after this.
        cout << "3. Check Player health (you can heal yourself and still choose other options)." << endl;
        cout << "4. Radio in for help! Smaller random chance of finding Healing Items and Food Supplies but no Weapons." << endl; // Day cycle ends after this.
        cout << "5. Check Player weapons." << endl;
        cout << "6. Quit." << endl; // Game ends.
        cin >> input;
        switch(input){
          case 1:
          {
            cout << "You head out to the outer Suburbs to look for loot." << endl;
            cout << "You come across an abandoned house. You look around and find: "
            // Random chance of finding medical items.
            int num = 0;
            // need to write before calling rand() to seed the random number generator
            srand(time(0));
            num = randomNumbers(0,10);
            if(num == 0){
              cout << "You have found no Medical Supplies, Weapons, or Food." << endl;
            }
            else if(num == 1){
              cout << "You have found 1 Medical Supplies, an Assault Rifle, and 14 Food." << endl;
              // Add 1 Medical Supplies to Inventory.
              // Choose to add Assault Rifle to Inventory.
              int newSupplies = shel.getsuppliesAmount() + 14;
              setsuppliesAmount(newSupplies);
            }
            else if(num >= 2 && num <= 5){
              cout << "You have found no Medical Supplies, a Pistol, and 7 Food." << endl;
              // Choose to add Pistol to Inventory.
              int newSupplies = shel.getsuppliesAmount() + 7;
              setsuppliesAmount(newSupplies);
            }
            else if(num > 5 && num <= 10){
              cout << "You have found no Medical Supplies, a Knife, and 0 Food." << endl;
              // Choose to add Knife to Inventory. 
            }
            cout << "You start to make your way back to your shelter." << endl;
            // Random chance of Alien encounter.
            int num2 = 0;
            srand(time(0));
            num2 = randomNumbers(1,100);
            if(num2 >= 1 && num2 <= 40){
              cout << "You have randomly encountered an Alien!" << endl;
              cout << "Our hero faces a choice: " << endl;
              cout << "===== CHOICES =====" << endl;
              cout << "1. Fight!" << endl;
              cout << "2. Flee!" << endl;
              cin >> input2;
              int num3 = 0;
              num3 = randomNumbers(1,100);
              switch(input2){
                case 1:
                {
                  cout << "You have chosen to fight the Alien!" << endl << "The Alien is currently equipped with a Knife." << endl;
                  while(getPlayerHealth() > 0 && getEnemyHealth() > 0){
                    cout << "----- DISPLAY -----" << endl;
                    cout << "Player health: " << getPlayerHealth() << endl << "Alien health: " << getEnemyHealth() << endl;
                    int playerRoll = 0;
                    int enemyRoll = 0;
                    playerRoll = randomNumbers(1, 100);
                    enemyRoll = randomNumbers(1, 100);
                    playerFight(playerRoll, enemyRoll);
                  }
                  if(getPlayerHealth() <= 0){
                    cout << "===== GAME OVER =====" << endl;
                    quit = true;
                    // journaling mechanic
                    dayCycle = true;
                    break;
                  }
                  else if(getPlayerHealth() > 0 && getEnemyHealth() <= 0){
                    cout << "Alien killed." << endl << "You escape before Alien reinforcements show up and head towards your shelter." << endl;
                    dayCycle = true;
                    break;
                  }
                }
                case 2:
                {
                  if(num3 >= 1 && num3 <= 50){
                    cout << "You have successfully fleed from the Alien and headed safely to your shelter." << endl;
                    dayCount++;
                    dayCycle = true;
                    break;
                  }
                  else{
                    cout << "You have been wounded as you flee from the Alien." << endl;
                    // Take X amount of damage to Player health.
                    dayCount++;
                    dayCycle = true;
                    break;
                  }
                }
              }
            }
          }
          case 2:
          {
            int shelterID = getshelterID();
            string shelterName = "";
            int bunkerProb = randomNumbers(1, 100);
            if(shelterID == 1){
              shelterName = "Friend's Apartment";
              cout << "You have decided to stay back and bunker down at " << shelterName << "." << endl;
              if(bunkerProb >= 1 && bunkerProb <= getdefensePoints()){
                cout << "Your shelter is currently under attack by Aliens!" << endl << "You have to fight for your right to live!" << endl;
                while(getPlayerHealth() > 0 && getEnemyHealth() > 0){
                    cout << "----- DISPLAY -----" << endl;
                    cout << "Player health: " << getPlayerHealth() << endl << "Alien health: " << getEnemyHealth() << endl;
                    int playerRoll = 0;
                    int enemyRoll = 0;
                    playerRoll = randomNumbers(1, 100);
                    enemyRoll = randomNumbers(1, 100);
                    playerFight(playerRoll, enemyRoll);
                }
                if(getPlayerHealth() <= 0){
                  cout << "===== GAME OVER =====" << endl;
                    quit = true;
                    // journaling mechanic
                    dayCycle = true;
                    break;
                }
                else if(getPlayerHealth() > 0 && getEnemyHealth() <= 0){
                    cout << "Alien killed." << endl << "You escape before Alien reinforcements show up and head towards your shelter." << endl;
                    dayCycle = true;
                    break;
                }
              }
              else{
                cout << "You have a relaxing day at what you call Home now and are now heading to sleep." << endl;
                // Set up journaling mechanic here. 
              }
            }
            else if(shelterID == 2){
              shelterName = "Campsite";
              cout << "You have decided to stay back and bunker down at " << shelterName << "." << endl;
              if(bunkerProb >= 1 && bunkerProb <= getdefensePoints()){
                cout << "Your shelter is currently under attack by Aliens!" << endl << "You have to fight for your right to live!" << endl;
                while(getPlayerHealth() > 0 && getEnemyHealth() > 0){
                    cout << "----- DISPLAY -----" << endl;
                    cout << "Player health: " << getPlayerHealth() << endl << "Alien health: " << getEnemyHealth() << endl;
                    int playerRoll = 0;
                    int enemyRoll = 0;
                    playerRoll = randomNumbers(1, 100);
                    enemyRoll = randomNumbers(1, 100);
                    playerFight(playerRoll, enemyRoll);
                }
                if(getPlayerHealth() <= 0){
                  cout << "===== GAME OVER =====" << endl;
                    quit = true;
                    // journaling mechanic
                    dayCycle = true;
                    break;
                }
                else if(getPlayerHealth() > 0 && getEnemyHealth() <= 0){
                    cout << "Alien killed." << endl << "You escape before Alien reinforcements show up and head towards your shelter." << endl;
                    dayCycle = true;
                    break;
                }
              }
              else{
                cout << "You have a relaxing day at what you call Home now and are now heading to sleep." << endl;
                // Set up journaling mechanic here. 
              }
            }
            else if(shelterID == 3){
              shelterName = "Bunker";
              cout << "You have decided to stay back and bunker down at " << shelterName << "." << endl;
              if(bunkerProb >= 1 && bunkerProb <= getdefensePoints()){
                cout << "Your shelter is currently under attack by Aliens!" << endl << "You have to fight for your right to live!" << endl;
                while(getPlayerHealth() > 0 && getEnemyHealth() > 0){
                    cout << "----- DISPLAY -----" << endl;
                    cout << "Player health: " << getPlayerHealth() << endl << "Alien health: " << getEnemyHealth() << endl;
                    int playerRoll = 0;
                    int enemyRoll = 0;
                    playerRoll = randomNumbers(1, 100);
                    enemyRoll = randomNumbers(1, 100);
                    playerFight(playerRoll, enemyRoll);
                }
                if(getPlayerHealth() <= 0){
                  cout << "===== GAME OVER =====" << endl;
                    quit = true;
                    // journaling mechanic
                    dayCycle = true;
                    break;
                }
                else if(getPlayerHealth() > 0 && getEnemyHealth() <= 0){
                    cout << "Alien killed." << endl << "You escape before Alien reinforcements show up and head towards your shelter." << endl;
                    dayCycle = true;
                    break;
                }
              }
              else{
                cout << "You have a relaxing day at what you call Home now and are now heading to sleep." << endl;
                // Set up journaling mechanic here. 
                dayCycle = true;
                break;
              }
            }
            
            
            
          }
          case 3: // Player health
          {
            cout << "You check on your health." << endl << "Player health: " << getPlayerHealth() << endl;
            cout << "===== CHOICES =====" << endl;
            cout << "1. Heal yourself." << endl;
            cout << "2. Go back and choose something else to do." << endl;
            cin >> input2;
            if(input2 == 1){
              // Healing mechanic.
              cout << "You heal yourself." << endl << "Player health: " << getPlayerHealth() << endl;
              break;
            }
            if(input2 == 2){
              cout << "What would you like to do today?" << endl;
              break;
            }
          }
          case 4: // Radio in for help.
          {
            cout << "There is an old radio lying around somewhere in your shelter. You can try and Radio for some help but you know there's a big chance no one will answer." << endl;
            cout << "35% chance of receiving 1 Medical Supply and 7 Food." << endl;
            int radioProb = randomNumbers(1, 100);
            if(radioProb >= 1 && radioProb <= 35){
              int newSupplies = getsuppliesAmount() + 7;
              setsuppliesAmount(newSupplies);
              // Increase health items by 1.
              cout << "You have succesfully contacted some people who said they'll give you some of their supplies. They're sending over 7 Food and 1 First Aid Kit." << endl;
              dayCycle = true;
              break;
            }
            else{
              cout << "You try for a whole day to get someone on the radio but to no success. You feel like you wasted the day away." << endl;
              dayCycle = true;
              break;
            }
          }
          case 5:
          {
            cout << "You currently have a " << getWeaponName() << " equipped." << endl;
            break;
          }
          case 6: //Quit.
          {
            cout << "Goodbye!" << endl;
            quit = true;
            break;
          }
        }
      }
    }
    
    while(dayCount == 3){ 
      int input;
      int input2;
      Shelter shel;
      cout << "March 8th, 20??" << endl << "Day 2" << endl;
      cout << "You wake up and feel refreshed from last night's sleep." << endl;
      cout << "You have this many supplies: " << shel.getsuppliesAmount << endl << "Remember you need 7 supplies a day to survive the full 7 days." << endl;
      // Subtract 7 supplies from Supplies Amount. 
      cout << "With that in mind what would you like to do today?" << endl;
       
      while(dayCycle = false){
        cout << "===== CHOICES =====" << endl;
        cout << "1. Go out looting for supplies." << endl; // Day cycle ends after this. 
        cout << "2. Bunker down at home (keep in mind depending on the shelter you picked you'll have a chance of a random encounter with an Alien)." << endl; // Day cycle ends after this.
        cout << "3. Check Player health (you can heal yourself and still choose other options)." << endl;
        cout << "4. Radio in for help! Smaller random chance of finding Healing Items and Food Supplies but no Weapons." << endl; // Day cycle ends after this.
        cout << "5. Check Player weapons." << endl;
        cout << "6. Quit." << endl; // Game ends.
        cin >> input;
        switch(input){
          case 1:
          {
            cout << "You head out to the outer Suburbs to look for loot." << endl;
            cout << "You come across an abandoned house. You look around and find: "
            // Random chance of finding medical items.
            int num = 0;
            // need to write before calling rand() to seed the random number generator
            srand(time(0));
            num = randomNumbers(0,10);
            if(num == 0){
              cout << "You have found no Medical Supplies, Weapons, or Food." << endl;
            }
            else if(num == 1){
              cout << "You have found 1 Medical Supplies, an Assault Rifle, and 14 Food." << endl;
              // Add 1 Medical Supplies to Inventory.
              // Choose to add Assault Rifle to Inventory.
              int newSupplies = shel.getsuppliesAmount() + 14;
              setsuppliesAmount(newSupplies);
            }
            else if(num >= 2 && num <= 5){
              cout << "You have found no Medical Supplies, a Pistol, and 7 Food." << endl;
              // Choose to add Pistol to Inventory.
              int newSupplies = shel.getsuppliesAmount() + 7;
              setsuppliesAmount(newSupplies);
            }
            else if(num > 5 && num <= 10){
              cout << "You have found no Medical Supplies, a Knife, and 0 Food." << endl;
              // Choose to add Knife to Inventory. 
            }
            cout << "You start to make your way back to your shelter." << endl;
            // Random chance of Alien encounter.
            int num2 = 0;
            srand(time(0));
            num2 = randomNumbers(1,100);
            if(num2 >= 1 && num2 <= 40){
              cout << "You have randomly encountered an Alien!" << endl;
              cout << "Our hero faces a choice: " << endl;
              cout << "===== CHOICES =====" << endl;
              cout << "1. Fight!" << endl;
              cout << "2. Flee!" << endl;
              cin >> input2;
              int num3 = 0;
              num3 = randomNumbers(1,100);
              switch(input2){
                case 1:
                {
                  cout << "You have chosen to fight the Alien!" << endl << "The Alien is currently equipped with a Knife." << endl;
                  while(getPlayerHealth() > 0 && getEnemyHealth() > 0){
                    cout << "----- DISPLAY -----" << endl;
                    cout << "Player health: " << getPlayerHealth() << endl << "Alien health: " << getEnemyHealth() << endl;
                    int playerRoll = 0;
                    int enemyRoll = 0;
                    playerRoll = randomNumbers(1, 100);
                    enemyRoll = randomNumbers(1, 100);
                    playerFight(playerRoll, enemyRoll);
                  }
                  if(getPlayerHealth() <= 0){
                    cout << "===== GAME OVER =====" << endl;
                    quit = true;
                    // journaling mechanic
                    dayCycle = true;
                    break;
                  }
                  else if(getPlayerHealth() > 0 && getEnemyHealth() <= 0){
                    cout << "Alien killed." << endl << "You escape before Alien reinforcements show up and head towards your shelter." << endl;
                    dayCycle = true;
                    break;
                  }
                }
                case 2:
                {
                  if(num3 >= 1 && num3 <= 50){
                    cout << "You have successfully fleed from the Alien and headed safely to your shelter." << endl;
                    dayCount++;
                    dayCycle = true;
                    break;
                  }
                  else{
                    cout << "You have been wounded as you flee from the Alien." << endl;
                    // Take X amount of damage to Player health.
                    dayCount++;
                    dayCycle = true;
                    break;
                  }
                }
              }
            }
          }
          case 2:
          {
            int shelterID = getshelterID();
            string shelterName = "";
            int bunkerProb = randomNumbers(1, 100);
            if(shelterID == 1){
              shelterName = "Friend's Apartment";
              cout << "You have decided to stay back and bunker down at " << shelterName << "." << endl;
              if(bunkerProb >= 1 && bunkerProb <= getdefensePoints()){
                cout << "Your shelter is currently under attack by Aliens!" << endl << "You have to fight for your right to live!" << endl;
                while(getPlayerHealth() > 0 && getEnemyHealth() > 0){
                    cout << "----- DISPLAY -----" << endl;
                    cout << "Player health: " << getPlayerHealth() << endl << "Alien health: " << getEnemyHealth() << endl;
                    int playerRoll = 0;
                    int enemyRoll = 0;
                    playerRoll = randomNumbers(1, 100);
                    enemyRoll = randomNumbers(1, 100);
                    playerFight(playerRoll, enemyRoll);
                }
                if(getPlayerHealth() <= 0){
                  cout << "===== GAME OVER =====" << endl;
                    quit = true;
                    // journaling mechanic
                    dayCycle = true;
                    break;
                }
                else if(getPlayerHealth() > 0 && getEnemyHealth() <= 0){
                    cout << "Alien killed." << endl << "You escape before Alien reinforcements show up and head towards your shelter." << endl;
                    dayCycle = true;
                    break;
                }
              }
              else{
                cout << "You have a relaxing day at what you call Home now and are now heading to sleep." << endl;
                // Set up journaling mechanic here. 
              }
            }
            else if(shelterID == 2){
              shelterName = "Campsite";
              cout << "You have decided to stay back and bunker down at " << shelterName << "." << endl;
              if(bunkerProb >= 1 && bunkerProb <= getdefensePoints()){
                cout << "Your shelter is currently under attack by Aliens!" << endl << "You have to fight for your right to live!" << endl;
                while(getPlayerHealth() > 0 && getEnemyHealth() > 0){
                    cout << "----- DISPLAY -----" << endl;
                    cout << "Player health: " << getPlayerHealth() << endl << "Alien health: " << getEnemyHealth() << endl;
                    int playerRoll = 0;
                    int enemyRoll = 0;
                    playerRoll = randomNumbers(1, 100);
                    enemyRoll = randomNumbers(1, 100);
                    playerFight(playerRoll, enemyRoll);
                }
                if(getPlayerHealth() <= 0){
                  cout << "===== GAME OVER =====" << endl;
                    quit = true;
                    // journaling mechanic
                    dayCycle = true;
                    break;
                }
                else if(getPlayerHealth() > 0 && getEnemyHealth() <= 0){
                    cout << "Alien killed." << endl << "You escape before Alien reinforcements show up and head towards your shelter." << endl;
                    dayCycle = true;
                    break;
                }
              }
              else{
                cout << "You have a relaxing day at what you call Home now and are now heading to sleep." << endl;
                // Set up journaling mechanic here. 
              }
            }
            else if(shelterID == 3){
              shelterName = "Bunker";
              cout << "You have decided to stay back and bunker down at " << shelterName << "." << endl;
              if(bunkerProb >= 1 && bunkerProb <= getdefensePoints()){
                cout << "Your shelter is currently under attack by Aliens!" << endl << "You have to fight for your right to live!" << endl;
                while(getPlayerHealth() > 0 && getEnemyHealth() > 0){
                    cout << "----- DISPLAY -----" << endl;
                    cout << "Player health: " << getPlayerHealth() << endl << "Alien health: " << getEnemyHealth() << endl;
                    int playerRoll = 0;
                    int enemyRoll = 0;
                    playerRoll = randomNumbers(1, 100);
                    enemyRoll = randomNumbers(1, 100);
                    playerFight(playerRoll, enemyRoll);
                }
                if(getPlayerHealth() <= 0){
                  cout << "===== GAME OVER =====" << endl;
                    quit = true;
                    // journaling mechanic
                    dayCycle = true;
                    break;
                }
                else if(getPlayerHealth() > 0 && getEnemyHealth() <= 0){
                    cout << "Alien killed." << endl << "You escape before Alien reinforcements show up and head towards your shelter." << endl;
                    dayCycle = true;
                    break;
                }
              }
              else{
                cout << "You have a relaxing day at what you call Home now and are now heading to sleep." << endl;
                // Set up journaling mechanic here. 
                dayCycle = true;
                break;
              }
            }
            
            
            
          }
          case 3: // Player health
          {
            cout << "You check on your health." << endl << "Player health: " << getPlayerHealth() << endl;
            cout << "===== CHOICES =====" << endl;
            cout << "1. Heal yourself." << endl;
            cout << "2. Go back and choose something else to do." << endl;
            cin >> input2;
            if(input2 == 1){
              // Healing mechanic.
              cout << "You heal yourself." << endl << "Player health: " << getPlayerHealth() << endl;
              break;
            }
            if(input2 == 2){
              cout << "What would you like to do today?" << endl;
              break;
            }
          }
          case 4: // Radio in for help.
          {
            cout << "There is an old radio lying around somewhere in your shelter. You can try and Radio for some help but you know there's a big chance no one will answer." << endl;
            cout << "35% chance of receiving 1 Medical Supply and 7 Food." << endl;
            int radioProb = randomNumbers(1, 100);
            if(radioProb >= 1 && radioProb <= 35){
              int newSupplies = getsuppliesAmount() + 7;
              setsuppliesAmount(newSupplies);
              // Increase health items by 1.
              cout << "You have succesfully contacted some people who said they'll give you some of their supplies. They're sending over 7 Food and 1 First Aid Kit." << endl;
              dayCycle = true;
              break;
            }
            else{
              cout << "You try for a whole day to get someone on the radio but to no success. You feel like you wasted the day away." << endl;
              dayCycle = true;
              break;
            }
          }
          case 5:
          {
            cout << "You currently have a " << getWeaponName() << " equipped." << endl;
            break;
          }
          case 6: //Quit.
          {
            cout << "Goodbye!" << endl;
            quit = true;
            break;
          }
        }
      }
    }
    
    while(dayCount == 4){ 
      int input;
      int input2;
      Shelter shel;
      cout << "March 8th, 20??" << endl << "Day 2" << endl;
      cout << "You wake up and feel refreshed from last night's sleep." << endl;
      cout << "You have this many supplies: " << shel.getsuppliesAmount << endl << "Remember you need 7 supplies a day to survive the full 7 days." << endl;
      // Subtract 7 supplies from Supplies Amount. 
      cout << "With that in mind what would you like to do today?" << endl;
       
      while(dayCycle = false){
        cout << "===== CHOICES =====" << endl;
        cout << "1. Go out looting for supplies." << endl; // Day cycle ends after this. 
        cout << "2. Bunker down at home (keep in mind depending on the shelter you picked you'll have a chance of a random encounter with an Alien)." << endl; // Day cycle ends after this.
        cout << "3. Check Player health (you can heal yourself and still choose other options)." << endl;
        cout << "4. Radio in for help! Smaller random chance of finding Healing Items and Food Supplies but no Weapons." << endl; // Day cycle ends after this.
        cout << "5. Check Player weapons." << endl;
        cout << "6. Quit." << endl; // Game ends.
        cin >> input;
        switch(input){
          case 1:
          {
            cout << "You head out to the outer Suburbs to look for loot." << endl;
            cout << "You come across an abandoned house. You look around and find: "
            // Random chance of finding medical items.
            int num = 0;
            // need to write before calling rand() to seed the random number generator
            srand(time(0));
            num = randomNumbers(0,10);
            if(num == 0){
              cout << "You have found no Medical Supplies, Weapons, or Food." << endl;
            }
            else if(num == 1){
              cout << "You have found 1 Medical Supplies, an Assault Rifle, and 14 Food." << endl;
              // Add 1 Medical Supplies to Inventory.
              // Choose to add Assault Rifle to Inventory.
              int newSupplies = shel.getsuppliesAmount() + 14;
              setsuppliesAmount(newSupplies);
            }
            else if(num >= 2 && num <= 5){
              cout << "You have found no Medical Supplies, a Pistol, and 7 Food." << endl;
              // Choose to add Pistol to Inventory.
              int newSupplies = shel.getsuppliesAmount() + 7;
              setsuppliesAmount(newSupplies);
            }
            else if(num > 5 && num <= 10){
              cout << "You have found no Medical Supplies, a Knife, and 0 Food." << endl;
              // Choose to add Knife to Inventory. 
            }
            cout << "You start to make your way back to your shelter." << endl;
            // Random chance of Alien encounter.
            int num2 = 0;
            srand(time(0));
            num2 = randomNumbers(1,100);
            if(num2 >= 1 && num2 <= 40){
              cout << "You have randomly encountered an Alien!" << endl;
              cout << "Our hero faces a choice: " << endl;
              cout << "===== CHOICES =====" << endl;
              cout << "1. Fight!" << endl;
              cout << "2. Flee!" << endl;
              cin >> input2;
              int num3 = 0;
              num3 = randomNumbers(1,100);
              switch(input2){
                case 1:
                {
                  cout << "You have chosen to fight the Alien!" << endl << "The Alien is currently equipped with a Knife." << endl;
                  while(getPlayerHealth() > 0 && getEnemyHealth() > 0){
                    cout << "----- DISPLAY -----" << endl;
                    cout << "Player health: " << getPlayerHealth() << endl << "Alien health: " << getEnemyHealth() << endl;
                    int playerRoll = 0;
                    int enemyRoll = 0;
                    playerRoll = randomNumbers(1, 100);
                    enemyRoll = randomNumbers(1, 100);
                    playerFight(playerRoll, enemyRoll);
                  }
                  if(getPlayerHealth() <= 0){
                    cout << "===== GAME OVER =====" << endl;
                    quit = true;
                    // journaling mechanic
                    dayCycle = true;
                    break;
                  }
                  else if(getPlayerHealth() > 0 && getEnemyHealth() <= 0){
                    cout << "Alien killed." << endl << "You escape before Alien reinforcements show up and head towards your shelter." << endl;
                    dayCycle = true;
                    break;
                  }
                }
                case 2:
                {
                  if(num3 >= 1 && num3 <= 50){
                    cout << "You have successfully fleed from the Alien and headed safely to your shelter." << endl;
                    dayCount++;
                    dayCycle = true;
                    break;
                  }
                  else{
                    cout << "You have been wounded as you flee from the Alien." << endl;
                    // Take X amount of damage to Player health.
                    dayCount++;
                    dayCycle = true;
                    break;
                  }
                }
              }
            }
          }
          case 2:
          {
            int shelterID = getshelterID();
            string shelterName = "";
            int bunkerProb = randomNumbers(1, 100);
            if(shelterID == 1){
              shelterName = "Friend's Apartment";
              cout << "You have decided to stay back and bunker down at " << shelterName << "." << endl;
              if(bunkerProb >= 1 && bunkerProb <= getdefensePoints()){
                cout << "Your shelter is currently under attack by Aliens!" << endl << "You have to fight for your right to live!" << endl;
                while(getPlayerHealth() > 0 && getEnemyHealth() > 0){
                    cout << "----- DISPLAY -----" << endl;
                    cout << "Player health: " << getPlayerHealth() << endl << "Alien health: " << getEnemyHealth() << endl;
                    int playerRoll = 0;
                    int enemyRoll = 0;
                    playerRoll = randomNumbers(1, 100);
                    enemyRoll = randomNumbers(1, 100);
                    playerFight(playerRoll, enemyRoll);
                }
                if(getPlayerHealth() <= 0){
                  cout << "===== GAME OVER =====" << endl;
                    quit = true;
                    // journaling mechanic
                    dayCycle = true;
                    break;
                }
                else if(getPlayerHealth() > 0 && getEnemyHealth() <= 0){
                    cout << "Alien killed." << endl << "You escape before Alien reinforcements show up and head towards your shelter." << endl;
                    dayCycle = true;
                    break;
                }
              }
              else{
                cout << "You have a relaxing day at what you call Home now and are now heading to sleep." << endl;
                // Set up journaling mechanic here. 
              }
            }
            else if(shelterID == 2){
              shelterName = "Campsite";
              cout << "You have decided to stay back and bunker down at " << shelterName << "." << endl;
              if(bunkerProb >= 1 && bunkerProb <= getdefensePoints()){
                cout << "Your shelter is currently under attack by Aliens!" << endl << "You have to fight for your right to live!" << endl;
                while(getPlayerHealth() > 0 && getEnemyHealth() > 0){
                    cout << "----- DISPLAY -----" << endl;
                    cout << "Player health: " << getPlayerHealth() << endl << "Alien health: " << getEnemyHealth() << endl;
                    int playerRoll = 0;
                    int enemyRoll = 0;
                    playerRoll = randomNumbers(1, 100);
                    enemyRoll = randomNumbers(1, 100);
                    playerFight(playerRoll, enemyRoll);
                }
                if(getPlayerHealth() <= 0){
                  cout << "===== GAME OVER =====" << endl;
                    quit = true;
                    // journaling mechanic
                    dayCycle = true;
                    break;
                }
                else if(getPlayerHealth() > 0 && getEnemyHealth() <= 0){
                    cout << "Alien killed." << endl << "You escape before Alien reinforcements show up and head towards your shelter." << endl;
                    dayCycle = true;
                    break;
                }
              }
              else{
                cout << "You have a relaxing day at what you call Home now and are now heading to sleep." << endl;
                // Set up journaling mechanic here. 
              }
            }
            else if(shelterID == 3){
              shelterName = "Bunker";
              cout << "You have decided to stay back and bunker down at " << shelterName << "." << endl;
              if(bunkerProb >= 1 && bunkerProb <= getdefensePoints()){
                cout << "Your shelter is currently under attack by Aliens!" << endl << "You have to fight for your right to live!" << endl;
                while(getPlayerHealth() > 0 && getEnemyHealth() > 0){
                    cout << "----- DISPLAY -----" << endl;
                    cout << "Player health: " << getPlayerHealth() << endl << "Alien health: " << getEnemyHealth() << endl;
                    int playerRoll = 0;
                    int enemyRoll = 0;
                    playerRoll = randomNumbers(1, 100);
                    enemyRoll = randomNumbers(1, 100);
                    playerFight(playerRoll, enemyRoll);
                }
                if(getPlayerHealth() <= 0){
                  cout << "===== GAME OVER =====" << endl;
                    quit = true;
                    // journaling mechanic
                    dayCycle = true;
                    break;
                }
                else if(getPlayerHealth() > 0 && getEnemyHealth() <= 0){
                    cout << "Alien killed." << endl << "You escape before Alien reinforcements show up and head towards your shelter." << endl;
                    dayCycle = true;
                    break;
                }
              }
              else{
                cout << "You have a relaxing day at what you call Home now and are now heading to sleep." << endl;
                // Set up journaling mechanic here. 
                dayCycle = true;
                break;
              }
            }
            
            
            
          }
          case 3: // Player health
          {
            cout << "You check on your health." << endl << "Player health: " << getPlayerHealth() << endl;
            cout << "===== CHOICES =====" << endl;
            cout << "1. Heal yourself." << endl;
            cout << "2. Go back and choose something else to do." << endl;
            cin >> input2;
            if(input2 == 1){
              // Healing mechanic.
              cout << "You heal yourself." << endl << "Player health: " << getPlayerHealth() << endl;
              break;
            }
            if(input2 == 2){
              cout << "What would you like to do today?" << endl;
              break;
            }
          }
          case 4: // Radio in for help.
          {
            cout << "There is an old radio lying around somewhere in your shelter. You can try and Radio for some help but you know there's a big chance no one will answer." << endl;
            cout << "35% chance of receiving 1 Medical Supply and 7 Food." << endl;
            int radioProb = randomNumbers(1, 100);
            if(radioProb >= 1 && radioProb <= 35){
              int newSupplies = getsuppliesAmount() + 7;
              setsuppliesAmount(newSupplies);
              // Increase health items by 1.
              cout << "You have succesfully contacted some people who said they'll give you some of their supplies. They're sending over 7 Food and 1 First Aid Kit." << endl;
              dayCycle = true;
              break;
            }
            else{
              cout << "You try for a whole day to get someone on the radio but to no success. You feel like you wasted the day away." << endl;
              dayCycle = true;
              break;
            }
          }
          case 5:
          {
            cout << "You currently have a " << getWeaponName() << " equipped." << endl;
            break;
          }
          case 6: //Quit.
          {
            cout << "Goodbye!" << endl;
            quit = true;
            break;
          }
        }
      }
    }
    
    while(dayCount == 5){ 
      int input;
      int input2;
      Shelter shel;
      cout << "March 8th, 20??" << endl << "Day 2" << endl;
      cout << "You wake up and feel refreshed from last night's sleep." << endl;
      cout << "You have this many supplies: " << shel.getsuppliesAmount << endl << "Remember you need 7 supplies a day to survive the full 7 days." << endl;
      // Subtract 7 supplies from Supplies Amount. 
      cout << "With that in mind what would you like to do today?" << endl;
       
      while(dayCycle = false){
        cout << "===== CHOICES =====" << endl;
        cout << "1. Go out looting for supplies." << endl; // Day cycle ends after this. 
        cout << "2. Bunker down at home (keep in mind depending on the shelter you picked you'll have a chance of a random encounter with an Alien)." << endl; // Day cycle ends after this.
        cout << "3. Check Player health (you can heal yourself and still choose other options)." << endl;
        cout << "4. Radio in for help! Smaller random chance of finding Healing Items and Food Supplies but no Weapons." << endl; // Day cycle ends after this.
        cout << "5. Check Player weapons." << endl;
        cout << "6. Quit." << endl; // Game ends.
        cin >> input;
        switch(input){
          case 1:
          {
            cout << "You head out to the outer Suburbs to look for loot." << endl;
            cout << "You come across an abandoned house. You look around and find: "
            // Random chance of finding medical items.
            int num = 0;
            // need to write before calling rand() to seed the random number generator
            srand(time(0));
            num = randomNumbers(0,10);
            if(num == 0){
              cout << "You have found no Medical Supplies, Weapons, or Food." << endl;
            }
            else if(num == 1){
              cout << "You have found 1 Medical Supplies, an Assault Rifle, and 14 Food." << endl;
              // Add 1 Medical Supplies to Inventory.
              // Choose to add Assault Rifle to Inventory.
              int newSupplies = shel.getsuppliesAmount() + 14;
              setsuppliesAmount(newSupplies);
            }
            else if(num >= 2 && num <= 5){
              cout << "You have found no Medical Supplies, a Pistol, and 7 Food." << endl;
              // Choose to add Pistol to Inventory.
              int newSupplies = shel.getsuppliesAmount() + 7;
              setsuppliesAmount(newSupplies);
            }
            else if(num > 5 && num <= 10){
              cout << "You have found no Medical Supplies, a Knife, and 0 Food." << endl;
              // Choose to add Knife to Inventory. 
            }
            cout << "You start to make your way back to your shelter." << endl;
            // Random chance of Alien encounter.
            int num2 = 0;
            srand(time(0));
            num2 = randomNumbers(1,100);
            if(num2 >= 1 && num2 <= 40){
              cout << "You have randomly encountered an Alien!" << endl;
              cout << "Our hero faces a choice: " << endl;
              cout << "===== CHOICES =====" << endl;
              cout << "1. Fight!" << endl;
              cout << "2. Flee!" << endl;
              cin >> input2;
              int num3 = 0;
              num3 = randomNumbers(1,100);
              switch(input2){
                case 1:
                {
                  cout << "You have chosen to fight the Alien!" << endl << "The Alien is currently equipped with a Knife." << endl;
                  while(getPlayerHealth() > 0 && getEnemyHealth() > 0){
                    cout << "----- DISPLAY -----" << endl;
                    cout << "Player health: " << getPlayerHealth() << endl << "Alien health: " << getEnemyHealth() << endl;
                    int playerRoll = 0;
                    int enemyRoll = 0;
                    playerRoll = randomNumbers(1, 100);
                    enemyRoll = randomNumbers(1, 100);
                    playerFight(playerRoll, enemyRoll);
                  }
                  if(getPlayerHealth() <= 0){
                    cout << "===== GAME OVER =====" << endl;
                    quit = true;
                    // journaling mechanic
                    dayCycle = true;
                    break;
                  }
                  else if(getPlayerHealth() > 0 && getEnemyHealth() <= 0){
                    cout << "Alien killed." << endl << "You escape before Alien reinforcements show up and head towards your shelter." << endl;
                    dayCycle = true;
                    break;
                  }
                }
                case 2:
                {
                  if(num3 >= 1 && num3 <= 50){
                    cout << "You have successfully fleed from the Alien and headed safely to your shelter." << endl;
                    dayCount++;
                    dayCycle = true;
                    break;
                  }
                  else{
                    cout << "You have been wounded as you flee from the Alien." << endl;
                    // Take X amount of damage to Player health.
                    dayCount++;
                    dayCycle = true;
                    break;
                  }
                }
              }
            }
          }
          case 2:
          {
            int shelterID = getshelterID();
            string shelterName = "";
            int bunkerProb = randomNumbers(1, 100);
            if(shelterID == 1){
              shelterName = "Friend's Apartment";
              cout << "You have decided to stay back and bunker down at " << shelterName << "." << endl;
              if(bunkerProb >= 1 && bunkerProb <= getdefensePoints()){
                cout << "Your shelter is currently under attack by Aliens!" << endl << "You have to fight for your right to live!" << endl;
                while(getPlayerHealth() > 0 && getEnemyHealth() > 0){
                    cout << "----- DISPLAY -----" << endl;
                    cout << "Player health: " << getPlayerHealth() << endl << "Alien health: " << getEnemyHealth() << endl;
                    int playerRoll = 0;
                    int enemyRoll = 0;
                    playerRoll = randomNumbers(1, 100);
                    enemyRoll = randomNumbers(1, 100);
                    playerFight(playerRoll, enemyRoll);
                }
                if(getPlayerHealth() <= 0){
                  cout << "===== GAME OVER =====" << endl;
                    quit = true;
                    // journaling mechanic
                    dayCycle = true;
                    break;
                }
                else if(getPlayerHealth() > 0 && getEnemyHealth() <= 0){
                    cout << "Alien killed." << endl << "You escape before Alien reinforcements show up and head towards your shelter." << endl;
                    dayCycle = true;
                    break;
                }
              }
              else{
                cout << "You have a relaxing day at what you call Home now and are now heading to sleep." << endl;
                // Set up journaling mechanic here. 
              }
            }
            else if(shelterID == 2){
              shelterName = "Campsite";
              cout << "You have decided to stay back and bunker down at " << shelterName << "." << endl;
              if(bunkerProb >= 1 && bunkerProb <= getdefensePoints()){
                cout << "Your shelter is currently under attack by Aliens!" << endl << "You have to fight for your right to live!" << endl;
                while(getPlayerHealth() > 0 && getEnemyHealth() > 0){
                    cout << "----- DISPLAY -----" << endl;
                    cout << "Player health: " << getPlayerHealth() << endl << "Alien health: " << getEnemyHealth() << endl;
                    int playerRoll = 0;
                    int enemyRoll = 0;
                    playerRoll = randomNumbers(1, 100);
                    enemyRoll = randomNumbers(1, 100);
                    playerFight(playerRoll, enemyRoll);
                }
                if(getPlayerHealth() <= 0){
                  cout << "===== GAME OVER =====" << endl;
                    quit = true;
                    // journaling mechanic
                    dayCycle = true;
                    break;
                }
                else if(getPlayerHealth() > 0 && getEnemyHealth() <= 0){
                    cout << "Alien killed." << endl << "You escape before Alien reinforcements show up and head towards your shelter." << endl;
                    dayCycle = true;
                    break;
                }
              }
              else{
                cout << "You have a relaxing day at what you call Home now and are now heading to sleep." << endl;
                // Set up journaling mechanic here. 
              }
            }
            else if(shelterID == 3){
              shelterName = "Bunker";
              cout << "You have decided to stay back and bunker down at " << shelterName << "." << endl;
              if(bunkerProb >= 1 && bunkerProb <= getdefensePoints()){
                cout << "Your shelter is currently under attack by Aliens!" << endl << "You have to fight for your right to live!" << endl;
                while(getPlayerHealth() > 0 && getEnemyHealth() > 0){
                    cout << "----- DISPLAY -----" << endl;
                    cout << "Player health: " << getPlayerHealth() << endl << "Alien health: " << getEnemyHealth() << endl;
                    int playerRoll = 0;
                    int enemyRoll = 0;
                    playerRoll = randomNumbers(1, 100);
                    enemyRoll = randomNumbers(1, 100);
                    playerFight(playerRoll, enemyRoll);
                }
                if(getPlayerHealth() <= 0){
                  cout << "===== GAME OVER =====" << endl;
                    quit = true;
                    // journaling mechanic
                    dayCycle = true;
                    break;
                }
                else if(getPlayerHealth() > 0 && getEnemyHealth() <= 0){
                    cout << "Alien killed." << endl << "You escape before Alien reinforcements show up and head towards your shelter." << endl;
                    dayCycle = true;
                    break;
                }
              }
              else{
                cout << "You have a relaxing day at what you call Home now and are now heading to sleep." << endl;
                // Set up journaling mechanic here. 
                dayCycle = true;
                break;
              }
            }
            
            
            
          }
          case 3: // Player health
          {
            cout << "You check on your health." << endl << "Player health: " << getPlayerHealth() << endl;
            cout << "===== CHOICES =====" << endl;
            cout << "1. Heal yourself." << endl;
            cout << "2. Go back and choose something else to do." << endl;
            cin >> input2;
            if(input2 == 1){
              // Healing mechanic.
              cout << "You heal yourself." << endl << "Player health: " << getPlayerHealth() << endl;
              break;
            }
            if(input2 == 2){
              cout << "What would you like to do today?" << endl;
              break;
            }
          }
          case 4: // Radio in for help.
          {
            cout << "There is an old radio lying around somewhere in your shelter. You can try and Radio for some help but you know there's a big chance no one will answer." << endl;
            cout << "35% chance of receiving 1 Medical Supply and 7 Food." << endl;
            int radioProb = randomNumbers(1, 100);
            if(radioProb >= 1 && radioProb <= 35){
              int newSupplies = getsuppliesAmount() + 7;
              setsuppliesAmount(newSupplies);
              // Increase health items by 1.
              cout << "You have succesfully contacted some people who said they'll give you some of their supplies. They're sending over 7 Food and 1 First Aid Kit." << endl;
              dayCycle = true;
              break;
            }
            else{
              cout << "You try for a whole day to get someone on the radio but to no success. You feel like you wasted the day away." << endl;
              dayCycle = true;
              break;
            }
          }
          case 5:
          {
            cout << "You currently have a " << getWeaponName() << " equipped." << endl;
            break;
          }
          case 6: //Quit.
          {
            cout << "Goodbye!" << endl;
            quit = true;
            break;
          }
        }
      }
    }
    
    while(dayCount == 6){ 
      int input;
      int input2;
      Shelter shel;
      cout << "March 8th, 20??" << endl << "Day 2" << endl;
      cout << "You wake up and feel refreshed from last night's sleep." << endl;
      cout << "You have this many supplies: " << shel.getsuppliesAmount << endl << "Remember you need 7 supplies a day to survive the full 7 days." << endl;
      // Subtract 7 supplies from Supplies Amount. 
      cout << "With that in mind what would you like to do today?" << endl;
       
      while(dayCycle = false){
        cout << "===== CHOICES =====" << endl;
        cout << "1. Go out looting for supplies." << endl; // Day cycle ends after this. 
        cout << "2. Bunker down at home (keep in mind depending on the shelter you picked you'll have a chance of a random encounter with an Alien)." << endl; // Day cycle ends after this.
        cout << "3. Check Player health (you can heal yourself and still choose other options)." << endl;
        cout << "4. Radio in for help! Smaller random chance of finding Healing Items and Food Supplies but no Weapons." << endl; // Day cycle ends after this.
        cout << "5. Check Player weapons." << endl;
        cout << "6. Quit." << endl; // Game ends.
        cin >> input;
        switch(input){
          case 1:
          {
            cout << "You head out to the outer Suburbs to look for loot." << endl;
            cout << "You come across an abandoned house. You look around and find: "
            // Random chance of finding medical items.
            int num = 0;
            // need to write before calling rand() to seed the random number generator
            srand(time(0));
            num = randomNumbers(0,10);
            if(num == 0){
              cout << "You have found no Medical Supplies, Weapons, or Food." << endl;
            }
            else if(num == 1){
              cout << "You have found 1 Medical Supplies, an Assault Rifle, and 14 Food." << endl;
              // Add 1 Medical Supplies to Inventory.
              // Choose to add Assault Rifle to Inventory.
              int newSupplies = shel.getsuppliesAmount() + 14;
              setsuppliesAmount(newSupplies);
            }
            else if(num >= 2 && num <= 5){
              cout << "You have found no Medical Supplies, a Pistol, and 7 Food." << endl;
              // Choose to add Pistol to Inventory.
              int newSupplies = shel.getsuppliesAmount() + 7;
              setsuppliesAmount(newSupplies);
            }
            else if(num > 5 && num <= 10){
              cout << "You have found no Medical Supplies, a Knife, and 0 Food." << endl;
              // Choose to add Knife to Inventory. 
            }
            cout << "You start to make your way back to your shelter." << endl;
            // Random chance of Alien encounter.
            int num2 = 0;
            srand(time(0));
            num2 = randomNumbers(1,100);
            if(num2 >= 1 && num2 <= 40){
              cout << "You have randomly encountered an Alien!" << endl;
              cout << "Our hero faces a choice: " << endl;
              cout << "===== CHOICES =====" << endl;
              cout << "1. Fight!" << endl;
              cout << "2. Flee!" << endl;
              cin >> input2;
              int num3 = 0;
              num3 = randomNumbers(1,100);
              switch(input2){
                case 1:
                {
                  cout << "You have chosen to fight the Alien!" << endl << "The Alien is currently equipped with a Knife." << endl;
                  while(getPlayerHealth() > 0 && getEnemyHealth() > 0){
                    cout << "----- DISPLAY -----" << endl;
                    cout << "Player health: " << getPlayerHealth() << endl << "Alien health: " << getEnemyHealth() << endl;
                    int playerRoll = 0;
                    int enemyRoll = 0;
                    playerRoll = randomNumbers(1, 100);
                    enemyRoll = randomNumbers(1, 100);
                    playerFight(playerRoll, enemyRoll);
                  }
                  if(getPlayerHealth() <= 0){
                    cout << "===== GAME OVER =====" << endl;
                    quit = true;
                    // journaling mechanic
                    dayCycle = true;
                    break;
                  }
                  else if(getPlayerHealth() > 0 && getEnemyHealth() <= 0){
                    cout << "Alien killed." << endl << "You escape before Alien reinforcements show up and head towards your shelter." << endl;
                    dayCycle = true;
                    break;
                  }
                }
                case 2:
                {
                  if(num3 >= 1 && num3 <= 50){
                    cout << "You have successfully fleed from the Alien and headed safely to your shelter." << endl;
                    dayCount++;
                    dayCycle = true;
                    break;
                  }
                  else{
                    cout << "You have been wounded as you flee from the Alien." << endl;
                    // Take X amount of damage to Player health.
                    dayCount++;
                    dayCycle = true;
                    break;
                  }
                }
              }
            }
          }
          case 2:
          {
            int shelterID = getshelterID();
            string shelterName = "";
            int bunkerProb = randomNumbers(1, 100);
            if(shelterID == 1){
              shelterName = "Friend's Apartment";
              cout << "You have decided to stay back and bunker down at " << shelterName << "." << endl;
              if(bunkerProb >= 1 && bunkerProb <= getdefensePoints()){
                cout << "Your shelter is currently under attack by Aliens!" << endl << "You have to fight for your right to live!" << endl;
                while(getPlayerHealth() > 0 && getEnemyHealth() > 0){
                    cout << "----- DISPLAY -----" << endl;
                    cout << "Player health: " << getPlayerHealth() << endl << "Alien health: " << getEnemyHealth() << endl;
                    int playerRoll = 0;
                    int enemyRoll = 0;
                    playerRoll = randomNumbers(1, 100);
                    enemyRoll = randomNumbers(1, 100);
                    playerFight(playerRoll, enemyRoll);
                }
                if(getPlayerHealth() <= 0){
                  cout << "===== GAME OVER =====" << endl;
                    quit = true;
                    // journaling mechanic
                    dayCycle = true;
                    break;
                }
                else if(getPlayerHealth() > 0 && getEnemyHealth() <= 0){
                    cout << "Alien killed." << endl << "You escape before Alien reinforcements show up and head towards your shelter." << endl;
                    dayCycle = true;
                    break;
                }
              }
              else{
                cout << "You have a relaxing day at what you call Home now and are now heading to sleep." << endl;
                // Set up journaling mechanic here. 
              }
            }
            else if(shelterID == 2){
              shelterName = "Campsite";
              cout << "You have decided to stay back and bunker down at " << shelterName << "." << endl;
              if(bunkerProb >= 1 && bunkerProb <= getdefensePoints()){
                cout << "Your shelter is currently under attack by Aliens!" << endl << "You have to fight for your right to live!" << endl;
                while(getPlayerHealth() > 0 && getEnemyHealth() > 0){
                    cout << "----- DISPLAY -----" << endl;
                    cout << "Player health: " << getPlayerHealth() << endl << "Alien health: " << getEnemyHealth() << endl;
                    int playerRoll = 0;
                    int enemyRoll = 0;
                    playerRoll = randomNumbers(1, 100);
                    enemyRoll = randomNumbers(1, 100);
                    playerFight(playerRoll, enemyRoll);
                }
                if(getPlayerHealth() <= 0){
                  cout << "===== GAME OVER =====" << endl;
                    quit = true;
                    // journaling mechanic
                    dayCycle = true;
                    break;
                }
                else if(getPlayerHealth() > 0 && getEnemyHealth() <= 0){
                    cout << "Alien killed." << endl << "You escape before Alien reinforcements show up and head towards your shelter." << endl;
                    dayCycle = true;
                    break;
                }
              }
              else{
                cout << "You have a relaxing day at what you call Home now and are now heading to sleep." << endl;
                // Set up journaling mechanic here. 
              }
            }
            else if(shelterID == 3){
              shelterName = "Bunker";
              cout << "You have decided to stay back and bunker down at " << shelterName << "." << endl;
              if(bunkerProb >= 1 && bunkerProb <= getdefensePoints()){
                cout << "Your shelter is currently under attack by Aliens!" << endl << "You have to fight for your right to live!" << endl;
                while(getPlayerHealth() > 0 && getEnemyHealth() > 0){
                    cout << "----- DISPLAY -----" << endl;
                    cout << "Player health: " << getPlayerHealth() << endl << "Alien health: " << getEnemyHealth() << endl;
                    int playerRoll = 0;
                    int enemyRoll = 0;
                    playerRoll = randomNumbers(1, 100);
                    enemyRoll = randomNumbers(1, 100);
                    playerFight(playerRoll, enemyRoll);
                }
                if(getPlayerHealth() <= 0){
                  cout << "===== GAME OVER =====" << endl;
                    quit = true;
                    // journaling mechanic
                    dayCycle = true;
                    break;
                }
                else if(getPlayerHealth() > 0 && getEnemyHealth() <= 0){
                    cout << "Alien killed." << endl << "You escape before Alien reinforcements show up and head towards your shelter." << endl;
                    dayCycle = true;
                    break;
                }
              }
              else{
                cout << "You have a relaxing day at what you call Home now and are now heading to sleep." << endl;
                // Set up journaling mechanic here. 
                dayCycle = true;
                break;
              }
            }
            
            
            
          }
          case 3: // Player health
          {
            cout << "You check on your health." << endl << "Player health: " << getPlayerHealth() << endl;
            cout << "===== CHOICES =====" << endl;
            cout << "1. Heal yourself." << endl;
            cout << "2. Go back and choose something else to do." << endl;
            cin >> input2;
            if(input2 == 1){
              // Healing mechanic.
              cout << "You heal yourself." << endl << "Player health: " << getPlayerHealth() << endl;
              break;
            }
            if(input2 == 2){
              cout << "What would you like to do today?" << endl;
              break;
            }
          }
          case 4: // Radio in for help.
          {
            cout << "There is an old radio lying around somewhere in your shelter. You can try and Radio for some help but you know there's a big chance no one will answer." << endl;
            cout << "35% chance of receiving 1 Medical Supply and 7 Food." << endl;
            int radioProb = randomNumbers(1, 100);
            if(radioProb >= 1 && radioProb <= 35){
              int newSupplies = getsuppliesAmount() + 7;
              setsuppliesAmount(newSupplies);
              // Increase health items by 1.
              cout << "You have succesfully contacted some people who said they'll give you some of their supplies. They're sending over 7 Food and 1 First Aid Kit." << endl;
              dayCycle = true;
              break;
            }
            else{
              cout << "You try for a whole day to get someone on the radio but to no success. You feel like you wasted the day away." << endl;
              dayCycle = true;
              break;
            }
          }
          case 5:
          {
            cout << "You currently have a " << getWeaponName() << " equipped." << endl;
            break;
          }
          case 6: //Quit.
          {
            cout << "Goodbye!" << endl;
            quit = true;
            break;
          }
        }
      }
    }
    
    string toUpper (string userInput)
    {
       string singleChar = "";
       for (int i = 0; i < userInput.length(); i++)
       {
           if (userInput[i] >= 'a' && userInput[i] <= 'z')
           {
               singleChar += userInput[i] - 32;
           }
           else 
           {
               singleChar += userInput[i];
           }
       }
       return singleChar;
    }
    
    while(dayCount == 7){
      int userInput;
    	cout << "It's 0530 on Day 7! Outside of your " >> shelter.getShelterID() << " you hear a scuffle between the Covenant and a military convoy. The Covenant kills and scatters the military personnel." << endl;
    	cout << "It's then our hero recognizes the nuclear power symbol on the side of one of the trailors. You realize you must go and investigate, who knows what you'll find..." << endl;
    	cout << "===== CHOICES =====" << endl;
    	cout << "1. Go and investigate." << endl;
    	cout << "2. Forget about it. It's probably nothing anyways."<< endl;
    	cin >> userInput;
    	if (userInput == 1)
    	{
    	    cout << "Upon further investigation you discover a nuclear bomb with some orders and instructions for delivering it to the alien mothership!" << endl;
    	    cout << "There's no way our hero can pass up this opportunity! The instructions say that in order to arm the bomb, a riddle needs to be solved." << endl;
    	    cout << "Additionally, it looks as though the previous crew was trying to solve an equation needed for the homing system to out manuver alien missle defense." << endl;
    	    cout << "You realize that solving the equation for the homing system should propably be done first"<< endl;
    	    int homingInput;
    	    cout << "If f(x) = x^2, then what is f'(2) equal to? Please enter a number." << endl;
    	    cin >> homingInput;
    	    if (homingInput == 4)
    	    {
    	        cout << "You got it! Now solve the riddle to arm the bomb." << endl;
    	        string armingInput = "";
    	        cout << "If you look at the numbers on my face, you wont find 13 anyplace. What am I? Please only use one word answers! " << endl;
    	        cin >> armingInput;
    	        int userAttempts = 0;
    	        string checkMe = toUpper(armingInput);
    	        if (checkMe == CLOCK && userAttempts < 3)
    	        {
    	            cout << "Congratulations, you just brought down the alien mothership and saved mankind from intergalactic slavary! Hazzah!" << endl;
    	            cout << "======GAME OVER!!!!======" << endl;
    	            return 0;
    	            quit = true;
    	        }
    	        else if (checkMe != CLOCK && userAttempts < 3)
    	        {
    	            cout << "Hurry try again! " << userAttempts << " attempts left before bomb activates self-destruct!" << endl;
    	            userAttempts++;
    	        }
    	        else
    	        {
    	            cout << "Sucks to suck, you lose! You came so far and so close! Everyone you know is now either meat for the Covenant army or sold into intergalactic slavary." << endl;
    	            cout << "======GAME OVER!!!!======" << endl;
    	            quit = true;
    	            return 0;
    	        }
    	  
    	    }
    	    else 
    	    {
    	        cout << "Wrong answer, please try again." endl;
    	    }
    	}
    	else if (userInput ==2)
    	{
    	    cout << "How could a nuclear symbol mean nothing? Congratulations, you die as a result of your inaction." << endl;
    	    quit = true;
    	    return 0;
    	}
    	else
    	{
    	    cout << "Hurry up and make a valid choice!" << endl;
    	}
    }
  }
}
