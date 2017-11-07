/*********************************************************************
** Author: Michael McCabe
** Date: October 17, 2017
** Description:  This program creates a hailstone sequence through a function
** and returns the value for the number of steps it takes to evaluate
*********************************************************************/


/*********************************************************************
** Description: This program mimics that of a hailstone sequence.
** A hailstone sequence starts with some positive integer. 
** If that integer is even, then  divide it by two to get the next 
** integer in the sequence. If it is odd, then  multiply it by 
** three and add one to get the next integer in the sequence. 
** When the integer reaches the value one, the function returns how many
** cycles it has gone through.
*********************************************************************/
#include <iostream>

int hailstone(int integer){
    //Initialize count
    int count = 0;
    
    //Input validation
    if(integer == 0){
      integer++;
      std::cout << "Please don't try and break my program" << std::endl;
      }
    
    //Pre-test loop where loop constantly runs until integer = 1
    while (integer != 1){
        
        //If the number is even, mod division by two will return 0
        if ((integer % 2) == 0){
            integer = integer / 2;
            
            //increment the counter
            count++;
            }
        //If the number is odd, mod division by two will return 1
        else if (integer % 2 == 1){
            integer = (integer * 3) + 1;
            
            //increment the counter
            count++;
            }
        }
    return count;
}

/**
#include <iostream>
using namespace std;
int main(){
	
	int hello;

	cout << "Please enter in an integer: ";
	cin >> hello;
	cout << hailstone(hello);
	
	
	
	return 0;

}
*/
