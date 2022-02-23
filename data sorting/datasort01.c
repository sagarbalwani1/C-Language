// NAME :- SAGAR BALWANI
// dataSort01 - In this n numbers will be entered and then all the numbers will be entered in ascending order
// IN OTHER WORD, THIS IS "DATA SORTING"
//
// Input: An integer n and all the integers upto n
// Output: All the numbers in ascending order
// Logic: (1) Get all the input in the main function
// (2) Then call the function which gets the minimum number from the array
// (3) Then the function prints the min. number and removes it from the array
// (4) The function will perform a loop, resulting in printing all the numbers in ascending order. 
//
#include <stdio.h>
//
// First Function: To find minimum value
int min1(int a[], int n) {
	int imin1, i;
	imin1 = 0;
	for (i = 1; i < n ; i++) {
		if (a[i] < a[imin1]) {
			imin1 = i;
		}
	}
	return imin1;
}
//
// Second Function: Sort the array and store it in another array
void sort1(int a[], int n, int asorted[]) {
	int i, j, n1, imin1;
	n1 = n;
	for (i = 0; i < n ; i++) {
		imin1 = min1(a, n1);
		asorted[i] = a[imin1];
		n1 = n1 - 1;
		for (j = imin1; j < n1 ; j++) {
			a[j] = a[j+1];
		}
	} 
}

void main() {
	int n, i, a[1000], asorted[1000];
// Input
	printf("Enter value of n: ");
	scanf("%d", &n);
//
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
// Logic
	sort1(a, n, asorted);
// Output
	for (i = 0; i < n ; i++) {
		printf("%d, ", asorted[i]);
	}
	//
	printf("\n");
}
//
