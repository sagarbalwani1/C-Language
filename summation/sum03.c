// NAME :- SAGAR BALWANI
//
// sum03.c - To add all the even characters until the inputted number n (n = natural even number)
//
// Input: An integer
// Output: Addition of numbers until the nth character (2 + 4 + 6 +...+(n-1) or n)
// Logic: (2 + 4 + 6 +...+(n-1) or n)
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
	for(i = 2;i <= n;i=i+2) {
		sum1 = sum1 + i;			// n(n+1)
	}
//Output
	printf("The addition of odd natural numbers upto %d is = %d \n", n, sum1);
}
