// NAME :- SAGAR BALWANI
//
// str03.c - To take character (string) inputs using getchar(), store it in character array and then print it
//
// Input: A String
// Output: Inputted string by using printf
// Logic: Store characters in the string (char array)
//
# include <stdio.h>
//
void main() {
	char c, a[1000];
	int i;
// Input and Logic
	i = 0;
	while((c = getchar()) != EOF){
		a[i] = c;
		i++;
	}
	a[i] = '\0';
//
	printf("%s \n", a);
	printf("COUNT = %d \n", i);
//
} 
