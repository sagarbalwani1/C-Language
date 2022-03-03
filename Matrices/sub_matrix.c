// SAGAR BALWANI
//
// sub_matrix.c - To subtract the elements of one matrix from the corresponding elements of another matrix.
//
// Input: Values for number of rows and column followed by the elements of two matrices to be subtracted.
//
// Output: A Matrix with resultant values of subtraction.
//
// Logic: 
//	Step1: Take User-input for number of row and column of the matrix.
// 	Step2: Take user-input for two matrices that are to be subtracted.
// 	Step3: Subtract the corresponding elements of each matrix and store it in the third array
// 	Step4: Print the Final Output array
//
//
#include<stdio.h>
    void main(){
        int m,n,i,j,a[10][15],b[10][15],c[10][15];
	//
	// Input
        printf("enter two value for row and coloum= ");
        scanf("%d %d",&m,&n);

        for(i = 0; i < m; i++){
            for(j = 0; j < n; j++){
                printf("a(%d,%d) = ", i+1, j+1);
                scanf("%d", &a[i][j]);
                printf("b(%d,%d) = ", i+1 ,j+1);
               scanf("%d", &b[i][j]);
            }
        }
        //
        // Logic
        for(i = 0; i < m; i++){
            for(j = 0; j < n; j++){
                c[i][j] = a[i][j] - b[i][j];
            }
           
        }
        //
        // Output
        printf("//////////////////\n");
        for(i = 0; i < m; i++){
            for(j = 0; j < n; j++){
                printf("%d  ",c[i][j]);
            }
           printf("\n");
        }
    }
//
// EOF