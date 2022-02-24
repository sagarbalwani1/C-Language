// SAGAR BALWANI
// 
// dectobin.c - To convert a decimal number into corresponding binary number
// Input: A decimal number.
// Output: Corresponding Binary number of the inputted Decimal Number.
// Logic: 
//	Step1: Call a Function for getting user-input and pass it to the another function for output.
// 	Step2: Function-2 will convert the decimal number into correspponding binary number
//
//
# include <stdio.h>
//
// Declaration of user-defined functions
//
int getdata();
void output(int); 
//
// Main Function
//
void main() {
	int n;
	n = getdata();
	output(n);
}
//
// Function-1: A Function to get user-input
//
int getdata() {
	int n;
	printf("Enter the value of n: ");
	scanf("%d", &n);	
	return n;
}
//
// Function-2: Function to calculate the corresponding binary number and print it.
//
void output(int n) {
	int i, bin, sum=0, x = 1;
	printf("The converted binary no. is ");
	for (i = 0; n > 0; i++) {
		bin = n % 2;
		n = n / 2;
		sum = sum + (x * bin);
		x = x * 10;
	}
	printf("%d\n", sum);
}
//
// EOF