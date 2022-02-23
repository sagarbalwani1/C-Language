// NAME :- SAGAR BALWANI
//
// ltrno02.c - Print the letter no (example: 1 for ‘A’, 2 for ‘B’, … , and finally, 26 for ‘Z’) for each upper-case letter in text.
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
		if (c >= 'A' && c <= 'Z') {
			printf("%c-%d, ", c, c-'A'+1);
		}
	}
//
	printf("\nCOUNT = %d \n", count);
}
