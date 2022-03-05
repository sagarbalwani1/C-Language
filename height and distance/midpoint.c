// SAGAR BALWANI
//
// midpoint.c - To get the co-ordinates of midpoint between two points on a graph.
//
// Input: 	(1) No. of iterations to perform.
//		(2) Co-ordinates of two points on graph to find their midpoint.
//
// Output: Midpoint between the two given points.
// Logic:
//	Step1: Take user-input for number of iterations to perform.
//	Step2: Then, Take user-input for co-ordinates of two points.
// 	Step3: Use the given formula to find its midpoint.
//
//
# include <stdio.h>
void main() {
	int n, i;
	float x1, y1, x2, y2, one, two;
	//
	// Input
	printf("Enter the number of iterations: ");
	scanf("%d", &n);
	//
	for (i = 0; i < n; i++) {
		//
		// Input
		printf("Enter value for x1 and y1: ");
		scanf("%f %f", &x1, &y1);
		//
		printf("Enter value for x2 and y2: ");
		scanf("%f %f", &x2, &y2);
		//
		// Logic
		one = (x1 + x2) / 2;
		two = (y1 + y2) / 2;
		//
		// Output
		printf("The co-ordinates for mid-point for above values are: (%.1f, %.1f)\n", one, two);
	}
	
}
//
// EOF