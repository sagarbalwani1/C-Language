// SAGAR BALWANI
//
// bar_vertical.c - To print a Bar Graph of the inputted numbers
// Input: 	(1) An integer n for the number of inputs 
//		(2) Input the number n times to display its graph.
//
// Output: A Bar Graph of the inputted numbers.
// Logic: 
//	Step1: Get an user-input for n and further numbers for n number of times.
// 	Step2: Start printing the star-pattern in a reverse for-loop
// 	Step3: If the number inputted is greater than the loop variable, print star. Or Else, Print an Empty Space.
// 	Step4: Keep Doing that until loop variable reaches 0.
//
//
# include <stdio.h>
void main() {
	int n, i, max1, a[30];
	//
	// Input
	printf("Enter n value: ");
	scanf("%d", &n);
	//
	printf("Input %d numbers: \n", n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	printf("\nThe Bar Graph is as Follows: \n");
	//
	// Logic
	max1 = a[0];
	for (i = 1; i < n; i++) {
		if (max1 < a[i]) {
			max1 = a[i];
		}
	}
	//
	// Output
	for (i = max1; i > 0; i--) {
		for (int j = 0; j < n; j++) {
			if (i <= a[j]) {
				printf("*  ");
			}
			else {
				printf("   ");
			}
		}
		printf("\n");
	}
}
//
/*
Sample Input:

Enter n value: 4
Input 4 numbers: 
5
2
3
6


Output: 

The Bar Graph is as Follows: 
         *  
*        *  
*        *  
*     *  *  
*  *  *  *  
*  *  *  * 
*/
//
// EOF