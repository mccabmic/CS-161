/*************************
Author:Michael McCabe
Date: October 25, 2017
Description: This is the class IMPLEMENTATION file for the Taxicab object
IDE: Microsoft Visual Studio
**************************/

#include "Taxicab.hpp"
#include <cmath>

// Default constructor: Defines a taxi cab with at 0, 0 with no distance traveled
Taxicab::Taxicab(void) {
	xCoord = 0;
	yCoord = 0;
	totalDistanceTraveled = 0;
}

// Constructor: Defines a taxi cab at xpos, ypos with no distance traveled
Taxicab::Taxicab(int xpos, int ypos) {
	xCoord = xpos;
	yCoord = ypos;
	totalDistanceTraveled = 0;
}

// Accessor: Gets the xCoord and returns it
int Taxicab::getXCoord(void) const{
	return (xCoord);

}

// Accessor: Get the yCoord and returns it
int Taxicab::getYCoord(void) const {
	return (yCoord);

}
// Accessor: Gets the total distance traveled
int Taxicab::getDistanceTraveled() const {
	return (totalDistanceTraveled);

}

// Mutator: Travels the taxicab in the specified X direction 
void Taxicab::moveX(int xpos){
	xCoord = xCoord + xpos;

	// distance is measured relative to the origin
	totalDistanceTraveled = totalDistanceTraveled + abs(xpos);
}

// Mutator: Travels the taxicab in the specified Y Direction
void Taxicab::moveY(int ypos){
	yCoord = yCoord + ypos;

	// distance is measured relative to the origin
	totalDistanceTraveled = totalDistanceTraveled + abs(ypos);
}
