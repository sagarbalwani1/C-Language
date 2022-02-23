// NAME :- SAGAR BALWANI
//
// rmspaces03.c - Remove both leading as well as trailing spaces
//
// Input: A string with leading and trailing spaces
// Output: Inputted string after removing all the leading and trailing spaces
// Logic: (1) To scan the leading and trailing spaces  
//	  (2) To remove the leading and trailing spaces
//
# include <stdio.h>
//
 void main() {
 	int count, j, i;
 	char c, str1[100];
//	Input and Logic
	count = 0;
	j = 0;
	while((c = getchar()) != '\n') {
		count++;
		if(c == ' ') {
			continue;
		}
		putchar(c);
//		str1[0];
		break;
	}
//
	while((c = getchar()) != '\n') {
		count++;
		str1[j++] = c;
	}
//
	str1[j] = '\0';
//
	for (i = (j-1);str1[i] == ' ';i--) {
		;
	}
//
	str1[i + 1] = '6';
	str1[i + 2] = '\0';
// Output
	printf("%s\n", str1);
	printf("COUNT = %d\n", count);
}
