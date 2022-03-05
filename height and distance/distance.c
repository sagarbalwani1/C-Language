// SAGAR BALWANI
//
// distance.c - To find the distance between two points on a graph using distance formula
// DISTANCE FORMULA: √[(x1 – x2)^2 – (y1 – y2)^2]
//
// Input: 	(1) The no. n for iterations to calculate distance formula.
// 		(2) The values for x1 and y1, and then values of x2 and y2.
//
// Output: The calculated distance between the points given.
//
// Logic: 
// 	Step1: Take user-input for how many times you want to perform operations on distance formula.
//	Step2: Then, take user input for values of x1, y1, and x2, y2.
//	Step3: Firstly, calculate (x1 - x2) and (y1 - y2).
// 	Step4: Then, calculate squares of both the above results.
//	Step5: Then, add the two numbers that are obtained in step-4.
//	Step6: Take square root of the above resultant no. in step-5 and print it as distance.
//
// 
// Header Files
# include <stdio.h>
# include <math.h>
//
void main() {
	int n, i;
	float x1, x2, y1, y2, one, two, x;
	//
	// Input
	printf("Enter the number of iterations: ");
	scanf("%d", &n);
	//
	//
	for (i = 0; i < n; i++) {
		// Input
		printf("Enter value for x1 and y1: ");
		scanf("%f %f", &x1, &y1);
		//
		printf("Enter value for x2 and y2: ");
		scanf("%f %f", &x2, &y2);
		//
		// Logic
		one = (x1 - x2);
		two = (y1 - y2);
		one = one * one;
		two = two * two;
		x = one + two;
		x = sqrt(x);
		//
		// Output
		printf("The Distance between above points is %f\n", x);
	}
}
//
// EOF
