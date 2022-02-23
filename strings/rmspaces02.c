// NAME :- SAGAR BALWANI
// 
// rmspaces02.c - To remove the trailing spaces(spaces at the end of string) and print the improved string
//
// Input: A string with spaces at the end
// Output: The same inpputted string with trailing spaces removed
// Logic: (1) Check if there are spaces at the end of string
// (2) Remove the spaces and print the imprived string
//
# include <stdio.h>
//
void main() {
	char c, str1[100];
	int i, j, count;
// Input and Logic
	j = 0;
	count = 0;
	while((c = getchar()) != '\n') {
		count++;
		str1[j++] = c;
	}
	str1[j] = '\0';
//
	for (i = (j-1);str1[i] == ' ';i--) {
		;
	}
// Output
	str1[i + 1] = '9';
	str1[i + 2] = '\0';
	printf("String after removing trailing spaces = %s \n", str1);
	printf("No. of operations = %d\n", count);
} 
