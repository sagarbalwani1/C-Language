// SAGAR BALWANI
//
// rand02.c - To generate random numbers upto certain limit.
// Input: 	(1) An integer n for total numbers to print.
//		(2) The limit under which the random numbers should be.
// Output: The generated n random numbers under certain limit.
// Logic: 
// 	Step1: Take user-input for n and limit of the random numbers.
// 	Step2: Run a for-loop to generate random numbers.
// 	Step3: Divide the generated random number by the limit, so that the remainder will always be inside th limit.
// 	Step4: Print the resultant remainder as a random number.
//
//
# include <stdio.h>
# include <stdlib.h>				// This header file is compulsory if we need to generate random number using built-in function.
//
void main() {
 	int n, num1, limit1, i;
 	//
 	// Input
 	printf("Enter the value for total numbers to input: ");
 	scanf("%d", &n);
 	//
 	printf("Enter the limit for maximum random number: ");
 	scanf("%d", &limit1);
 	//
 	// Logic and Output
 	printf("The generated %d random numbers from 0 to %d are as follows: \n", n, limit1);
 	for (i = 0; i < n; i++) {
 		num1 = rand() % limit1;		// Dividing it so the remainder will always be inside the limit
 		//
 		printf("%d, ", num1);
 	}
 }
 //
 // EOF