// NAME:- SAGAR BALWANI
// inage01.c - Input your age, which should be greater or equal to 18
//
// Input: Age (a)
// Output: True (1) if age is 18, or False (0)
// Logic: Relational Operator (re) = a >= 18
//
# include <stdio.h>
//
void main() {
	int a, re1;
// Input
	printf("Enter Your age: ");
	scanf("%d", &a);
// Logic
	re1 = a >= 18;
// Output
	printf("The below information concludes if you are Eligible or Not: (a) True (1), (b) False (0) \n");
	printf("Your age is %d and your eligibility depends on: %d \n", a, re1);
}
