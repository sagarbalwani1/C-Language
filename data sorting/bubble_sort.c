// SAGAR BALWANI
//	
// bubble_sort.c - to get an input of integer string and sort it in ascending order using bubble sort method.
// Input: An integer n for number of inputs and integers upto n.
// Output: Sorted array in ascending order.
// Logic: 
// 	Step1: Take an input from user and the accept integers upto that input from user.
// 	Step2: Print Elements Before Sorting and then start Sorting using nested for-loops.
// 	Step3: Every timme take the biggest number from the string and keep shifting it until it reaches to the end of the string.
//	Step4: Then ignore the sorted number and go for the rest of the string.
// 	Step5: Keep doing the above process until the array is sorted.
//
//
# include <stdio.h>
void main() {
	int i, j, n, temp, a[100];
	//
	// Input
	printf("Enter n: ");
	scanf("%d", &n);
	//
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	//
	printf("ELEMENTS BEFORE SORTING.\n");
	for (i = 0; i < n; i++) {
		printf("%d, ", a[i]);	
	}
	printf("\n");
	//
	// Logic
	for (i = (n-1); i >= 0; i--) {
		for (j = 0; j < i; j++) {
			if (a[j] > a[j+1]) {
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;			
			}
		}
		//
		// Intermediate Output
		printf("INTERMEDIATE.\n");
		for (j = 0; j < n; j++) {
			printf("%d, ", a[j]);
		}
		printf("\n");
	}
	//
	// Final Output
	printf("ELEMENTS AFTER SORTING.\n");
	for (i = 0; i < n; i++) {
		printf("%d, ", a[i]);
	}
	printf("\n");
	//
}
//
/*
A Sample Output Showing how the code works:

Enter n: 6
12
13
40
1
2
10
ELEMENTS BEFORE SORTING.
12, 13, 40, 1, 2, 10, 
INTERMEDIATE.
12, 13, 1, 2, 10, 40, 
INTERMEDIATE.
12, 1, 2, 10, 13, 40, 
INTERMEDIATE.
1, 2, 10, 12, 13, 40, 
INTERMEDIATE.
1, 2, 10, 12, 13, 40, 
INTERMEDIATE.
1, 2, 10, 12, 13, 40, 
INTERMEDIATE.
1, 2, 10, 12, 13, 40, 
ELEMENTS AFTER SORTING.
1, 2, 10, 12, 13, 40,
*/
//
// EOF
