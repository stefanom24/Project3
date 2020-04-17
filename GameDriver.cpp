// include all necessary header files.
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main(){
  bool quit = false;
  while(1){
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
          }
          else if(input2 == 2){
            shel.Shelter(input2);
          }
          else if(input2 == 3){
            //Implement probability function here to figure out next steps.
            //If not found: game over menu with restart or quit option.
            //If found: shel.Shelter(input2)
          }
          else{
            cout << "Wrong input. Please try again." << endl;
            //Route back to case 1.
          }
          break;
        }
      case 2:
        {
          cout << "You head to a general store. Outside you see thousands of people running around in a form of organized chaos. to be continued..." << endl;
        }
    }
  }
}
