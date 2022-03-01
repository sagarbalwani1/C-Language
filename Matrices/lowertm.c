// SAGAR BALWANI
//
// lowertm.c - To generate a lower triangle matrix of zeroes and ones.
//
// Input: The value of row or column, where row = column.
//
// Output: A Lower triangular matrix of 0's and 1's.
//
// Logic: 
// 	Step1: Take input for row or column.
// 	Step2: Initialize all the elements with zeroes.
// 	Step3: Then Replace the elements ones wherever necessary.
//
//
# include <stdio.h>
void main() {
	int n, a[100][100], i, j;
	//
	// Input
	printf("Enter N value, n > 2: ");
	scanf("%d", &n);
	//
	// Logic
	for (i = 1; i <= n; i++) {
		for(j = 1; j <= n; j++) {
			a[i][j] = 0;
		}
	}
	
	//
	for (i = 1; i <= n; i++) {
		for (j = 1; j<=i; j++) {
			a[i][j] = 1;
		}
	}
	//
	// Output
	for (i = 1; i <= n; i++) {
		for(j = 1; j <= n; j++) {
			printf("%d	", a[i][j]);
		}
		printf("\n");
	}
}
//
// EOF