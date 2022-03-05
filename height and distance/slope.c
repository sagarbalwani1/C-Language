// SAGAR BALWANI
//
// slope.c - To find the slope of given co-ordinates.
//
// Input: 	(1) The total no. n for iterations.
//		(2) The co-ordinates of the two points upto n times
//
// Output: The slope of the given co-ordinates.
//
// Logic: 
// 	Step1: Accept user-input for n no. of iterations.
//	Step2: Accept values of x1,y1 and x2,y2 for n number of times.
//	Step3: Find the value of slope for each iteration.
//
//
# include <stdio.h>
//
void main() {
	float x1, y1, x2, y2, n, i, m;
	//
	// Input
	printf("Enter the no. of iterations: ");
	scanf("%d", &n);
	//
	for (i = 0; i < n; i++) {
		// 
		// Input
		printf("Enter value of x1 and y1: ");
		scanf("%d %d", &x1, &y1);
		//
		printf("Enter value of x2 and y2: ");
		scanf("%d %d", &x2, &y2);
		//
		// Logic
		m = (y2 - y1) / (x2 - x1);
		//
		// Output
		printf("The value of slope is: %d\n", m);
	}
}
//
// EOF