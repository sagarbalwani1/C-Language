// NAME :- SAGAR BALWANI
//
// array01.c - Store numbers from 0 to  99 in an int type array of size 100 using a for-loop (varying from 0 to 99)
// Input: None
// Output: Print 0, 1, 2, ..., 98, 99
// Logic: Trivial
//
# include <stdio.h>
//
void main() {
	int i, a[100];			// Declare integer array a of size 100
//
	for(i = 0;i < 100;i++) {
		a[i] = i;		// Store value in array elements one-by-one
		printf("%d, ", a[i]);  // Print i-th array elements
	}
	printf("\n");
}
