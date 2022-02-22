// NAME :- SAGAR BALWANI
//
//inpercen01.c - To input your marks (in percentage) greater than 70%
//
// Input: marks 
// Output: Validity of marks (re)
// Logic: re = marks >= 70
//
// Header File
# include <stdio.h>
//
void main() {
	float marks, re;
// Input
	printf("Enter your Percentage greater than 70: ");
	scanf("%f", &marks);
// Logic
	re = marks >= 70;
// Output
	printf("Your marks are %5.2f%% \n", marks);
	printf("True (1) if acceptable, False (0) if not: %1.0f \n", re);
}
