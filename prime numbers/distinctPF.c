// SAGAR BALWANI
//
// distinctPF.c - To find the distinct Prime Factors of the inputted number and find the closest number whose gcd is 1 with the inputted number and is a
//		  composite number
//
// Input: An integer
// Output:	(1) The Prime Factors Of the inputted number
//		(2) Then Find NUM1 And NUM2 which are prime numbers other then the above factors of the inputted number
//		(3) The Result Y will be a product of NUM1 and NUM2 which will have G.C.D  1  with the inputted number.
// Logic:
//	Step1: Take an integer as user-input and Find its Prime Factors.
// 	Step2: Now, Find two closest Prime Numbers Such that they are not equal to the above Prime Factors.
// 	Step3: Name the Prime Numbers as NUM1 and Num2 and Multiply them.
//	Step4: The Resultant Product Y will be in such a way that its G.C.D with the inputted number will be 1.
//
//
# include <stdio.h>
void main() {
	int x,i,a[100],b[100],num1,j,count=0,z=0,num2 = 0;
	int n1 = 1, ischeck, incr=0;
	//
	// Input
	printf("ENTER A NUMBER: ");
	scanf("%d",&x);
	num1=x;					// Inputted Number
	for(i=2;i<=x;i++){
		if(num1%i==0){
			num1=num1/i;
			if (num2 != i) {
				a[z++] = i;
				num2 = i;
			}
			i--;
		}
		if(num1 == 1) {
			break;
		}
	}
	for(j=0;j<z;j++){
		printf("%d\n",a[j]);		// Prime Factors of the Inputted Number
	}
	///////////
	for (i = 2; i <= 1000; i++) {
		ischeck  = 1;
		for (j = 0; j < z; j++) {
			if (a[j] == i || i % a[j] == 0 || i % b[j] == 0) {
				ischeck = 0;
				break;
			}
		}
		if (ischeck) {
			count++;
			printf("NUM%d = %d\n", count, i);		// Printing NUM1 and NUM2
			n1 = n1 * i;					// Product of NUM1 and NUM2
			b[incr++] = i;
		}
		if (count == 2) {
			break;
		}
	}
	//////
	printf("Y = %d\n", n1);						// Printing the Product
}
//
/*
Sample Input: 
34

Output:
2
17
NUM1 = 3
NUM2 = 5
Y = 15

*/
//
// EOF