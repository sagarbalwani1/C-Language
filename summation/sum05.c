// NAME :- SAGAR BALWANI
//
// sum05.c - To store all the numbers in an array and then to add them and print it
//
// Input: To store the numbers in array
// Output: Addition of numbers stored in the arrays
// Logic: (1) Store the characters one by one in an array using for loop
// (2) Then add the characters using for loop and then print it
//
# include <stdio.h>
//
void main() {
	int n, i, sum1, str1[100];
// Input
	printf("Enter the count of numbers to be added: ");
	scanf("%d", &n);
// Logic  
	for(i = 0;i < n;i++) {
		printf(" ");
		scanf("%d", &str1[i]);
	}
//Output
	sum1 = 0;
	for(i = 0;i < n;i++) {
		sum1 = sum1 + str1[i];
	}
	printf("The addition of inputted natural numbers with count %d is = %d \n", n, sum1);
}
