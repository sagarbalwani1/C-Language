// NAME :- SAGAR BALWANI
// pascal01.c - To print all the pascal rows upto given n(no. of rows)
// Input: No. of rows(n)
// Output: Pascal Triangle upto inputted no. of rows
// Logic: (1) Initialize the value of both arrays to 1.
// (2) for n = 1, it will not enter the second for loop and hence will printvalue a[0] = 1 only.
// (3) for n = 2, we already have a[0] and temp[0] = 1. Then it will add temp[0] + temp[1] = a[1].
// But since we don't have value of temp[1], it will automatically take temp[1] = 0. Therefore, a[1] = 1. So output = 1 1.
// (4) for n = 3, we already have a[0] and temp[0] = 1, We also have a[1] and temp[1] = 1.
// So, for next step it will add a[1] = temp[0] + temp[1]. Therefore a[1] = 2.
// Next, for a[2], it will add a[2] = temp[1] + temp[2]. But since we don't have temp[2], it wil take it as 0.
// Therefore, a[2] = 1 + 0. Output will be 1 2 1.
// And so on...  
//
# include <stdio.h>
//
void main() {
	int n, i, j, a[1000], temp[1000];
// Input
	printf("Enter no. of rows to print: ");
	scanf("%d", &n);
	//
// Logic
	a[0] = 1;
	temp[0] = 1;
	// for loop for no. of rows
	for (i = 0; i <= n; i++) {
		temp[i] = a[i];
		// for loop to print leading spaces
		for (j = n; j >=i; j--) {
			printf(" ");
		}
		// for loop to print numbers in each row
		for (j = 0; j < i; j++) {
			a[j+1] = temp[j] + temp[j+1];
		}
		//
		for (j = 0; j < i; j++) {
			temp[j] = a[j];
			printf("%d ", a[j]);
		}
		printf("\n");
	}
}
