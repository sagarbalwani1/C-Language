// SAGAR BALWANI
//
// row_add.c - To add all the elements of each row and print its output.
//
// Input: Take user-input for number of rows and columns followed by the elements of the matrix.
//
// Output: The addition of all elements in each row.
//
// Logic: 
// 	Step1: Take user-input for number of rows and columns followed by the elements of the array.
//	Step2: Add all the elements of each row and then print the summation of each row.
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
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	//
	// Logic
	printf("The row wise addition is as follows: \n");
	for(i = 0; i < m; i++) {
		sum = 0;
		for (j = 0; j < n; j++) {
			sum = sum + a[i][j];		
		}
		// Output
		printf("ROW-%d: %d\n", i+1, sum);
	}
}
//
// EOF