// typecast1.c - typecast an int type to float type
//
# include <stdio.h>
//
void main() {
	int a, b, c;
	float d, e, f;
//
	printf("Input two integers with a space between them:");
	scanf("%d %d", &a, &b);
//

	c = (float)a / b;		// first convert a to float and thereafter perform the division operation
	printf("%d / %d = %d\n", a, b, c);
	d = (float)a / b;
	printf("%d / %d = %f\n", a, b, d);
	e = a / (float)b;
	printf("%d / %d = %f\n", a, b, e);
	f = (float)a / (float)b;
	printf("%d / %d = %f\n", a, b, f);
}
 
