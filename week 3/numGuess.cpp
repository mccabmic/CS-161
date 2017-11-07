/********************************************************************
** Author: Michael McCabe
** Date: October 9, 2017 
** Description: This program will ask a user for an input that the player
** will try and guess.  The program should run until the player
** successfully guesses the number.  The program should supply the
** player with some guidance in the form of "higher" or "lower"
*********************************************************************/

#include <iostream>

using namespace std;

int main()
{
    //Declarations - long ints used to prevent infinite loops for unreasonably high integers
    long int guess;
    long int solution;
    int count;

    // Start the count at zero as technically the user can guess it at the first try
    count = 1;

    // Allow the gamemaster to set the solution
    cout << "Enter the number for the player to guess."  << endl; 
    cin >> solution;

    //Ask the player for their guess

    cout << "Enter your guess." << endl;
    cin >> guess;

    // While the guess does not equal the solution

    while (guess != solution)
    
    {

        if (guess > solution)
        {
	    cout << "Too high - try again." << endl;

        }  

        else 
        { 
	    cout << "Too low - try again." << endl;
        }
      
       //Increment counter with a new guess
        count++;
	
        cin >> guess;

    }

    // Print out the player's success 
    cout << "You guessed it in " << count << " tries." << endl;
    
    return 0;
	
}	



