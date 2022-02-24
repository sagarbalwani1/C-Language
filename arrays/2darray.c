// SAGAR BALWANI
//
// 2darray.c - A sample program on how to use a 2d array.
// Input: The dimensions of the array followed by the values of the array.
// Output: The values of the array in the form of a matrix.
// Logic: 
//	Step1: Get user-input for m and n.
//	Step2: Get user-input for the elements of the array.
//	Step3: Print the array.
//
//
# include <stdio.h>
void main() {
	int m,n, a[1000][1000];
	// Input
	printf("Enter the dimensions of 2D array: ");
	scanf("%d%d", &m, &n);
	//
	printf("Enter the elements of the array: \n");
	for(int i = 1; i <= m; i++) {
		for(int j = 1; j <= n;j++) {
			scanf("%d", &a[i][j]);
		}
		printf("\n");
	}
	//
	// Output
	printf("///////////////////////////\n");
	//
	for(int i = 1; i <= m; i++) {
		for(int j = 1; j <= n;j++) {
			printf("%d	", a[i][j]);
		}
		printf("\n");
	}
}
//
// EOF