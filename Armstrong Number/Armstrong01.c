// SAGAR BALWANI
//
// Armstrong01.c - To check if the inputted number is a Armstrong number or not.
//
// Input: An integer.
//
// Output: Statement saying that the inputted number is an Armstrong Number or not.
//
// Logic:
// 	Step1: Take user-input for an integer.
//	Step2: Extract each digit from the inputted number and than take cube of the extracted digit.
//	Step3: Then add all the cubes and check if the sum is equal to the inputted number or not.
//	Step4: If both are equal, Then the inputted number is an Armstrong Number. Else, It is not an Armstrong Number.
//
//
# include <stdio.h>
void main() {
	int sum1, n, r, n1;
	//
	// Input
	printf("Enter n value: ");
	scanf("%d", &n);
	//
	// Logic
	n1 = n;
	while (n1 != 0) {
		r = n1 / 10;
		sum1 = sum1 + r*r*r;
		n1 = n1 / 10;
	}
	//
	// Output
	if (sum1 == n) {
		printf("%d is an ARMSTRONG Number \n", n);
	}
	else {
		printf("%d is NOT an ARMSTRONG Number \n", n);
	}
}
//
// EOF
