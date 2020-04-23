#include <iostream>
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
int main()
{
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
	    return 0;
	}
	else
	{
	    cout << "Hurry up and make a valid choice!" << endl;
	}
}
