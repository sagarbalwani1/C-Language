// NAME :- SAGAR BALWANI
//
// capspace01.c - To capitalise first word of all the letters after a space
// Input: a string
// Output: inputted string with capitalised words after spaces
// Logic: (1) scan if the word has a space before it .
// (2) If it does then capitalise the letter 
// (3) If the letter is already capitalised, print it.
//
# include <stdio.h>
//
void main() {
	char c, j;
// Input and Logic and Output
	while ((c = getchar()) != '\n') {
		if (c >= 'a' && c <= 'z') {
			if (j == ' ') {
				printf("%c", c-'a'+'A');
				j = c;
			}
			else {
				putchar(c);
				j = c;	
			}
		}
		else {
			putchar(c);
			j = c;
		}
	}
	printf("\n");
}  
