// hexadecimal.c - Input any hexadecimal number and the output will be in octal, decimal and hexadecimal.
//
// Input - To input a hexadecimal number.
// Output - To output in octal, decimal and hexadecimal.
# include <stdio.h>
void main() {
	int a;
//Input
	printf("Input a Hexadecimal Number :");
	scanf("%x", &a);
// Output
	printf("The output is as follows :\n");
	printf("Octal - %o\n", a);	
	printf("Decimal - %d\n", a);
	printf("Hexadecimal - %x\n", a);
}
