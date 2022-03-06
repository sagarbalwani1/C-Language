// SAGAR BALWANI
//
// ptr1.c - To perform Mathematical Operations on pointers.
//
// Input: Two integers
//
// Output: Performing operations on the pointers
//
// Logic: 
//	Step1: Take user-input of two numbers.
//	Step2: Assign the base-address of both the numbers to two separate int pointers.
//	Step3: Perform Addition, Multiplication, Increment Operation, and Division on both the pointers.
//
//
# include <stdio.h>
void main() {
	int num1, num2, sum = 0, mul = 0, div = 1;
	int *ptr1, *ptr2;
	//
	// Input
	printf("Enter First Value: ");
	scanf("%d", &num1);
	//
	printf("Enter Second Number: ");
	scanf("%d", num2);
	//
	// Logic and Output
	ptr1 = &num1;
	ptr2 = &num2;
	printf("Ptr1 = %d\n", *ptr1);
	printf("Address of num1 = %d\n", ptr1);
	//
	printf("Ptr2 = %d\n", *ptr2);
	printf("Address of num2 = %d\n", ptr2);
	//
	sum = *ptr1 + *ptr2;
	printf("SUM = %d\n", sum);
	//
	mul = sum * (*ptr1);
	printf("MUL = %d\n", mul);
	//
	*ptr2 += 1;
	printf("New Ptr2 = %d\n", *ptr2);
	//
	div = 9 + (*ptr1) / (*ptr2) - 30;
	printf("DIV = %d\n", div);
}
//
// EOF