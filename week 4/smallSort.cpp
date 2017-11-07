/*********************************************************************
** Author: Michael McCabe
** Date: October 17, 2017
** Description: This program is a sorting function, derived 
** from test cases of ascending, descending, and 
** randomly placed integers wherem given 3 random integers, returns
** their values in sequential order, from least to greatest. 
*********************************************************************/

/*********************************************************************
** Description: The below function takes three integers in any order
** and returns them to main in sequential order from least to greatest
*********************************************************************/
void smallSort(int &a, int &b, int &c) {
    int temp;
    
    // Step one - compare a with b
    if (a > b) {
        // Swap them in the case that a is bigger, otherwise do nothing
        temp = b;
        b = a;
        a = temp;
    }
    
    //Step two - compare b with c
    if (b > c){
        // Compare the confirmed bigger b with c
        temp = c;
        c = b;
        b = temp;
    }
    
    // Double check
    if (a > b){
        // We may potentially have a bigger b, so confirm a again
        temp = b;
        b = a;
        a = temp;
    }
    return;
}

/*********************************************************
#include <iostream>
using namespace std;
  
int main() {
    
    int i, am, great;
    
    i = 556;
    am = 231;
    great = 13011;
    
    smallSort(i, am, great);
    
    cout << i << " " << am << " " << great << endl;
    
    return 0;
 }
************************************************************/
