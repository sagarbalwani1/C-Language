// NAME :- SAGAR BALWANI
//
// funcprime01.c - To generate all prime numbers upto the inputted number using two functions
// Input: An integer n.
// Output: All the prime numbers upto that number.
// Logic: (1) Declare first function to test if the number is prime or not.
// (2) Declare second function get all the numbers upto the inputted no.
// (3) Use third (main) function to call the function and print the output.
//
# include <stdio.h>
// First function to process a number
int isPrime1(int x) {
	int i, isPrime;
//
	isPrime = 1;
	if  (x > 2 && x % 2 == 0) {
		isPrime = 0;
	}
	else {
		for (i = 3; i < x; i=i+2) {
			if(x % i == 0) {
				isPrime = 0;
				break;
			}
		}
	}
	return isPrime;
}
//
// Second Function
void prm1(int n) {
	int x, isPrime;
	if (n >= 2) {
		printf("2 is a Prime Number. \n");
	}
	for (x = 3;x <= n;x=x+2) {
		isPrime=isPrime1(x);
		if (isPrime) {
			printf("%d is a Prime Number. \n", x);
		}
	}
}
//
// Main Program
void main() {
	int n;
// Input
	printf("Enter a integer n >= 2: ");
	scanf("%d", &n);
//
	if(n < 2) {
		printf("Enter a Valid integer. \n");
	}
	else {
		prm1(n);
	}
}
