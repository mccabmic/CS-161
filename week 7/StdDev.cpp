/************************
Author:Michael McCabe
Date: November 7, 2017
Description: This function takes two paramaters, an array of People objects,
and the size of this array and returns the standard deviation of the ages
of the people objects in the array.
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

/********
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	Person a("rosie",30);
	Person b("margie", 35);
	Person c("hilda", 40);
	Person d("Lorraine", 55);
	Person e("Rosemary", 70);
	
	Person array[] = {a, b, c, d, e};
	int SIZE = 5;
	double result = stdDev(array, SIZE);

	cout <<"Standard deviation: " << setprecision(9) << result << endl;
	cout << "The name of the third test subj..I mean person is: " << array[2].getName() << endl;

	cout <<"The last person in the array has the age of: " << array[SIZE-1].getAge() << endl;


}
********/
