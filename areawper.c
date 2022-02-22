// areawper.c - Given perimeter as an input, find area of the circle.
//
// Input - Perimeter of the circle.
// Output - Area of the circle.
/*
Logic :
pi = 3.14159265
perimeter = 2 * pi * r
radius = p / (2 * pi)
area = pi * r * r
*/
//
# include <stdio.h>
//
void main() {\
	float r, p, a, pi; 
	pi = 3.14159265;
//Input 
	printf("Enter perimeter of a circle: ");
	scanf("%f", &p);
// Logic
	r = p / (2 * pi);
	a = pi * r * r;
// Output
	printf("The area of the circle with radius = %4.2f, and perimeter = %4.2f, is: \n", r, p);
	printf("Area = %4.2f\n", a);
	
}
