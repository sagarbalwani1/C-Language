// NAME :- SAGAR BALWANI
//
// while01.c - Demo of while loop - to print numbers from n1 to n2, whereas n1>=0 and n2 > n1.
//
// Input: n1 and n2
// Output: n1, (n1+1), (n1+2), ..., n2
// Logic: Start with i = n1 and continue until i <= n2
//
# include <stdio.h>
//
void main() {
	int i, n1, n2;
// Input
	printf("Enter two numbers n1 and n2, where n1 < n2: ");
	scanf("%d %d", &n1, &n2);
// Logic and Output
	i = n1;
	while (i <= n2) {
		printf("%d, ", i);
		i++;
	}
//
	printf("\n");	
//
}
/*
//	same output but for loop used instead of while
//
	for (i = n1; i <= n2; i++) {
		printf("%d, ", i);
	}
	printf("\n");
}
*/
