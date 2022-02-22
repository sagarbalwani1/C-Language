// radiusCir01.c - Given the perimeter or area of the circle, find it radius.
//
// Input - perimeter and area
// Output - radius of the circle
/*
Logic:
pi = 3.14159265
perimeter = 2 * pi * r
r = perimeter / (2 * pi)			(1)
//
area = pi * r * r
r = sqrt(area / pi)				(2)
//
*/
//
# include <stdio.h>
# include <math.h>
void main() {
	float r, p, a, pi;
	pi = 3.14159265;
// Input perimeter
	printf("Enter perimeter for a circle:");
	scanf("%f", &p);
// Logic
	r = p / (2 * pi);
// Output
	printf("The radius of the circle with perimeter = %6.2f is %6.2f.\n", p, r);
//
//
//Input area
	printf("Enter area for a circle:");
	scanf("%f", &a);
// Logic
	r = sqrt(a / pi);
// Output
	printf("The radius of the circle with area = %6.2f is %6.2f.\n", a, r);
	
}
