// NAME :- SAGAR BALWANI
//
// rmAllSpaces.c - To eliminate all spaces from the string
//
// Input: a string
// Output: inputted string with no spaces
// Logic: To scan if the character has spaces and then remove the spaces
//
# include <stdio.h>
//
void main() {
	int count, x, n;
	char c;
// Input Logic And Output
	x = 0;
	count = 0;
	while((c = getchar()) != '\n') {
		count++;
		x++;
		if(c == ' ') {
			c = x;
		}
		else if(x != ' ') {
			printf("%c", c);
		}
		else if(n == ' '){
			printf(" %c", c);
			x = c;
		}
	}
	printf("\nCOUNT = %d \n", count);
}
