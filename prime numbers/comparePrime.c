// NAME :- SAGAR BALWANI
// comparePrime - To compare the last prime no. with the inputted no. and check if it is prime or not
// Input: An Integer
// Output: (1) All the prime numbers upto that integer
// (2) Check if the number is prime or not
// Logic: (1) Get all the prime numbers upto that no. and store it in a string
// (2) Compare the last prime no. with the inputted no.
// (3) Print all the prime numbers and also print if the inputted no.is prime or not
//
# include <stdio.h>
//
void main() {
	int i, j, isPrime, int1, y, z;
// Input 
	printf("Enter an Integer: ");
	scanf("%d", &int1);
// Logic
	isPrime = 0;
// Find all the Prime numbers upto that number
	z = 2;
	for(i = 2;i <= int1;i++) {
		for (j = 2;j < i;j++) {
			if (i % j == 0) {
				y = 0;
				break;
			}
			else {
				y = i;
			}
		}
		if (y && i != 2) {
			z = i;
		}
	}
// check if the number is prime or not
		if (int1 == z) {
			isPrime = 1;
		}		
// Output
	if (isPrime) {
		printf("%d is a PRIME NUMBER.\n", int1);
	}
	else {
		printf("%d is a COMPOSITE NUMBER. \n", int1);
	}

}
