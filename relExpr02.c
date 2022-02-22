// NAME:- SAGAR BALWANI
//
// relExpr2.c - To evaluate remainder of a / 2 (a % 2) by taking user input and also values of relational expressions
// Input: integer a
// Output: remainder r
// Logic: r = a % 2
//
# include <stdio.h>
//
void main() {
	int a, r, re1, re2;
// Input
	printf("Enter a positive integer value: ");
	scanf("%d", &a);
// Logic
	r = a % 2;
	re1 = r == 0;
	re2 = r == 1; 
// Output
	printf("%d %% 2 = %d \n", a, r);    // Note: %% used to print %
	printf("Relational Operators are as follows: \n");
	printf("(r == 0) = %d \n", re1);
	printf("(r != 1) = %d \n", re1);
	printf("(r == 1) = %d \n", re2);
	printf("(r != 0) = %d \n", re2);
}

