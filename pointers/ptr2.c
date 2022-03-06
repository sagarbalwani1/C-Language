// SAGAR BALWANI 
//
// ptr2.c - Perform addition using pointers in a separate user-defined function.
//
// Input: Take user-input of two numbers.
//
// Output: The sum of two numbers.
//
// Logic: 
//	Step1: Take user-input for two numbers.
//	Step2: Pass the base address of the two inputted variables and a third integer total in the function.
//	Step3: Perform the addition in the user-defined function.
//	Step4: Print the total value after addition in the main Function.
//
//
# include <stdio.h>
//
// User-Defined Function
void sum(int*, int*, int*);
//
// Main Function
void main() {
	int num1, num2, total;
	//
	// Input
	printf("Enter a number: ");
	scanf("%d", &num1);
	//
	printf("Enter another number: ");
	scanf("%d", &num2);
	//
	// Logic
	sum(&num1, &num2, &total);
	//
	// Output
	printf("TOTAL = %d\n", total);
}
//
//
// Function-1: Function to calculate total sum
// 
void sum(int *n1, int *n2, int *n3) {
	*n3 = *n1 + *n2;
}
//
// EOF