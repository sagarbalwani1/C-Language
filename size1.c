// size1.c - get size of various variable types using sizeof() function
//
# include <stdio.h>
//
void main() {
	int i;
	short s;
	printf("sizeof(int) = %ld, sizeof(short) = %ld\n", sizeof(i), sizeof(s));
//
	unsigned u;
	long l;
	printf("sizeof(unsigned) = %ld, sizeof(long) = %ld\n", sizeof(u), sizeof(l));
//
	char c;
	printf("sizeof(char) = %ld\n", sizeof(c));
//
	float f;
	double d;
	printf("sizeof(float) = %ld, sizeof(double) = %ld\n", sizeof(f), sizeof(d));
//
	long double ld;
	printf("sizeof(long double) = %ld\n", sizeof(ld));
//
}
// for 8-bits, the range of int will be from -128 to 127 (total: 256)
// for 8-bits, the range of unsigned (int) will be from 0 to 255
