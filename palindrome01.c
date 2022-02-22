// NAME :- SAGAR BALWANI
//
// palindrome01.c - To check if the number is palindrome or not.
// Input: An integer
// Output: "this number is a palindrome" OR "This number is not a palindrome"
// Logic: (1) Reverse the inputted number using while loop.
// (2) Compare both of them. If they are same then the number is palindrome.
//
# include <stdio.h>
//
// Functione - 1
int palin1(int n) {
	int origin1, remainder1, reverse1 = 0, isPalin; 
	origin1 = n;
	isPalin = 0;
	while (n != 0) {
		remainder1 = n % 10;
		reverse1 = reverse1*10 + remainder1;
		n /= 10;
	}
//
	if (origin1 == reverse1) {
		isPalin = 1;
	}
	return isPalin;
}
void main() {
	int n, isPalin;
// Input 
	printf("Enter a number: ");
	scanf("%d", &n);
// Logic
	isPalin = palin1(n);
// Output
	if (isPalin) {
		printf("%d is a Palindrome Number.\n", n);
	}
	else {
		printf("%d is not a Palindrome Number.\n", n);
	}
}
