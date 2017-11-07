/*************************
Author:Michael McCabe
Date: November 7, 2017
Description: This function 
IDE: Notepad++
**************************/

#include "Person.hpp"
#include <math.h>

double stdDev(Person testSubject[], int SubjectPop){
	
	// Calculate the mean of the ages
	double mean = 0.0;
	double summation = 0.0;
	
	for (int tagNumber = 0; tagNumber < SubjectPop; tagNumber++){
		summation += testSubject[tagNumber].getAge();
	}
	mean = summation / SubjectPop;
	
	// Calculate the variance and sum it
	double variance = 0.0;
	for (int tagNumber = 0; tagNumber < SubjectPop; tagNumber++){
		variance += pow((testSubject[tagNumber].getAge() - mean), 2);		
	}

	// Take the square root of the variance
	return sqrt(variance / SubjectPop);
	
}	
