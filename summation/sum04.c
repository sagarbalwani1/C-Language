// NAME :- SAGAR BALWANI
//
// sum04.c - To add all the inputted integers one by one
//
// Input: An integer one by one
// Output: Addition of numbers as the numbers in inputted
// Logic: (n1 + n2 + n3 + ... + n)
//
# include <stdio.h>
//
void main() {
	int n, i, sum1, x;
// Input
	printf("Enter the count of numbers to be added: ");
	scanf("%d", &n);
// Logic 
	sum1 = 0; 
	for(i = 1;i <= n;i++) {
		printf(" ");
		scanf("%d", &x);
		sum1 = sum1 + x;
	}
//Output
	printf("The addition of inputted natural numbers with count %d is = %d \n", n, sum1);
}
