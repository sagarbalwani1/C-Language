// NAME :- SAGAR BALWANI
//
// average01.c - To take input of all integers one by one and print its average
//
// Input: An integer one by one
// Output: Average of the inputted numbers
// Logic: (n1 + n2 + n3 + ... + n) / count of digits
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
	printf("The average of inputted natural numbers with count %d is = %d \n", n, sum1/n);
}
