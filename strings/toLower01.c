// NAME :- SAGAR BALWANI
//
// toLower01.c - To print all the inputted characters in lower-case letters.
//
// Input: A String
// Output: The inputted string in lower-case letters.
// Logic: If it is an upper-case character, convert it to lower-case or else print as it is.
//
# include <stdio.h>
//
void main() {
	int count;
	char c;
// Input and Logic and Output
	while((c = getchar()) != '\n') {
		count++;
		if(c >= 'A' && c <= 'Z') {
			c = c + 32;
			putchar(c);
		}
		else {
			putchar(c);
		}
	}
//
	printf("\n");
}
