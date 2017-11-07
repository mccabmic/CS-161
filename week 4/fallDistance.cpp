/*********************************************************************
** Author: Michael McCabe
** Date: October 17, 2017
** Description:  This program utilizes a function call with a parameter
** in order to calculate distance an object has fallen, on Earth, given
** the value for time (in seconds)
*********************************************************************/


/*********************************************************************
** Description: The purpose of the below function performs the math
** given the formula for distance traveled by a falling object and
** returns it back to main as a double
*********************************************************************/
double fallDistance (double time){
    double distance;
    double gravity = 9.8;
    double timeSquared = time * time;
    
    // The distance formula, as given is one-half 
    // the force of gravity multiplied by time squared
    distance = .5 * gravity * timeSquared;
    
    return (distance); 
}

/** #include <iostream>
using namespace std;
  
int main() {
    double testValue = 0;
    
    while (static_cast<int>(testValue) != -1){
        cout << "Please enter a test number(-1 to quit): ";   
        cin >> testValue;
        if(testValue > 0){
            cout << "Value returned is: " << fallDistance(testValue) << endl;
        }
        else{
            cout << "Ending program." << endl;
        }
    }
    
    return 0;
 }
**/
