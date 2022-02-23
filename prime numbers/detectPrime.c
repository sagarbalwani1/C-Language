// NAME :- SAGAR BALWANI
//
// prime03.c - to find if the inputted number is prime or not by testing it with all the prime numbers upto that number
//
// Input: An integer
// Output: if the inputted number is prime or not
// Logic: (1) Firstly assign the first string to the prime no.2
// (2) Then get all the other prime number upto that no. and store them in the string
// (3) Then divide all the no.stored in the string to check if the inputted no.us prime or not
//
# include <stdio.h>
//
void main() {
	int i, j, isPrime, int1, str[1000], count, y, z;
// Input 
	printf("Enter an Integer: ");
	scanf("%d", &int1);
// Logic
	isPrime = 1;
	count = 0;
// Find all the Prime numbers upto that number
	str[0] = 2;
	z = 1;
	for(i = 2;i < int1;i++) {
		for (j = 2;j < i;j++) {
			count++;
			if (i % j == 0) {
				y = 0;
				break;
			}
			else {
				y = i;
			}
		}
		if (y && i != 2) {
			str[z] = i;
			z++;
		}
	}
// Divinding all the obtained prime numbers from the inputted number
	for (i = 0;i < z;i++) {
		count++;
		if (int1 % str[i] == 0 && int1 != 2) {
			isPrime = 0;
			break;
		}
	}		
// Output
	if (isPrime) {
		printf("%d is a PRIME NUMBER.\n", int1);
	}
	else {
		printf("%d is a COMPOSITE NUMBER. \n", int1);
	}
	printf("COUNT = %d\n", count);
}
