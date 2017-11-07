/*********************************************************************
** Author: Michael McCabe
** Date: September 23, 2017
** Description: This program calculates how much a garden center will spend 
** on a display, given the cost of the soil, flower seeds, and fence.
*********************************************************************/
#include <iostream>
#include <cmath>


using namespace std;

int main()
{
   //Declare Variables
   double soil, seed, fence;
   double total;
   
   total = 0;
   
   cout << "What does the soil cost?" << endl;
   cin >> soil;
   
   cout << "What do the flower seeds cost?" << endl;
   cin >> seed;
   
   cout << "What does the fence cost?" << endl;
   cin >> fence;
   
   // Total cost should  be greater than zero
   total = abs(soil) + abs(seed) + abs(fence);
   cout << "The total cost is " << total << endl;
   
   

   return 0;
}
