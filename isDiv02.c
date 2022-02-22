// NAME :- SAGAR BALWANI
//
// isDiv02.c - To test the divisibility of x by numbers from 2 to (x)
// Input: Integer x
// Output: Print whether x is divisible by each value y, where y varies from 2 to (x - 1)
// Logic: if (x % y == 0)then print "x is divisible by y" else print "x is not divisible by y"
//
# include <stdio.h>
//
void main() {
	int x, y, d;
// Input
	printf("Enter an Integer: ");
	scanf("%d", &x);
// Logic
	for(y = 1;y <= x;y++) {
		if (x % y == 0) {
			printf("%d is divisible by %d \n", x, y);
		}
		else {
			printf("%d is not divisible by %d \n", x, y);
		}
	}	
}

