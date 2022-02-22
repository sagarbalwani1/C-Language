// NAME :- SAGAR BALWANI
//
// Factorials01.c - To find the factorial of the inputted number
// Input: An integer
// Output: Factorial of that integer
// Logic: (1) Set the limit of for loop upto that inputted integer
// (2) Keep on decreasing that no. meanwhile multiplying it to the previous no.
//
# include <stdio.h>
//
void main() {
	int i, int1;
	double factorial1;					// ACCURATE FOR UPTO 22 NUMBER
// Input 
	printf("Enter a number: ");
	scanf("%d", &int1);
// Logic 
	factorial1 = 1;
	for (i = int1; i > 0;i--) {
		factorial1 = factorial1 * i;
	}
	printf("The factorial of %d is = %f \n", int1, factorial1);
} 
