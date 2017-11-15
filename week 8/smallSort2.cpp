/********************************
Author: Michael McCabe
Date: November 14, 2017
Similar to the SmallSort function, this function is passed the addresses of 3 integers
and sorts the values found at these addresses into ascending order
*********************************/

void smallSort2(int *a, int *b, int *c) {
	int temp;

	// Step one - compare a with b
	if (*a > *b) {
		// Swap them in the case that a is bigger, otherwise do nothing
		temp = *b;
		*b = *a;
		*a = temp;
	}

	//Step two - compare b with c
	if (*b > *c) {
		// Compare the confirmed bigger b with c
		temp = *c;
		*c = *b;
		*b = temp;
	}

	// Double check
	if (*a > *b) {
		// We may potentially have a bigger b, so confirm a again
		temp = *b;
		*b = *a;
		*a = temp;
	}
	return;
}


#include <iostream>
using namespace std;

int main() {

int i, am, great;

i = 14;
am = -90;
great = 2;

smallSort2(&i, &am, &great);

cout << i << " " << am << " " << great << endl;

cin.get();

return 0;
}


