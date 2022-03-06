// SAGAR BALWANI
//
// ptr.c - To get input of a number and print the number and its address using pointers.
//
// Input: An Integer.
//
// Output: The inputted number and its base address using pointer.
//
// Logic: 
//	Step1: Take user-input for an integer.
//	Step2: Assign the base address of that integer to a int pointer.
//	Step3: Now print the values using pointer.
//
// 
# include <stdio.h>
void main() {
	int num, *pnum;
	//
	// Assigning the pointer
	pnum = &num;
	//
	// Input
	printf("Enter the no. ");
	scanf("%d", &num);
	//
	// Output
	printf("The number entered was: %d\n", *pnum);
	printf("The entered number was: %d\n", num);
	printf("The address of num is %d\n", pnum);
	printf("The address of num is %d\n", &num);
}
//
// EOF
