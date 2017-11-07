/*********************************************************************
** Author: Michael McCabe
** Date: October 2, 2017
** Description: asks the user for a (integer) number of cents, from 0 to 99,
** and outputs how many of each type of coin would represent that 
** amount with the fewest total number of coins.  
*********************************************************************/

#include <iostream>

using namespace std;

int main(){
  
  int change,
      quarters,
      nickles,
      dimes,
      pennies;

  cout << "Please enter an amount in cents less than a dollar." << endl;
  cin >> change;

  quarters = change / 25;
  change = change % 25;

  dimes = change / 10;
  change = change % 10;

  nickles = change / 5;
  change = change % 5;

  pennies = change;
  
  cout << "Your change will be: " <<endl;

  cout <<"Q: " << quarters << endl;
  cout <<"D: " << dimes  << endl;
  cout <<"N: " << nickles  << endl;
  cout <<"P: " << pennies  << endl;
  



   return 0;
}


