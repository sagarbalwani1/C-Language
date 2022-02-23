// NAME :- SAGAR BALWANI
//
// divisors04a.c - To print all the divisors of the given integer in sequence using arrays. 
//
// Input: An integer
// Output: All the divisors ot the given integer in proper sequence
//
# include <stdio.h>
void main() {
	int w, x, y, z, d, e, count, a[100], b[100];
// Input
	printf("Enter an Integer: ");
	scanf("%d", &x);
// Output
	printf("The number %d is divisible by: ", x);
// Logic
	count = 0;
	w = 0;
	for(y = 1;(y*y) <= x;y++) {
		count++;
		d = x / y;
		e = x % y;
		if (e == 0) {
			w++;
			a[w] = y;
			b[w] = d;
		}
	} 
//
	for(z = 1;z <= w;z++) {
		printf("%d, ", a[z]);
	}
//
	for(z = w;z >= 1;z--) {
		printf("%d, ", b[z]);
	}

//
	printf("\nThe no. of operations performed is %d \n", count);	
}
