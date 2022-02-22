// NAME : Sagar Balwani
//
// concm01.c - Conversion from centimeter to various other units.
//
// Input - input a value with cm unit
// Output - converted value in different units
/*
Logic:- To convert in
	Millimeters (mm) = cm * 10 
	Inches (in) = cm / 2.54
	Decimeters (dm) = cm / 10
	Foot (ft) = cm / 30.48 
	Meters (m) = cm / 100 
	Kilometers (km) = cm / 100000
	Miles (mi) = cm / 160934.4
*/
//
# include <stdio.h>
//
void main() {
	float cm, mm, in, dm, ft, m, km, mi;
// Input
	printf("Enter the value in Centimeters (cm): ");
	scanf("%f", &cm);
// Logic
	mm = cm * 10;
	in = cm / 2.54;
	dm = cm / 10;
	ft = cm / 30.48;
	m = cm / 100;
	km = cm / 100000;
	mi = cm / 160934.4;
// Output
	printf("The output of converted values is as follows: \n");
	printf("Millimeters (mm) = %f \n", mm);
	printf("Inches (in) = %f \n", in);
	printf("Decimeters (dm) = %f \n", dm);
	printf("Foot (ft) = %f \n", ft);
	printf("Meters (m) = %f \n", m);
	printf("Kilometers (km) = %f \n", km);
	printf("Miles (mi) = %f \n", mi); 
}
