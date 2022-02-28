// SAGAR BALWANI
//
// matrix_01.c - A simple program to take an input for the matrix and print it.
// Input: 	(1) The number for rows and columns of the matrix.
//		(2) The elements of the matrix.
// 
// Output: The output will be a matrix with inputted elements.
// Logic:
// 	Step1: Take an user-input for number of rows and columns followed by the elements of the matrix.
// 	Step2: The elements of the matrix will be taken in nested for-loops.
// 	Step3: Print the output in the same form of nested for-loops
//
//
#include <stdio.h>
int main(){
	int i,j,m,n,a[10][10];
	//
	// Input
	printf("Enter the number for rows and column of matrix A: ");
	scanf("%d%d", &m, &n);
	//
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("a[%d][%d] = ", i+1, j+1);	// to show the index of element of the matrix		
			scanf("%d",&a[i][j]);
        }
    }
    //
    // Output
	printf("/////////////////////////////\n");
    //
    for(i=0;i<m;i++){
	for(j=0;j<n;j++){
        	printf("%d     ", a[i][j]);  
        }
        printf("\n");
    }
  //
  return 0;
}
//
// EOF
