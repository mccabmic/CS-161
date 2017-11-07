/************************************
** Author: Michael McCabe
** Date: October 3, 2017
** Description: This program takes the temperature in C and converts it into F
**
************************************/

#include <iostream>

using namespace std;

int main()
{
   double tempInC,
          tempInF;
   
   cout << "Please enter a Celsius temperature." << endl;
   cin >> tempInC;

   tempInF = (9.0 /5.0) * tempInC + 32;

   cout << "The equivalent Fahrenheit temperature is:" << endl;
   cout << tempInF;

   return 0;

}




