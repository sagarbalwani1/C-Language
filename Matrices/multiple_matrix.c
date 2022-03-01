// SAGAR BALWANI
//
// multiple_matrix.c - To perform multiple operations on matrices as per the choice of the user.
//
// Input: The choice of the operation followed by its respective input.
//
// Output: The output will be based on the respective function chosen by the user.
//
// Logic: 
// 	Step1: Call in a Function to take the user-input for the choice.
// 	Step2: The use switch statements to go to the respective functions.
// 	Step3: Every function has its respective input, logic and output.
//
//
# include<stdio.h>
//
// Declaration of all user-defined funcitons
//
int choice01();
void diagonal(int [][30]);
void unit(int [][30]);
void equal(int [][30], int [][30]);
void transpose(int [][30]);
void add(int [][30], int [][30], int [][30]);
void sub(int [][30], int [][30], int [][30]);
void mul(int [][30], int [][30], int [][30]);
//
// Main Function
void main() {
	int a[30][30], b[30][30], c[30][30], choice;
	//
	// Input
	choice = choice01();
	//
	// Logic
	switch (choice) {
		case 1: diagonal(a);
		break;
		case 2: unit(a);
		break;
		case 3: equal(a, b);
		break;
		case 4: transpose(a);
		break;
		case 5: add(a, b, c);
		break;
		case 6: sub(a, b, c);
		break;
		case 7: mul(a, b, c);
		break;
		default: printf("Invalid Input\n");
	}
		
}
//
// Function-1: Function to take user-input for choice 
int choice01() {
	int n;
	printf("(1). Check if the inputted matrix is a DIAGONAL MATRIX.\n");
	printf("(2). Check if the inputted matrix is a UNIT MATRIX.\n");
	printf("(3). Check if two inputted matrices are EQUAL OR NOT.\n");
	printf("(4). Convert the inputted matrix into is corresponding TRANSPOSE MATRIX.\n");
	printf("(5). Add Two inputted matrices.\n");
	printf("(6). Subtract Two inputted matrices.\n");
	printf("(7). Multiply Two inputted Matrices.\n");
	printf("Enter the number of operation you want to do with matrices: \n");
	scanf("%d", &n);
	return n;
}
//
// Function-2:
// CASE-1: (1). Check if the inputted matrix is a DIAGONAL MATRIX.
void diagonal(int a[][30]) {
	int m, i, j;
	printf("YOU CHOSE: (1). Check if the inputted matrix is a DIAGONAL MATRIX.\n");
	//
	// Input
	printf("Enter The number of ROW and COLUMN, where row = column(): ");
	scanf("%d", &m);
	//
	printf("Enter the elements of the matrix: ");
	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++) {
			printf("a[%d][%d] = ", i+1, j+1);
			scanf("%d", &a[i][j]);			
		}
	}
	//
	printf("The Matrix is as follows: \n");
	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++) {
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	//
	// Logic and Output
	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++) {
			if (i == j && a[i][j] == 0 || i != j && a[i][j] != 0) {
				printf("The above Matrix is not a DIAGONAL MATRIX.\n");
				return;
			}
		}
	}
	printf("The above Matrix is a DIAGONAL MATRIX.\n");
}
//
// Function-3: 
// CASE-2: (2). Check if the inputted matrix is a UNIT MATRIX.
void unit(int a[][30]) {
	int m, i, j;
	printf("YOU CHOSE: (2). Check if the inputted matrix is a UNIT MATRIX.\n");
	//
	// Input
	printf("Enter The number of ROW and COLUMN, where row = column(): ");
	scanf("%d", &m);
	//
	printf("Enter the elements of the matrix: ");
	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++) {
			printf("a[%d][%d] = ", i+1, j+1);
			scanf("%d", &a[i][j]);			
		}
	}
	//
	printf("The Matrix is as follows: \n");
	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++) {
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	//
	// Logic and Output
	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++) {
			if (i == j && a[i][j] != 1 || i != j && a[i][j] != 0) {
				printf("The above Matrix is not a UNIT MATRIX.\n");
				return;
			}
		}
	}
	printf("The above Matrix is a UNIT MATRIX.\n");
}
//
// Function-4: 
// CASE-3: (3). Check if two inputted matrices are EQUAL OR NOT.
void equal(int a[][30], int b[][30]) {
	int m, n, m1, n1, i, j;
	printf("YOU CHOSE: (3). Check if two inputted matrices are EQUAL OR NOT.\n");
	//
	// Input
	printf("Enter The number of ROW and COLUMN for MATRIX: ");
	scanf("%d %d", &m, &n);
	//
	printf("Enter the elements of the FIRST matrix: ");
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("a[%d][%d] = ", i+1, j+1);
			scanf("%d", &a[i][j]);			
		}
	}
	//
	//
	m1 = m;
	n1 = n;
	//
	printf("Enter the elements of the SECOND matrix: ");
	for (i = 0; i < m1; i++) {
		for (j = 0; j < n1; j++) {
			printf("b[%d][%d] = ", i+1, j+1);
			scanf("%d", &b[i][j]);			
		}
	}
	//
	//
	printf("The FIRST Matrix is as follows: \n");
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	//
	printf("The SECOND Matrix is as follows: \n");
	for (i = 0; i < m1; i++) {
		for (j = 0; j < n1; j++) {
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
	//
	// Logic and Output
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			if (a[i][j] != b[i][j]) {
				printf("The above Matrix is not EQUAL.\n");
				return;
			}
		}
	}
	printf("The above Matrix is EQUAL.\n");
}
//
// Function-5:
// CASE-4: (4). Convert the inputted matrix into is corresponding TRANSPOSE MATRIX.
//
void transpose(int a[][30]) {
	int m, n, i, j;
	printf("YOU CHOSE: (4). Convert the inputted matrix into is corresponding TRANSPOSE MATRIX.\n");
	//
	// Input
	printf("Enter The number of ROW and COLUMN: ");
	scanf("%d %d", &m, &n);
	//
	printf("Enter the elements of the matrix: ");
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("a[%d][%d] = ", i+1, j+1);
			scanf("%d", &a[i][j]);			
		}
	}
	//
	printf("The Matrix is as follows: \n");
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	//
	// Logic and Output
	printf("The TRANPOSE OF Matrix is as FOLLOWS: \n");
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			printf("%d\t", a[j][i]);
		}
		printf("\n");
	}
}
//
//
// Function-6:
// CASE-5: (5). Add Two inputted matrices.
void add(int a[][30], int b[][30], int c[][30]) {
	int m, n, i, j;
	printf("YOU CHOSE: (5). Add Two inputted matrices.\n");
	//
	// Input
	printf("Enter The number of ROW and COLUMN for FIRST MATRIX: ");
	scanf("%d %d", &m, &n);
	//
	printf("Enter the elements of the matrix: ");
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("a[%d][%d] = ", i+1, j+1);
			scanf("%d", &a[i][j]);			
		}
	}
	//
	//
	//
	printf("Entre the elements of the SECOND matrix: ");
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("b[%d][%d] = ", i+1, j+1);
			scanf("%d", &b[i][j]);			
		}
	}
	//
	//
	printf("The FIRST Matrix is as follows: \n");
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	//
	printf("The SECOND Matrix is as follows: \n");
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
	//
	//
	// Logic
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	//
	// Output
	printf("The ADDITION of above two matrix is as follows: \n");
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
}
//
// Function-7: 
// CASE-6: (6). Sub Two inputted matrices.
void sub(int a[][30], int b[][30], int c[][30]) {
	int m, n, i, j;
	printf("YOU CHOSE: (6). Sub Two inputted matrices.\n");
	//
	// Input
	printf("Enter The number of ROW and COLUMN for MATRIX: ");
	scanf("%d %d", &m, &n);
	//
	printf("Enter the elements of the FIRST matrix: ");
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("a[%d][%d] = ", i+1, j+1);
			scanf("%d", &a[i][j]);			
		}
	}
	//
	//
	//
	printf("Entre the elements of the SECOND matrix: ");
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("b[%d][%d] = ", i+1, j+1);
			scanf("%d", &b[i][j]);			
		}
	}
	//
	//
	printf("The FIRST Matrix is as follows: \n");
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	//
	printf("The SECOND Matrix is as follows: \n");
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
	//
	//
	// Logic
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			c[i][j] = a[i][j] - b[i][j];
		}
	}
	//
	// Output
	printf("The ADDITION of above two matrix is as follows: \n");
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
}
//
//
// Function-8:
// CASE-7: (7). Multiply Two inputted Matrices.
void mul(int a[][30], int b[][30], int c[][30]) {
	int m, n, p, i, j, k, sum;
	printf("YOU CHOSE: (7). Multiply Two inputted Matrices.\n");
	//
	// Input
	printf("Enter The number of ROW and COLUMN for MATRIX: ");
	scanf("%d %d", &m, &n);
	//
	printf("Enter the elements of the FIRST matrix: ");
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("a[%d][%d] = ", i+1, j+1);
			scanf("%d", &a[i][j]);			
		}
	}
	//
	//
	printf("We have the rows = %d for second matrix. Give no. of columns for the second matrix: ", n);
	scanf("%d", &p);
	//
	//
	printf("Enter the elements of the SECOND matrix: ");
	for (i = 0; i < n; i++) {
		for (j = 0; j < p; j++) {
			printf("b[%d][%d] = ", i+1, j+1);
			scanf("%d", &b[i][j]);			
		}
	}
	//
	//
	printf("The FIRST Matrix is as follows: \n");
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	//
	printf("The SECOND Matrix is as follows: \n");
	for (i = 0; i < n; i++) {
		for (j = 0; j < p; j++) {
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
	//
	//
	// Logic
	for (i = 0; i < m; i++) {
		sum = 0;
		for (j = 0; j < p; j++) {
			sum = 0;
			for (k = 0; k < n; k++) {
				sum = sum + (a[i][k] * b[k][j]);
			}
			c[i][j] = sum;
		}
	}
	//
	// Output
	printf("The resultant matrix is as follows: \n");
	for (i = 0; i < m; i++) {
		for (j = 0; j < p; j++) {
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
	
}
//
// EOF
