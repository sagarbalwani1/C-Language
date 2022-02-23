// NAME :- SAGAR BALWANI
//
// sum01.c - To add all the numbers until the inputted number n (n = natural number)
//
// Input: An integer
// Output: Addition of numbers until the nth character (1 + 2 + 3 +...+n)
// Logic: (1 + 2 + 3 +...+n)
//
# include <stdio.h>
//
void main() {
	int n, i, sum1;
// Input
	printf("Enter a natural number: ");
	scanf("%d", &n);
// Logic 
	sum1 = 0;
	for(i = 1;i <= n;i++) {
		sum1 = sum1 + i;			// n(n+1)*0.5
	}
//Output
	printf("The addition of natural numbers upto %d is = %d \n", n, sum1);
}
