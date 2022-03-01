// SAGAR BALWANI
//
// col_add.c - To add all the elements of each column of the inputted matrix.
// 
// Input: 	(1) The number of rows and columns.
// 		(2) The elements of the matrix.
//
// Output: The addition of all the elements in each column.
//
// Logic: 
// 	Step1: Get user-input for number of row and column followed by the elements of the matrix.
// 	Step2: Add all the elements in one column and print the sum.
// 	Step3: Repeat the above process for all the columns.
//
//
# include <stdio.h> 
void main() {
	int m, n, a[10][10], i, j, sum;
	//
	// Input
	printf("Enter number of rows: ");
	scanf("%d", &m);
	printf("Enter number of columns: ");
	scanf("%d", &n);
	//
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("a[%d][%d] = ", i+1, j+1);
			scanf("%d", &a[i][j]);
		}
	}
	//
	// Ouput of how the matrix will look like
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	//
	// Logic and Ouput
	printf("The column wise addition is as follows: \n");
	for(i = 0; i < m; i++) {
		sum = 0;
		for (j = 0; j < n; j++) {
			sum = sum + a[j][i];		
		}
		printf("COLUMN-%d: %d\n", i+1, sum);
	}
}
//
// EOF