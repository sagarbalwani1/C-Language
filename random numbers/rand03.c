// SAGAR BALWANI
//
// rand03.c - To generate random numbers using seed function.
// Input: 	(1) An integer n for total numbers to print.
//		(2) The limit under which the random numbers should be.
//		(3) Value of the seed.
//
// SEED is used to generate a pattern. So, whenever the same seed number is entered, the random numbers will always be same.
//
// Output: The generated n random numbers under certain limit with respect to the seed.
// Logic: 
// 	Step1: Take user-input for n, the value of seed and limit of the random numbers.
// 	Step2: Run a for-loop to generate random numbers.
// 	Step3: Divide the generated random number by the limit, so that the remainder will always be inside the limit.
// 	Step4: Print the resultant remainder as a random number.
//
//
# include <stdio.h>
# include <stdlib.h>				// This header file is compulsory if we need to generate random number using built-in function.
//
void main() {
 	int n, num1, limit1, i, seed1;
 	//
 	// Input
 	printf("Enter the value for total numbers to input: ");
 	scanf("%d", &n);
 	//
 	printf("Enter the limit for maximum random number: ");
 	scanf("%d", &limit1);
 	//
 	printf("Enter the value of seed: ");
 	scanf("%d", &seed1);
 	//
 	// Logic and Output
 	//
 	srand(seed1);				// Initializing the value of seed
 	//
 	printf("The generated %d random numbers from 0 to %d are as follows: \n", n, limit1);
 	for (i = 0; i < n; i++) {
 		num1 = rand() % limit1;		// Dividing it so the remainder will always be inside the limit
 		//
 		printf("%d, ", num1);
 	}
 }
 //
 // EOF