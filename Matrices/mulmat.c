// SAGAR BALWANI
//
// mulmat.c - To perform multiplication on two matrices and store the resultant matrix in the third array.
//
// Input: 	(1) Number for rows and columns for the first matrix followed by its elements.
// 		(2) Number of columns of the second matrix followed by its elements.
//
// Output: The resultant matrix will be the product of the two inputted matrices.
//
// Logic: 
//	Step1: Take user-input for number of rows and columns followed by the elemnts of the matrix.
// 	Step2: Take input for number of columns of second matrix followed by the elements of the matrix.
// 	Step3: Multiply the elemnts by applying a certain logic.
// 	Step4: Store the resultant values of third matrix in a different array and print it.
//
//
#include<stdio.h>
void main() {
    int m, n, i, j, a[10][15], b[10][15], c[10][15], b1;
    int k, sum=0;
    //
    // Input
    printf("enter two value, m and n: ");
    scanf("%d %d", &m, &n);
    //
    for(i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("a(%d, %d) = ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
	//
	 printf("We have a value of row = %d. ENTER VALUE OF COLUMN: ", n);	// Since value of column of 1st matrix will be 
    	 scanf("%d", &b1);							// equal to value of row of second matrix
	//
	//
	for (i = 0; i < n; i++) {
		for (j = 0; j < b1; j++) {
		    printf("b(%d, %d) = ", i+1, j+1);
		    scanf("%d", &b[i][j]);
		}
	}
    //

//////////////////////////////////////////////////////////
// Logic
    for (i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            sum = 0;
            for (k = 0; k < n; k++) {
                sum = sum + (a[i][k]*b[k][j]);
            }
            c[i][j] = sum;
        }

    }
//////////////////////////////////    
//
// Output
    for (i = 0; i < m; i++) {
        for(j = 0; j < b1; j++) {
            printf("%d	  ", c[i][j]);
        }
        printf("\n");
    }
    //
}
//
// EOF