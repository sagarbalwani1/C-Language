// NAME :- SAGAR BALWANI
//
// ltrno01.c - Print the letter no (example: 1 for ‘a’, 2 for ‘b’, … , and finally, 26 for ‘z’) for each lower-case letter in text.
// 
// Input: A string 
// Output: print letter no. with each letter
// Logic: Trivial
//
# include <stdio.h>
//
void main() {
	int count;
	char c;
// Input and logic
	while ((c = getchar()) != '\n') {
		count++;
		if(c >= 'a' && c <= 'z') {
			printf("%c-%d, ", c, c-'a'+1);
		}
	}
//
	printf("\nCOUNT = %d \n", count);
}
