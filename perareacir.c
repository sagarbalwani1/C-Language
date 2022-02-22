// perareacir.c - To get circumference and area of a circle by input of its radius.
//
// Input - Radius of the circle
// Output - Perimeter and area of the circle
/*
 Logic:
 pi = 3.14159265
 perimeter = 2 * pi * r
 area = pi*r*r
*/
//
# include <stdio.h>
void main() {
	float pi, p, a, r;
	pi = 3.14159265;
// Input
	printf("Input radius of the circle: ");
	scanf("%f", &r);
//Logic
	p = 2 * pi * r;
	a = pi * r * r;
// Output
	printf("The circle with radius = %6.2f, has the area and perimeter as follows: \n", r);
	printf("Perimeter = %6.2f\n", p);
	printf("Area = %6.2f\n", a);
 }
