// NAME :- SAGAR BALWANI
//
// freqCh02.c - Store the frequencies of the character in a string and print it using for-loop
//
// Input: a String
// Output: Frequencies of each upper-case character in the string
// Logic:Logic: 1. Store the frequencies in an character array of size 26
// 2. Convert the character code of the digit to the digit 
//
# include <stdio.h>
//
void main() {
	char c, str1[26];
	int count, i, j;
// Initializing the initial values
	for(i = 0;i < 26;i++) {
		str1[i] = 0;
	}
//
// Input and Logic
	count = 0;
	j = 0;
	while ((c = getchar()) != '\n') {
		count++;
		if (c >= 'A' && c <= 'Z') {
			++str1[c -'A'];				// str[c - 'A']++; is also same and applicable
		}
	}
// Output
	for (i = 'A'; i <= 'Z';i++) {
		j = i - 'A';
		printf("%c-%d, ", i, str1[j]);
	}

//
	printf("\nCOUNT = %d \n", count);
}
