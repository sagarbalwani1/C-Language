// NAME :- SAGAR BALWANI
//
// divisors01.c - To print all the divisors of the given integer
//
// Input: An integer
// Output: All the divisors ot the given integer
// Logic: if (x % y == 0)then print "x is divisible by y" 
//
# include <stdio.h>
void main() {
	int x, y;
// Input
	printf("Enter an Integer: ");
	scanf("%d", &x);
	printf("The number %d is divisible by: ", x);
// Logic
	for(y = 1;y <= x;y++) {
		if (x % y == 0) {
			printf("%d ", y);
		}
	}	
	printf("\n");
}
