// NAME :- SAGAR BALWANI
//
// rmspaces01.c - To remove all the spaces from the leading spaces and print the string
// 
// Input: A String with leading spaces
// Output: To print inputted above string with leading spaces removed
// Logic: (1) To scan if the sentence has any leading spaces
// 	  (2) To remove the leading spaces (if any)
//
# include <stdio.h>
//
void main() {
	int count;
	char c;
// Input and Logic
	while((c = getchar()) != '\n') {
		count++;
		if(c == ' ') {
			continue;			// continuation of loop ignoring the statements which follow
		}
		putchar(c);
		break;					// Exit (come out of) the loop
	}
//
	while((c = getchar()) != '\n') {
		count++;
		putchar(c);				// Output
	}
// 
	printf("\nCOUNT = %d \n", count);
//
}  
