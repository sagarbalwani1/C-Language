// loop01.c - To print values from 0 to 20 (both inclusive)
//
// Input: None
// Output: Values from 0 to 20
// Logic: Trivial
//
# include <stdio.h>
void main() {
	int i;
	for(i = 0;i <= 20;i++) {
		printf("%d,  ", i);
	}
	printf("\n");
}
