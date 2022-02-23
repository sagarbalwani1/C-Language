// NAME :- SAGAR BALWANI
//
// divisors02.c - To print all the divisors of the given integer and print count of operations
//
// Input: An integer
// Output: All the divisors ot the given integer and count of operations
// Logic: if (x % y == 0)then print "x is divisible by y" 
//
# include <stdio.h>
void main() {
	int x, y, count;
// Input
	printf("Enter an Integer: ");
	scanf("%d", &x);
// Logic
	count = 0;
	printf("The number is %d divisible by: ", x);
	for(y = 1;y <= x;y++) {
		count++;
		if (x % y == 0) {
			printf("%d  ", y);
		}
	}
	printf("\nThe no. of operations performed is %d \n", count);	
}
