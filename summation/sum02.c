// NAME :- SAGAR BALWANI
//
// sum02.c - To add all the odd characters until the inputted number n (n = natural odd number)
//
// Input: An integer
// Output: Addition of numbers until the nth character (1 + 3 + 5 +...+(n-1) or n)
// Logic: (1 + 3 + 5 +...+(n-1) or n)
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
	for(i = 1;i <= n;i=i+2) {
		sum1 = sum1 + i;			// n**2
	}
//Output
	printf("The addition of odd natural numbers upto %d is = %d \n", n, sum1);
}
