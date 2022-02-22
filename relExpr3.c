// NAME:- SAGAR BALWANI
//
// relExpr3.c - To evaluate remainder of x / y (x % y) by taking user input and also values of relational expressions
// Input: integer x, y
// Output: remainder r
// Logic: r = x % y
//
# include <stdio.h>
//
void main() {
	int x, y, r, re1, re2, re3, re4, re5;
// Input
	printf("Enter Integers (a) The dividend and (b) The divisor : ");
	scanf("%d %d", &x, &y);
// Logic
	r = x % y;
// Relational Expressions
	re1 = r == 0;
	re2 = r == 1; 
	re3 = r >= 0;
	re4 = r != 1;
	re5 = r != 0;
// Output
	printf("%d %% %d = %d \n", x, y, r);    // Note: %% used to print %
	printf("Relational Operators are as follows: \n");
	printf("(%d == 0) = %d \n", r, re1);
	printf("(%d != 1) = %d \n", r, re4);
	printf("(%d == 1) = %d \n", r, re2);
	printf("(%d != 0) = %d \n", r, re5);
	printf("(%d >= 1) = %d \n", r, re5);
	printf("(%d >= 0) = %d \n", r, re3);
}

