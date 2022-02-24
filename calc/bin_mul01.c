// SAGAR BALWANI
//
// bin_mul01.c - To multiply two binary numbers and print the answer.
// Input: Two Binary Numbers (0's and 1's).
// Output: Product of the two inputted binary numbers.
// Logic: 
//	Step1: Get user-input of two binary numbers.
// 	Step2: Convert the numbers from binary to decimal using Function-1.
// 	Step3: Multiply both the converted decimal numbers.
//	Step4: Convert the product to binary number system using function-2.
// 	Step5: Printf the final answer.
//
//
# include <stdio.h>
//
// Declaration of user-defined functions
int bintodec(int);
int dectobin(int);
//
//
// Function-1: Function used to convert binary number to decimal
//
int bintodec(int n) {
	int a[20], i, r, z=0, sum=0, two = 1;
	//
	while(n > 0) {
		r = n % 10;
		a[z++] = r;
		n = n / 10;
	} 
	//
	if (a[0] == 1) {
		sum = 1;
	}
	for (i = 1; i < z; i++) {
		two = two * 2;
		if (a[i] == 1) {		
			sum = sum + two;
		}
	}
	//
	return sum;
}
//
//
// Function-2: Function used to convert decimal to binary number
//
int dectobin(int n) {
	int r, ans=0, add = 1;
	while (n > 0) {
		r = n % 2;
		if (r == 1) {
			ans = ans + add;
		}
		add = add * 10;
		n = n / 2;
 	}
	return ans;
}
//
// Function-3: Main Function
//
void main() {
	int n1, n2, num1, num2, bin, ans;
	//
	// Input
	printf("Enter a binary number: ");
	scanf("%d", &n1);
	//
	printf("Enter second number: ");
	scanf("%d", &n2);
	//
	// Logic
	num1 = bintodec(n1);
	num2 = bintodec(n2);
	ans = num1 * num2;
	bin = dectobin(ans);
	//
	// Output
	printf("num1 = %d\nnum2 = %d\n", num1, num2);
	printf("ans = %d\n", ans);
	printf("Final Answer: %d\n", bin);
}
//
// EOF
