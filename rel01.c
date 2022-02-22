// rel01.c - To print values of relational expressions
// Input :- None 
// Output :- Value of the relational expression
// Logic :- None
//
# include <stdio.h>
//
void main() {
	int l1, l2, l3, l4, l5, l6;
	l1 = 5 < 3;
	l2 = 5 > 3;
	l3 = 7 < 7;
	l4 = 7 <= 7;
	l5 = 7 > 7;
	l6 = 7 >= 7;
// Output
	printf("5 < 3 = %d, \n5 > 3 = %d, \n7 < 7 = %d, \n7 <= 7 = %d, \n7 > 7 = %d, \n7 >= 7 = %d\n", l1, l2, l3, l4, l5, l6);
}
