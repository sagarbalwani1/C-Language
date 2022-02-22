// sideSq01.c - To input the area of a square and get the output of its length.
//
// Input - area of a square
// Output - length used in area
// Logic - area (a) = l * l
// sqrt(a) = l
//
# include <stdio.h>
# include <math.h>
void main() {
	float a, l;
// Input 
	printf("Input area of a square: ");
	scanf("%f", &a);
// Logic
	l = sqrt(a);
// Output
	printf("The length of the square whose area = %f, is %f. \n", a, l);	
}
