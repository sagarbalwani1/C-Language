// NAME :- SAGAR BALWANI
//
// Fibonacci01.c - To print the fibonacci numbers upto the given inputted number
// Input: The number upto which Fibonacci numbers are to be printed
// Output: Numbers in Fibonacci series upto the inputed number
// Logic: (1) Declare three variables
// (2) Assign i for loop, count for input number and j = 1
// (3) Kepp on adding i to j upto the given count
//
# include <stdio.h>
//
void main() {
	int i, j, count;
// Input
	printf("Enter the count of number: ");
	scanf("%d", &count);
// Logic and Output
	j = 1;
	for (i = 0;i <= count;i=i+j) {
		printf("%d, ", i);
		j = j + i;
		if (j <= count) {
			printf("%d, ", j);
		}
	}
	printf("\n");
}
