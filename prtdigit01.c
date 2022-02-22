// NAME :- SAGAR BALWANI
//
// prtdigit01.c - print only digits from the inputted string
//
// Input: A string
// Output: only digits from inputted string
/* 
Logic: if(c >= '0' && c <= '9') {
			putchar(c);
			printf(", ");
*/
# include <stdio.h>
//
void main() {
	int count;
	char c;
// Input Logic Output
	while((c = getchar()) != '\n') {
		count++;
		if(c >= '0' && c <= '9') {
			putchar(c);
			printf(", ");
		}
	//
	}
//
	printf("\nCOUNT = %d \n", count);
}
