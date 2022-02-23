// NAME :-  SAGAR BALWANI
//
// prime01.c - To test if the inputted integer is prime no. or not.
//
// Input: An integer >= 2
// Output: "n is prime number" or "n is a composite number"
// Logic: test the number by dividing it with integers upto n
//
# include <stdio.h>
//
void main() {
	int i, n, count, isPrime;
// Input
	printf("Enter an integer >= 2: ");
	scanf("%d", &n);
// Logic and Output
	count = 1;
	isPrime = 1;
	if(n % 2 == 0 && n > 2) {
		isPrime = 0;
//		printf("%d is not a Prime Number.", %n);
	}
	else if(n % 3 == 0 && n > 2) {
		isPrime = 0;
	}
	else{
		for(i = 5;i < n;i=i+4) {
			count++;
			if(n % i == 0) {
				isPrime = 0;
				break;
			}
			i = i + 2;
			if(n % i == 0) {
				isPrime = 0;
				break;
			}
		}
	}
// 
	if(isPrime) {
		printf("%d is a Prime Number. \n", n);	
	}
	else {
		printf("%d is not a Prime Number. \n", n);
	}
//
	printf("Count of opertions = %d \n", count);
}
