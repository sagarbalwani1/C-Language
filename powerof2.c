// SAGAR BALWANI
//
// powerof2.c - To print the summation of all the numbers from 0 to n(inputter number) with power 2.
// Input: An integer n
// Output: 0^2 + 1^2 + 2^2 + 3^2 + 4^2 + ... + n^2 = sum
// Logic: for (i = 0; i < n; i++) {
//		term = i*i;
//		sum = sum + term;
//	}
//
//
# include <stdio.h>
int  sum1(int n) {
	int i, term, sum;
	sum = 0;
	for (i = 0; i < n; i++) {
		term = i*i;
		sum = sum + term;
	}
	return sum;
}
void main() {
	int n, sum;
	printf("Enter a No.: ");
	scanf("%d", &n);
//
	sum = sum1(n);
//
printf("SUM = %d", sum);
}