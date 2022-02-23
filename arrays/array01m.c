// NAME :- SAGAR BALWANI
//
// array01m.c - Store numbers from 0 to  (m - 1) (m <= 100) in an int type array of size m using a for-loop (varying from 0 to (m - 1))
// Input: m value
// Output: Print 0, 1, 2, ..., (m - 1)
// Logic: Trivial
//
# include <stdio.h>
//
void main() {
	int i, a[100], m;			// Declare integer array a of size 100
// Input 
	printf("Enter the value of m: ");
	scanf("%d", &m);

	for(i = 0;i < m;i++) {
		a[i] = i;		// Store value in array elements one-by-one
		printf("%d, ", a[i]);  // Print i-th array elements
	}
	printf("\n");
}
