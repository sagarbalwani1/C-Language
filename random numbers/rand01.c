// SAGAR BALWANI
//
// rand01.c - To generate random numbers using a built-in function in C Language.
//
// Input: An integer n.
// Output: Random numbers upto n times.
// Logic: 
// 	Step1: Accept an integer n as user-input.
// 	Step2: Genrate random numbers upto n number of times.
// 	Step3: Print all the random numbers.
//
// 
# include <stdio.h>
# include <stdlib.h>				// Need to include this header file for using function rand
//
void main() {
	int n, i, num1;
	//
	// Input
	printf("Give the value of n: ");
	scanf("%d", &n);
	//
	// Logic and Output
	printf("Random numbers upto %d are as follows: \n", n);
	for (i = 0; i < n; i++) {
		num1 = rand();
		//
		printf("%d, ", num1);
	}
	//
}
//
// EOF
