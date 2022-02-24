// SAGAR BALWANI
//
// f_evenodd.c - To print the even and odd numbers in two separate output files usinf file pointers.
// Input: An integer
// Output: Even and odd numbers upto the unputted integer in two separate files.
// Logic:
// 	Step1: Get an input from user and also open two text files for printing the output.
//	Step2: Use a for-loop to separate even and off numbers and print it in the respective files.
//
//  
# include <stdio.h>
//
void main() {
	int n, i;
	FILE *fp_o, *fp_e;
	//
	// Input
	printf("Enter a number: ");
	scanf("%d", &n);
	//
	// Output files
	fp_o = fopen("f_odd.txt", "w");
	fp_e = fopen("f_even.txt", "w");
	//
	//
	// Logic and Output
	if (fp_e == NULL || fp_o == NULL) {
		printf("ERROR!\n");
	}
	else {
		fputs("All the odd numbers are as follows: \n", fp_o);
		fputs("All the even numbers are as follows: \n", fp_e);
		for (i = 0; i <= n; i++) {
			if (i % 2 == 0) {
				fprintf(fp_e, "%d, ", i);
			}
			else {
				fprintf(fp_o, "%d, ", i);
			}
		}
	}
	//
	// Final Output
	printf("All numbers inputted successfully in files fp_o(odd) and fp_e(even).\n");
	// closing all files
	fclose(fp_o);
	fclose(fp_e);
	printf("Files closed successfully.\n");
}
//
/*
For n = 100, output will be as follows: 


f_even.txt
All the even numbers are as follows: 
0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76, 78, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98, 100, 



f_odd.txt
All the odd numbers are as follows: 
1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65, 67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97, 99, 
*/
//
// EOF
