// NAME :- SAGAR BALWANI
//
// Scase01.c - To capitalise all the letters whenever it ends with either ., \n, !, ?
// Input: A string of letters
// Output: New sentence has first letter of the first word capitalised
// Logic:  
// (1) Store all the characters in the array
// (2) Check if the line has ended
// (3) If the character is either . or \n or ! or ?, then the first letter of the next word shall be capitalised
// (4) Else Store it in the array
//
# include <stdio.h>
//
void main() {
	char c;
// Setting the values for Each capital letter
// Input and Logic and Output
	while((c = getchar()) != '\n') {
		if (c == '.' || c == '\n' || c == '!' || c == '?') {
			putchar(c);
			c = getchar();
			if (c >= 'a' && c <= 'z') {
				printf(" %c", c-'a'+'A');
			}
			else if(c == ' ') {
				c = getchar();
				if (c >= 'a' && c <= 'z') {
					printf(" %c", c-'a'+'A');
				}
				else {
					continue;
				}
			}
		}
		else {
			putchar(c);
		}
	}
	printf("\n");
} 
