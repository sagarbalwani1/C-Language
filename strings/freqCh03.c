// NAME :- SAGAR BALWANI
//
// freqCh03.c - To print the frequencies of character (same for upper or lower case) in a string
//
// Input: A string
// Output: Frequencies of the character which will be same for either upper or lower case
// Logic: (1) To scan if the character is upper-case or lower-case
// (2) In either cases add the frequency to the corresponding character
//
# include <stdio.h>
//
void main() {
	char c;
	int str1[100], i, count, j;
//
//	Initializing the characters
	for(i = 0;i < 26;i++) {
		str1[i] = 0;
	}
// 
// Input and Logic
	while ((c = getchar()) != '\n') {
		count++;
		if (c >= 'a' && c <= 'z') {
			str1[c-'a']++;
		}
		else if(c >= 'A' && c <= 'Z') {
			str1[c-'A']++;
		}
	}
//
// Output 
	for(i = 'a';i <= 'z';i++) {
		j = i - 'a';
		printf("%c-%d, ", i, str1[j]);
	}	
//
	printf("\nCOUNT = %d \n", count);
}
