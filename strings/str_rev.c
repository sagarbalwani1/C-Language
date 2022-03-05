// SAGAR BALWANI
//
// str_rev.c - Program to find the reverse of an inputted string.
//
// Input: A string
//
// Output: Reverse of the inputted string.
//
// Logic: 
// 	Step1: Call a function for taking user-input of a string
//	Step2: Call another function for  doing the reverse of the string
//	Step3: Call the third function to display the reversed string.
//
//
# include <stdio.h>
//
// User-Defined Functions
void getdata(char []);
void reverse(char [], char []);
void display(char [], char []);
//
// Main Function
void main() {
	char s1[20], s2[20];
	getdata(s1);
	reverse(s1, s2);
	display(s1, s2);
}
//
// Function-1: The Function to take user-input
void getdata(char s1[]) {
	printf("Enter the string: \n");
	// scanf("%s", s1);
	// gets(s1);
	fgets(s1, sizeof(20), stdin);
}
//
// Function-2: The Function to reverse the string and store it in another array
void reverse(char s1[], char s2[]) {
	int i, j=0, n;
	for (i = 0; s1[i] != '\0'; i++) {
		;
	}
	//
	i--;
	for (n = i; n>=0; n--) {
		s2[j++] = s1[n];
	}
	s2[j] = '\0';
}
//
// Function-3: Function to display the output
void display(char s1[], char s2[]) {
	printf("The original string is %s and the reverse string is %s.\n", s1, s2);
}
//
// EOF