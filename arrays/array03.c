// NAME :- SAGAR BALWANI
// 
// array03.c - Store numbers 1 to 100 in an int type array of size 100 using a for-loop (varying from 1 to 100)
// Input: None
// Output: 1, 2, 3, ... , 100
// Logic: Trivial
//
# include <stdio.h>
//
void main() {
	int a[100], i;
//
	for(i = 1;i <= 100;i++) {
		a[i] = i;
		printf("%d, ", a[i]);
	}
	printf("\n");
}
