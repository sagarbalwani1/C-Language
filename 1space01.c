// NAME :- SAGAR BALWANI
//
// 1space01.c - To eliminate multiple spaces and replace it with a single space
//
// Input: a string
// Output: inputted string with single intermediate space
// Logic: (1) To check if the current inputted character is space or not.
// (2.1) If the current character is space, then check if the previous character is space or not
// (2.2) If the previous character space then ignore it, if the previous character is not space then print it
// (3) If the current character is not space, then print it 
//
# include <stdio.h>
//
void main() {
	int count, i;
	char c;
// Input Logic And Output
	count = 0;
	i = 0;
	while((c = getchar()) != '\n') {
		count++;
		if(c == ' ') {
			if(i == ' ') {
				continue;
			}
			else {
				printf("%c", c);
				i = c;
			}
		}
		else if(c != ' ') {
			printf("%c", c);
			i = c;
		}
		
	}
	printf("\nCOUNT = %d \n", count);
}
