// NAME :- SAGAR BALWANI
// togglecase01.c - In a string, if the word is uppercase, then print it to lower case and vice-versa.
// Input: A string
// Output: The inputted string with toggled case
// Logic: (1) Take input
// (2) Check if the letter is upper-case or lower-case 
// (3) If the letter is uppercase, then change it to lower case and vice versa
//
# include <stdio.h>
//
void main() {
	char c;
// Input and Logic and Output
	while ((c = getchar()) != '\n') {
		if (c >= 'a' && c <= 'z') {
			printf("%c", c-'a'+'A');
		}
		else if(c >= 'A' && c <= 'Z') {
			printf("%c", c-'A'+'a');
		}
		else {
			putchar(c);
		}
	}
	printf("\n");
}
