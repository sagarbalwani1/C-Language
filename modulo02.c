// modulo02.c - To evaluate remainder of a / 2 (a % 2)
// Input: integer a
// Output: remainder r
// Logic: r = a % 2
//
# include <stdio.h>
//
void main() {
	int a, r;
// Input
	printf("Enter a positive integer value: ");
	scanf("%d", &a);
// Logic
	r = a % 2;
// Output
	printf("%d %% 2 = %d \n", a, r);    // Note: %% used to print %
}

