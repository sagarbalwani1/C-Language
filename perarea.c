// perarea.c - To find perimeter and area of a square and a rectangle with given respective values.
// 
// Input - Length for a square and length, width for a rectangle.
// Output - Perimeter and Area of the square and rectangle.
/* 
Logic :
Perimeter of square = 4 * l
Area of square = l * l

Perimeter of rectangle = 2 * (l + b)
Area of rectangle = l * b
*/
//
# include <stdio.h>
void main() {
	int l, w, p, a;
// Input for square
	printf("Enter length for a square:");
	scanf("%d", &l);
	p = 4 * l;
	a = l * l;
// Output for square
	printf("The perimeter and area of square for given length = %d,  is %d and %d respectively.\n", l, p, a);
//
// Input for rectangle
	printf("Enter length and width of a rectangle:");
	scanf("%d %d", &l, &w);
	p = 2 * (l + w);
	a = l * w;
// Output for rectangle
	printf("The perimeter and area of the rectangle with length = %d and width = %d, is %d and %d respectively.\n", l, w, p, a);
	
}

