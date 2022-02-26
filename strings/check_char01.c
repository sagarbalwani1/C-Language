// SAGAR BALWANI
//
// check_char01.c - To check if the inputted character is a vowel, consonant, digit or special character.
// Input: A character
// Output: Statement saying if a character is vowel, digit, consonant or special character.
// Logic: 
//	Step1: Take a character as user-input.
// 	Step2: Firstly, check if it is a Alphabet or not.
// 	Step3: If it is a alphabet, then check if its vowel or consonant and return its value respectively.
//	Step4: If it is not a alphabet, then check if it is a number and return its respective value.
// 	Step5: If it is not even a number, then it is a special character and return its respective value from the function.
//
//
# include <stdio.h>
//
// Declaration of all the user-defined functions
char getdata();
int check01(char);
void display(int);
//
// Main Function
//
void main() {
	char n;
	int c;
	//
	// Below Function to take user input
	n = getdata();
	//
	// Below Function is to check what the character is.
	c = check01(n);
	//
	// Below Function is to Display the output
	display(c);
	//
}
//
// Function-1: Function to get user input
//
char getdata() {
	char c;
	printf("Enter a Character: ");
	scanf("%c", &c);
	return c;
}
//
// Function-2: Function to check what the inputted character is.
//
int check01(char c) {
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {	
		if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U') {
			return 0;
		}
		else {
			return 1;
		}
	}
	//
	if (c >= '0' && c <= '9') {
		return 2;
	}
	return 3;
}
//
// Function-3: Function to display the output
//
void display(int c) {
	if (c == 0) {
		printf("The above character is a VOWEL.\n");
		return;
	}
	if (c == 1) {
		printf("The above character is a CONSONANT.\n");
		return;
	}
	if (c == 2) {
		printf("The above character is a NUMBER.\n");
		return;
	}
	else {	
		printf("The above character is a SPECIAL CHARACTER.\n");
	}
}
//
// EOF