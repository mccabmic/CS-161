/*********************************************************************
** Author: Michael McCabe
** Date: September 30th, 2017
** Description: This program takes five inputs and calculates
** and displays the average.
*********************************************************************/

#include <iostream>

using namespace std;

int main()
{

   double num1, num2, num3, num4, num5, average;

   cout << "Please enter five numbers." << endl;
   cin >> num1;
   cin >> num2;
   cin >> num3;
   cin >> num4;
   cin >> num5;

   average = (num1 + num2 + num3 + num4 + num5)/5;

   cout << "The average of those numbers is:" << endl;
   cout << average << endl;


   return 0;

}



