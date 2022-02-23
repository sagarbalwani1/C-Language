// NAME :- SAGAR BALWANI
//
// str02 - To print a all characters of the string one-by-one
// Input: a string
// Output: Characters one-by-one
// Logic: Trivial
//
# include <stdio.h>
//
void main() {
	char s[20];
	int i;
// Input
	printf("Enter an integer less or equal to 19: ");
	scanf("%s", s);
// Output 

	printf("The characters one-by-one are as: ");
	for(i = 0;s[i] != '\0';i++) {
		printf("%c, ", s[i]);
	}
/* 
//	ANOTHER WAY - 1
	for(i = 0;i < 20;i++) {
		if (s[i] == '\0') {
			break;
		}
	printf("%c, ", s[i]);
	}


//	ANOTHER WAY - 2
	 for(i = 0;i < 20;i++) {
		if (s[i] != '\0') {
			printf("%c, ", s[i]);
		}
		else {
			break;
		}
	}
*/
	printf("\n%s", s);
	printf("\n");
}
 
