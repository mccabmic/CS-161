/************************
Author:Michael McCabe
Date: November 14, 2017
Description: This function takes two paramaters, a pointer to an array object,
and the size of this array and modifies the array by doubling the array size
and populating with repeating items from the first array.

IDE: Notepad++
**************************/

void repeatArray(double*& previousArray, int oldArraySize) {
	// Create a brand new array
	double* newArray = new double[oldArraySize * 2];

	//Copy Values
	for (int i = 0; i < oldArraySize * 2; i++)
		newArray[i] = previousArray[i % oldArraySize];  //remainder will never be more than oldarraysize

	// Delete the old array
	delete[] previousArray;

	// Change references to the new array
	previousArray = newArray;

}

/*
#include <iostream>
using namespace std;

int main() {
	double* myArray = new double[1];
	for (int i = 0; i<1; i++)
		myArray[i] = (i + 1)*2.5;

	repeatArray(myArray, 1);
	for (int i = 0; i<2; i++)
		cout << myArray[i] << endl;

	delete[]myArray;

	return 0;
}*/

