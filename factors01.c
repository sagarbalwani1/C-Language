// NAME :- SAGAR BALWANI
//
// factors01.c - To find all the factors of the given numbers
//
// Input: A natural number
// Output: The number with its factors
/* Logic:  
	for(i=2;i<=int1;i++) {
	t = int1 % i;
	if (t == 0) {
		printf("%d, ", i);
		int1 = int1 / i;
		i = i-1;
	}
*/
//
# include <stdio.h>
//
void main() {
	int int1, i, count, t;
// Input
	printf("Enter a Positive number: ");
	scanf("%d", &int1);
// Output
	printf("The factors of the number %d are: ", int1);
// Logic
	count = 0;
	for(i=2;i<=int1;i++) {
		t = int1 % i;
		if (t == 0) {
			printf("%d, ", i);
			int1 = int1 / i;
			i = i-1;
		}
	count++;
	}
	printf("\nThe count is = %d \n", count);
}
