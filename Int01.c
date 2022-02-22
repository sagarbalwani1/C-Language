// Int01.c - Compute Simple Interest for a given Principal Amount (p), Rate of Interest (r), Time Period (t)
// Int = p * r * t / 100  (t is to be converted to number of years)
// Input: p, r, t
// Output: si
// Logic: Int = p * r * t / 100 
//
# include <stdio.h>
//
void main() {
	float p, r, t, Int, end;
// Input
	printf("Enter (1) Principal amount, (2) Rate of interest, (3) Time Period: ");
	scanf("%f %f %f", &p, &r, &t);
// Logic
	Int = p * r * t / 100;
	end = Int + p;
// Output
	printf("For P = %f,r = %f, t = %f, Simple Interest = %f\n", p, r, t, Int);
	printf("The amount at the end of the time period will be %6.2f. \n", end);

} 
