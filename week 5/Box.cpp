/*************************
Author:Michael McCabe
Date: October 25, 2017
Description: This is the class IMPLEMENTATION file for the Box object
IDE: Microsoft Visual Studio
**************************/

#include "Box.hpp"
#include <cmath>
using std::abs;

// Default constructor will define all private dimensions for height, width, and length to 1.
Box::Box(){
	setHeight(1);
	setWidth(1);
	setLength(1);
}

// Constructor defines a box with dimensions length, width, and height
Box::Box(double length, double width, double height) {

	setLength(length);
	setHeight(height);
	setWidth(width);
}

// Defines length attribute
void Box::setLength(double length) {
	len = abs(length);
}

// Defines height attribute
void Box::setHeight(double height) {
	hgt = abs(height);
}

// Defines width attribute
void Box::setWidth(double width) {
	wdt = abs(width);
}

// Returns the surface area of a box
double Box::calcSurfaceArea(void) const {

	//Formula is a proven  formula available from any math textbook
	return (2.0 * (hgt * wdt) + 2.0 * (hgt * len) + 2.0 * (wdt * len));
}

// Returns the volume of a box, 
double Box::calcVolume(void) const {
	//Formula is a proven  formula available from any math textbook
	return (len * hgt * wdt);
}
