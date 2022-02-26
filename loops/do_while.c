// SAGAR BALWANI
//
// do_while.c - A sampple program to understand how do-while loop works
// Input: An Integer
// Output: All The EVEN Numbers upto that integer.
// Logic: 
//	Step1: Get an User-input.
//	Step2: Run a variable i, which starts from 0 and  check if it is divisible by 2
//	Step3: If it is divisible by 2, print it. Else, Do Nothing.
// 	Step4: Increment the value of i and check if it is less than or equal to one or not.
// 	Step5: Keep repeating the above processs until variable i becomes equal to n.
//
// 
# include <stdio.h>
void main() {
	int n, i=0;
	//
	// Input
	printf("Enter a number: ");
	scanf("%d", &n);
	//
	// Logic and Output
	//
	printf("All the even numbers upto %d are: \n", n);
	do {
		if (i % 2 == 0) {
			printf("%d, ", i);
		}
		//
		i++;
		//
	} while(i <= n);
	//
	printf("\n");
	//
}
//
// EOF