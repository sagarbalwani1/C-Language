// NAME :- SAGAR BALWANI
//
// compage01.c - To compare ages of your father's and yours
//
// Input: Ages (f1) and (s1)
// Output: comparison and difference
// Logic: sum = f1 - s1
//
# include <stdio.h>
//
void main() {
	int f1, s1, sum;
// Input 
	printf("Input (a) Your Father's Age (b) Your age: ");
	scanf("%d %d", &f1, &s1);
// Logic
	sum = f1 - s1;
// Output
	if (s1 > f1) {
		printf("Your age is greater than your Father's. \nPLEASE ENTER A VALID AGE.\n");
	}
	else if (s1 == f1) {
		printf("Your age is equal to your Father's age. \nPLEASE ENTER A VALID AGE.\n");
	}
	else {
		printf("Your Father's age and Your age are %d and %d, and the difference is %d.\n", f1, s1, sum);
	}
	
}  
