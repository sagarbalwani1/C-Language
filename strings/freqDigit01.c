// NAME :- SAGAR BALWANI
//
// freqDigit01.c - Store the frequencies of the digit in a string and print it using for-loop
//
// Input: a String
// Output: Frequencies of each number in the string
// Logic:Logic: 1. Store the frequencies in an integer array of size 10
// 2. Convert the character code of the digit to the digit 
//
# include <stdio.h>
//
void main() {
	char c;
	int count, i, str1[10];
// Initializing the initial values
	for(i = 0;i < 10;i++) {
		str1[i] = 0;
	}
//
// Input and Logic
	count = 0;
	while ((c = getchar()) != '\n') {
		count++;
		if (c >= '0' && c <= '9') {
			++str1[c -'0'];				// str[c - '0']++; is also same and applicable
		}
	}
// Output
//	printf("0-%d, 1-%d, 2-%d, 3-%d, 4-%d, 5-%d, 6-%d, 7-%d, 8-%d, 9-%d\n", str1[0], str1[1], str1[2], str1[3], str1[4], str1[5], str1[6], str1[7], str1[8], str1[9]);

	for (i = 0; i < 10;i++) {
		printf("%d-%d, ", i, str1[i]);
	}

//
	printf("\nCOUNT = %d \n", count);
}
