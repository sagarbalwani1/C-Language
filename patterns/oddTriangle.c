// SAGAR BALWANI
//
// oddTriangle.c - To Print a triangle like pattern of odd integers
// Input: An integer(Number of lines to print).
// Output: A Trianlge of odd integers.
// Logic: 
// 	Step1: Get an user-input which will be the number of lines.
//	Step2: Start the for-loop from 1 and keep printing the numbers until n number of times
// 	Step3: The first for-loop will is for the number of lines. While, the second for-loop will print the odd numbers
//
//
# include <stdio.h>
void main() {
	int i, j, n, int01;
	//
	// Input
	printf("Enter n value: ");
	scanf("%d", &n);
	//
	// Logic and Output
	for (i = 1; i <= n; i++) {
		int01 = 1;
		for (j = 1; j <= i; j++) {
			printf("%d ", int01);
			int01 = int01 + 2;
		}
		printf("\n");
	}
}
//
/*
Sample Input: 
Enter n value: 5

Output:
1 
1 3 
1 3 5 
1 3 5 7 
1 3 5 7 9 
*/
//
// EOF