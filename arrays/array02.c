// NAME :- SAGAR BALWANI
// 
// array02.c - Store numbers 1 to 100 in an int type array of size 100 using a for-loop (varying from 0 to 99)
// Input: None
// Output: 1, 2, 3, ... , 100
// Logic: Trivial
//
# include <stdio.h>
//
void main() {
	int a[100], i;
//
	for(i = 0;i < 100;i++) {
		a[i] = i + 1;
		printf("%d, ", a[i]);
	}
	printf("\n");
}
