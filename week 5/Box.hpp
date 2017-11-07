/*************************
Author:Michael McCabe
Date: October 25, 2017
Description: This is the class DECLARATION file for the Box object
IDE: Microsoft Visual Studio
**************************/

#ifndef BOX_HPP
#define BOX_HPP

//Box class description
class Box {

private:
	double len; //length
	double hgt; //height
	double wdt; //width

public:
	Box(); //Default constructor
	Box(double length, double width, double height); //Constructs a three dimensional box
	
	//Setter prototypes
	void setLength(double length); 
	void setHeight(double height); 
	void setWidth(double width);

	//Getter prototypes
	double calcVolume(void) const;  // Calculates and returns the volume
	double calcSurfaceArea(void) const; // Calculates and returns the surface area

};
#endif // !BOX_HPP
