// NAME :- SAGAR BALWANI
//
// 2conditions01.c - Accept a number from the user and print it if it is between 18 and 45 (both inclusive), 
// else print the message “Number is out of range”
// Input: input a number
// Output: print the input if it is between 18 and 45 else print number is out of range
// Logic: Trivial
//
# include <stdio.h>
//
void main() {
	int int1;
// Input
	printf("Enter a number which is between 18 and 45: ");
	scanf("%d", &int1);
// Logic and Output
	if(int1 >= 18 && int1 <= 45) {
		printf("%d \n", int1);
	}
//
	else {
		printf("The number is not between [18, 45]. \n");
	}
//
}
