/*************************
Author:Michael McCabe
Date: October 25, 2017
Description: This is the class DECLARATION file for the Taxicab object
IDE: Microsoft Visual Studio
**************************/

#ifndef TAXI_HPP
#define TAXI_HPP


// Class definition for Taxicab
class Taxicab {
	private:
		// Attributes
		int xCoord;
		int yCoord;
		int totalDistanceTraveled;

	public:
		// Constructors
		Taxicab();  // Default
		Taxicab(int xpos, int ypos); // Preferred Constructor

		// Accessors
		int getXCoord(void) const;
		int getYCoord(void) const;
		int getDistanceTraveled() const;

		// Mutators
		void moveX(int xpos);
		void moveY(int ypos);

};

#endif // !TAXI_HPP
