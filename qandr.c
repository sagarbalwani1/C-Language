// qandr.c - To print quotient and remainder of both positive and negative integers.
// 
# include <stdio.h>
//
void main()
{
	float a, b, q, r;
//	
	printf("Enter two numbers with a space between them: ");
	scanf("%f %f", &a, &b);
//	
	q = a / b;
	r = (int)a % (int)b;
//
	printf("%f %c %f = %f\n", a, '/', b, q);
	printf("%f %c %f = %f\n", a, '%', b, r);
//
}
