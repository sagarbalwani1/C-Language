// SAGAR BALWANI
//
// ptr3.c - To perform addition on two numbers using pointers and in a user-defined function.
//
// Input: Enter two integers.
//
// Output: The total of the two numbers.
//
// Logic: 
//	Step1: Take user-input for two integers.
//	Step2: Call a function and pass the base adddress of the two inputted numbers and the third variable to store the sum.
//	Step3: Print the Output in the main function.
//
//
#include <stdio.h>
//
// Declaration of user-defined function
void sum (int*, int*, int*);
//
// Main Function
int main() {
	int num1, num2, total;
	//
	// Input
	printf("\n Enter the first number : ");
	scanf("%d", &num1);
	//
	printf("\n Enter the second number : ");
	scanf("%d", &num2);
	//
	// Logic
	sum(&num1, &num2, &total);
	//
	// Output
	printf("\nThe sum of %d and %d is %d\n", num1, num2, total);
	//
}
//
// Function-1: Function to add two numbers using pointers	
void sum(int *a, int *b, int *c) {
	//
	*c = *a + *b;	// corresponds to value at total
	//
}
//
// EOF