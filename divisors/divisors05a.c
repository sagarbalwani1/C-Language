// NAME :- SAGAR BALWANI
//
// divisors05a.c - To print all the divisors of the given integer in sequence using arrays. 
//
// Input: An integer
// Output: All the divisors ot the given integer in proper sequence
//
# include <stdio.h>
# include <math.h>
void main() {
	int w, x, y, z, d, e, count, a[100], m;
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
		if (e == 0 ) {
			w++;
			a[w] = y;	
			w++;
			a[w] = d;
//
		}
	}
// Below step to remove the repeating number if the input digit is a square.
	m = sqrt(a[2]);
	if (m % a[w] == 0) {
		w--;
		count--;
	} 
//
	for(z = 1;z <= w;z++) {
		if(z % 2 == 1) {
			printf("%d, ", a[z]);
		}
	}
//
	for(z = w;z >= 1;z--) {
		if(z % 2 == 0) {
			printf("%d, ", a[z]);
		}
	}

//
	printf("\nThe no. of operations performed is %d \n", count);	
}
