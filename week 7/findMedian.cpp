/*************************
Author:Michael McCabe
Date: November 6, 2017
Description: This function accepts two parameters relating to an array,
and uses those parameters to return the median of the array
IDE: Notepad++
Submission: V3
**************************/

#include <algorithm> // required for sort

using std::sort;

double findMedian(int userArray[], int arraySize){
	double median;
	
	// http://www.cplusplus.com/articles/NhA0RXSz/
	// First paramater - pointer to array start
	// Second parameter - sort up to the last element in the array
	// Array is directly sorted and passed by referene
	sort(userArray, userArray + arraySize);
	
	//ArraySize Odd
	if (arraySize % 2 == 1){
		median = userArray[arraySize / 2]; 
	}
	
	//ArraySize Even
	else if (arraySize % 2 == 0){
		// median is the numerical value, midpoint is the position value
		int midpoint;
		midpoint = userArray[arraySize / 2];
		
		median = (midpoint + (midpoint - 1)) / 2.0;
	}
	
	return median;
}
