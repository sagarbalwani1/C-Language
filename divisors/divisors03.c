// NAME :- SAGAR BALWANI
//
// divisors03.c - To print all the divisors of the given integer by taking square of y and print count of operations
//
// Input: An integer
// Output: All the divisors ot the given integer and count of operations
// Logic: if (x % y == 0)then print "x is divisible by y" 
//
# include <stdio.h>
void main() {
	int x, y, d, e, count;
// Input
	printf("Enter an Integer: ");
	scanf("%d", &x);
// Logic
	printf("The number %d is divisible by: ", x);
	count = 0;
	for(y = 1;(y*y) <= x;y++) {
		count++;
		d = x / y;
		e = x % y;
		if (e == 0) {
			printf("%d  ", y);
			printf("%d  ", d);
		}
	}
	printf("\nThe no. of operations performed is %d \n", count);	
}
