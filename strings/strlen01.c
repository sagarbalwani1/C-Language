// NAME :- SAGAR BALWANI
//
// strlen01.c - To input a string and calculate its length
//
// Input: A String
// Output: Length of inputted string
// Logic: None
//
# include <stdio.h>
//
void main() {
	char c;
	int i;
// Input 
	printf("Enter a string: \n");
// Logic
	i = 0;
	while ((c = getchar()) != '\n') {
		i++;
	}
// Output
	printf("The length of the above string is %d. \n", i);
}
