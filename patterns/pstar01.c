// NAME :- SAGAR BALWANI
//
// ptrstar01.c - To print a pattern of stars in decreasing rows while increasing columns.
//
// Input: An integer for row and column
// Output: The pattern of star corresponding to the inputted number
// Logic: print the pattern of star in such a way that the column gets decreased while the row keeps increasing
//
# include <stdio.h>
//
void main() {
	int i, int1, j;
// Input
	printf("Enter an integer: ");
	scanf("%d", &int1);
// Logic and Output
	for(i = int1;i > 0;i--) {
		j = i;
		while(j > 0) {
			printf("*");
			j--;
		}
		printf("\n");
	}
//
	printf("\n");
}
