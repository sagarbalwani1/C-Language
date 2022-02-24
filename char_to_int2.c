// SAGAR BALWANI
//
// char_to_int.c - to convert the inputted characters(numbers) to integers
// Input: A number in string format
// Output: The inputted number in integer format.
// Logic:
// 	Step1: Take input of numbers as a character array.
// 	Step2: Take each character and convert it into number
// 	Step3: Keep adding all the converted numbers in an integer variable while multiplying them with their corresponding place values
//
//
# include <stdio.h>
void main() {
	int final=0, count=0,num1=1, temp;
	char arr02[100];
	printf("Enter a number: ");
	scanf("%s", arr02);			// input of numbers as a string of characters
	//
	while (arr02[count] != '\0') {
		count++;			// counting the length of the array
	}
	count--;				// decreasing the count by one since we don't need null character to count
	while (count>=0) {
		temp = (arr02[count--] -'0') * num1;	// converting the char to number
		final = final + temp;			// adding it in the int variable
		num1 = num1 * 10;			// changing the place value for each integer
	}
	printf("CONVERTED INTEGER = %d\n", final);
}
//
// Example: Input 1024(as characters)
// Output: 1024 (as integers)
//
// EOF