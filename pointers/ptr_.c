// SAGAR BALWANI
//
// ptr_.c - To perform mathematical operations using pointers.
//
// Input: Enter two integers
//
// Output: Differnt mathematical operations using pointers.
//
// Logic: 
//	Step1: Take user-input for two integers.
//	Step2: Assign two different pointers on two variables.
//	Step3: Perform MAthematical operations and store the ouput in different variables.
//	Step4: Print all the Results at the end.
//
// 
# include <stdio.h>
void main() {
    int a, b, *ap, *bp, *sp;
    int sum, diff, product, quotient, remainder, total;
    //
    // Input
    printf("Enter First Value: ");
    scanf("%d", &a);
    //
    printf("Enter Second Value: ");
    scanf("%d", &b);
    //
    // Logic
    ap = &a;			// Assigning the first variable to a pointer
    //
    bp = &b;			// Assigning the second variable to a pointer
    //
    sum = *ap + *bp;		// Performing Addition
    //
    diff = *ap - *bp;		// Performing Subtraction
    //
    product = *ap * *bp;	// Performing Multiplication
    //
    quotient = *ap / *bp;	// Performing Division(QUOTIENT)
    //
    remainder = *ap % *bp;	// Performing Division(REMAINDER)
    //
    sp = &total;		// Assigning the total variable
    //
    *sp = *ap + *bp;		// Adding and storing the result in total variable
    //
    // Output
    printf("Sum = %d\n", sum);
    printf("Diff = %d\n", diff);
    printf("Product = %d\n", product);
    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);
    printf("Sum another way = %d\n", total);
}
//
// EOF