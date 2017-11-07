/*******************************************************************
** Author: Michael McCabe
** Date: October 10, 2017
** Description: This program asks a user for an integer greater than 1
** and then continues to ask them that many times for another integer.
** It then displays the min and max values for the set of integers
*********************************************************************/

#include <iostream>

using namespace std;

int main()
{
    //Declarations
    int min, max, userInteger,numTimes;

    //Prompt the user to enter a value for numTimes
    cout << "How many integers would you like to enter?" << endl;
    cin >> numTimes;

    //Prompt the user for the integers
    cout << "Please enter " << numTimes << " integers." << endl;

    //Receiver user input for as many times as numTimes
    for(int i = 0; i <numTimes; i++)
    {
        cin >> userInteger;

	// At the start, set the min and max equal to the first value entered
        if (i == 0)
	{
	    min = userInteger;
	    max = userInteger;
	}
        
	//Compare the userInteger number and reassign min and max
	else
	{
	    if (userInteger >  max)
	        max = userInteger;

            else 
	        min = userInteger;
	}

    }
    
    //Display the min and max values
    cout << "min: " << min << endl;
    cout << "max: " << max << endl;

    return 0;

}
