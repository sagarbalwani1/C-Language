// SAGAR BALWANI
//
// switch_day.c - A basic program using switch statements in a user-defined function.
// Input: A Number corresponding to a day name.
// Output: Day corresponding to that name.
// Logic: 
// 	Step1: Take user-input and pass the value as parameter in function-1
//	Step2: Print the day-name as per the corresponding inputted number.
//
// 
#include <stdio.h>
//
// Declaration of used functions
void sw_day(int);
//
//
// Function-1: Function to implement switch case
//
void sw_day1(int n) {
	switch (n) {
		case 1: printf("Monday\n");
		break;
		case 2: printf("Tuesday\n");
		break;
		case 3: printf("Wednesday\n");
		break;
		case 4: printf("Thursday\n");
		break;
		case 5: printf("Friday\n");
		break;
		case 6: printf("Saturday\n");
		break;
		case 7: printf("Sunday\n");
		break;
		default: printf("Enter a Proper number.\n"); 
	}
}
//
//
// Main Function
//
void main() {
	int n;
	// Input
	printf("Enter a number of any day: ");
	scanf("%d", &n);
	// Logic and Output
	sw_day1(n);
}
//
// EOF
