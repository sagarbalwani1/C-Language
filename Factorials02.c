// SAGAR BALWANI
//
// Factorials02.c - To find the factorial of a number using recursive function.
// Input: A Positive Integer
// Output: Factorial of the inputted number
// Logic: 
//	Step1: Take an input from user and call the recursive function with the inputted number as function parameter.
// 	Step2: Keep calling the function inside the function until it reaches the stopping value.
//	Step3: Return the final value of the factorial in main function and print it.
//
//
# include <stdio.h>
//
int facct01(int);
//
// Function-1: Recursive function
//
int fact01(int n) {
	int fact;
	// Stopping Condition
	if (n == 1) {
		return 1;
	}
	//
	fact = n * fact01(n-1);
	//
	return fact;
}
//
// Function-2: Main Function
void main() {
	int n, sum;
	// Input
	printf("Enter a Positive Number n, where n > 0: ");
	scanf("%d", &n);
	//
	// Logic
	if ( n <= 0 ) {
		printf("Invalid Input.\n");
		return;
	}
	sum = fact01(n);
	//
	//Output
	printf("The factorial of %d! is %d\n", n, sum);
}
//
// EOF
