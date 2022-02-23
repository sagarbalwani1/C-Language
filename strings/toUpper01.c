// NAME :- SAGAR BALWANI
//
// toUpper01.c - To print all the inputted characters in upper-case letters.
//
// Input: A String
// Output: The inputted string in upper-case letters.
// Logic: If it is a lower-case character, convert it to upper-case character or else print it as it is.
//
# include <stdio.h>
//
void main() {
	int count;
	char c;
// Input and Logic and Output
	while((c = getchar()) != '\n') {
		count++;
		if(c >= 'a' && c <= 'z') {
			c = c - 32;
			putchar(c);
		}
		else {
			putchar(c);
		}
	}
//
	printf("\n");
}
