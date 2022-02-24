// NAME :- SAGAR BALWANI
// 
// even_odd1.c - To check whether the input number is odd or even
//
// Input: To input an integer
// Output: to verify if it is odd or even
// Logic: int1 = x % 2
//
# include <stdio.h>
//
void main() {
	int x;
// Input
	printf("Input an integer: ");
	scanf("%d", &x);
// Logic
// If-Else Loop
	if(x % 2 == 0){
		printf("Your given number %d is EVEN\n", x);
	}
	//
	else{
		printf("Your given number %d is ODD\n", x);
	}
} 
