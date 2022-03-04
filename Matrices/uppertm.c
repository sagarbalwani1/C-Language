// SAGAR BALWANI
//
// uppertm.c - To print an upper triangular matrix of zeroes and ones.
//
// Input: The number for rows or columns, where rows = columns.
//
// Output: The upper triangular matrix of 0's and 1's.
//
// Logic: 
// 	Step1: Take user-input for value of row or column, where row will be equal to column.
//	Step2: Then, initialize all the values of array to 1.
// 	Step3: Then replace all the values from 1 to 0, which are below the main diagonal.
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
			a[i][j] = 1;
		}
	}
	
	//
	for (i = 1; i <= n; i++) {
		for (j = 1; j<=n && j<i; j++) {
			a[i][j] = 0;
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