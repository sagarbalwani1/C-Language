// SAGAR BALWANI
//
// f_primes.c - To get all the prime numbers upto inputted integer and store it in a file named f_prime.txt.
// Input: An integer
// Output: A text file named f_prime.txt with all the prime numbers upto that inputted integer.
// Logic: 
//	Step1: Take a number as user-input and also open a text file for storing the output.
// 	Step2: Print all the prime numbers upto the inputted number using loops and conditional statements.
// 	Step3: Close the file pointers.
//
//
# include <stdio.h>
void main() {
	int n, i, j, ischeck01;;
	FILE *fp;
	//
	// Input
	printf("Enter a number: ");
	scanf("%d", &n);
	//
	fp = fopen("f_prime.txt", "w");
	//
	// Logic and Output
	fprintf(fp, "All PRIME NUMBERS upto %d are as follows: \n", n);
	if (n >= 2) {
		fputs("2, ", fp);
	}
	for (i = 3; i <= n; i=i+2) {
		ischeck01 = 1;
		for (j = 3; j < i; j=j+2) {
			if (i % j == 0) {
				ischeck01 = 0;
				break;
			}
		}
		//
		if (ischeck01) {
			fprintf(fp, "%d, ", i);
		}
	}
	fputs("\n", fp);
	//
	// Final output on the terminal
	printf("All the prime numbers are entered in file f_prime.txt\n");
	fclose(fp);		// File closed
	printf("File closed successfully.\n");
	//
}
//
// EOF