// NAME :- SAGAR BALWANI
//
// inpchar01.c - Store input as a string and print each character in %d format and in %c format.
//
// Input: Integer as a string
// Output: Print it as integer as well as in character
// Logic: Trivial
//
# include <stdio.h>
//
void main() {
	int i, x;
	char a[100];
// Input
	printf("Enter a number: ");
	scanf("%s", a);
// Ouput
	printf("The output in character format: ");
	for(i = 0;a[i] != '\0';i++) {
		printf("%c, ", a[i]);
	}
//
	printf("\nThe output in integer format: ");
	
	for(i = 0;a[i] != '\0';i++) {
 		x = a[i] - 48;			// because 0 == 48 in ASCII. So, 1 == 49, and so on 
 		printf("%d, ", x);
 	}

 		printf("\n");
}
