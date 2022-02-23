// NAME :- SAGAR BALWANI
//
//ltrno03.c - Print the letter no (example: 1 for ‘A’ or 'a', 2 for ‘B’ or 'b', … , and finally, 26 for ‘Z’ or 'z') for each upper-case
//  or lower-case letter in text.
// 
// Input: A string 
// Output: print letter no. with each letter
// Logic: Subtract 'a' from ltr if lower-case or subtract 'A' fro ltr if upper-case
//
# include <stdio.h>
//
void main() {
	int count;
	char c;
// Input and Logic and Output
	while((c = getchar()) != '\n') {
		if (c >= 'A' && c <= 'Z') {
			printf("%c-%d, ", c, c-'A'+1);
		}
//
		if (c >= 'a' && c <= 'z') {
			printf("%c-%d, ", c, c-'a'+1);
		}
//
	}
	printf("\nCOUNT = %d \n", count);	
}
