// SAGAR BALWANI
//
// calc.c - A normal functional calculator using Switch statement.
// Input: A choice given from the list and then the corresponding values.
// Output: Value of Arithmetic Operation of the chosen number.
// Logic: 
//	Step1: Enter the choice from the given list.
//	Step2: Using switch statement and calling the function assigned to the choice input.
//	Step3: The Function will ask for the corresponding values to calculate and wil print the output.
//
// 
# include <stdio.h>
//
// Declaration of all functions used
void add();
void sub();
void quo();
void mul();
void mod();
void pow1();
//
//
// Main Function
//
void main() {
	int choice;
	//
	// Input
	printf("(1). Perform Addition of two numbers.\n");
	printf("(2). Perform Subtraction of two numbers.\n");
	printf("(3). Perfrom Division to find QUOTIENT of two numbers.\n");
	printf("(4). Perform Multiplication of two numbers.\n");
	printf("(5). Perform Division of two numbers to find remainder.\n");
	printf("(6). Simplify the no. using EXPONENT and POWER.\n");
	printf("Enter any above choice number.\n");
	scanf("%d", &choice);
	//
	//
	// Logic and Output
	//
	switch(choice) {
		case 1: add();
		break;
		case 2: sub();
		break;
		case 3: quo();
		break;
		case 4: mul();
		break;
		case 5: mod();
		break;
		case 6: pow1(); 
		break;
	}
	//
	
}
//
// CASE-1: (1). Perform Addition of two numbers.
void add() {
	float n1, n2, sum, max, min;
	//
	// Input
	printf("YOU CHOSE: (1). Perform Addition of two numbers.\n");
	printf("Enter two numbers: ");
	scanf("%f %f", &n1, &n2);
	//
	// Logic
	max = n1;
	min = n2;
	if (min > n1) {
		min = n1;
		max = n2;
	}
	//
	sum = max + min;
	//
	// Output
	printf("The SUM of %f and %f is %f.\n", max, min, sum);
	//
}
//
//
// CASE-2: (2). Perform Subtraction of two numbers.
void sub() {
	float n1, n2, diff, max, min;
	//
	// Input
	printf("YOU CHOSE: (2). Perform Subtraction of two numbers.\n");
	printf("Enter two numbers: ");
	scanf("%f %f", &n1, &n2);
	//
	// Logic
	max = n1;
	min = n2;
	if (min > n1) {
		min = n1;
		max = n2;
	}
	//
	diff = max - min;
	//
	// Output
	printf("The SUBTRACTION of %f and %f is %f.\n", max, min, diff);
	//
}
//
//
// CASE-3: (3). Perfrom Division to find QUOTIENT of two numbers.
void quo() {
	int n1, n2, quo, max, min;
	//
	// Input
	printf("YOU CHOSE: (3). Perfrom Division to find QUOTIENT of two numbers.\n");
	printf("Enter two numbers: ");
	scanf("%d %d", &n1, &n2);
	//
	// Logic
	max = n1;
	min = n2;
	if (min > n1) {
		min = n1;
		max = n2;
	}
	//
	quo = max / min;
	//
	// Output
	printf("The QUOTIENT of %d and %d is %d.\n", max, min, quo);
	//
}
//
//
// CASE-4: (4). Perform Multiplication of two numbers.
void mul() {
	float n1, n2, mul, max, min;
	//
	// Input
	printf("YOU CHOSE: (4). Perform Multiplication of two numbers.\n");
	printf("Enter two numbers: ");
	scanf("%f %f", &n1, &n2);
	//
	// Logic
	max = n1;
	min = n2;
	if (min > n1) {
		min = n1;
		max = n2;
	}
	//
	mul = max * min;
	//
	// Output
	printf("The PRODUCT of %f and %f is %f.\n", max, min,mul);
	//
}
//
//
// CASE-5: (5). Perform Division of two numbers to find remainder.
void mod() {
	int n1, n2, mod, max, min;
	//
	// Input
	printf("YOU CHOSE: (5). Perform Division of two numbers to find remainder.\n");
	printf("Enter two numbers: ");
	scanf("%d %d", &n1, &n2);
	//
	// Logic
	max = n1;
	min = n2;
	if (min > n1) {
		min = n1;
		max = n2;
	}
	//
	mod = max % min;
	//
	// Output
	printf("The REMAINDER after DIVIDING  %d and %d is %d.\n", max, min,mod);
	//
}
//
//
// CASE-6: (6). Simplify the no. using EXPONENT and POWER.
void pow1() {
	float n1, min, pow=1;
	int i, n2;
	//
	// Input	
	printf("YOU CHOSE: (6). Simplify the no. using EXPONENT and POWER.\n");
	printf("Enter the number: ");
	scanf("%f", &n1);
	//
	printf("Enter the POWER: ");
	scanf("%d", &n2);
	//
	// Logic
	for (i = 0; i < n2; i++) {
		pow = pow * n1;
	}
	//
	// Output
	printf("The Evaluation of number %f with its power %d is %f.\n", n1, n2, pow);
	//
}
//
//
// EOF