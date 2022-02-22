// NAME :- SAGAR BALWANI
//
// getchar01.c - to get input from user and print it using getchar() and putchar()
// Input: A string
// Ouptut: The inputted string
// Logic: None
//
# include <stdio.h>
//
void main() {
	char c;
	int count;
// Input, Logic and Output
	c = getchar();
	putchar(c);
//	
	while (c != '\n') {
		c = getchar();
		putchar(c);
		count++;
	}
	printf("COUNT = %d\n", count);
}
