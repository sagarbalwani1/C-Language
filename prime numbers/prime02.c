// NAME :-  SAGAR BALWANI
//
// prime02.c - To print all the prime nubmbers until that inputted number
//
// Input: An integer >= 2
// Output: Print all the prime numbers until n
// Logic: test the number by dividing it with integers upto n
//
# include <stdio.h>
//
void main() {
	int i, j, n, count, str1;
// Input
	printf("Enter an integer >= 2: ");
	scanf("%d", &n);
// Logic and Output
	count = 0;
	printf("All the integer prime numbers upto %d are: ", n);
// To print 2
	if (n >= 2) {
		printf("2, ");
		count++;
	}
// To print other numbers
	for(i = 2;i < n;i++) {
		count++;
			for(j = 2;j < i;j++) {
			if(i % j == 0) {
				str1 = 0;
				break;
			}
			
//		
			else{
				str1 = i;
			}
		}
		if (str1 && i != 2) {
			printf("%d, ", str1);
		}
//
	}
	printf("\nCount of opertions = %d \n", count);
}
