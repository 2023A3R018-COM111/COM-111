#include <stdio.h>

int main(){
	int row1, row2, column1, column2;

	// Get dimensions of matrix.
	printf("Enter Rows and column of MatrixA: ");
	scanf("%d %d", &row1, &column1);
	printf("Enter Rows and column of MatrixB: ");
	scanf("%d %d", &row2, &column2);

	if (row1 != column2 && row2 != column1){
		printf("\nERROR: Matrix can't be multiplied.\n");
		return 1;
	}

	int Matrix1[row1][column1], Matrix2[row2][column2], ResultMatrix[row2][column2];


	// Get values for matrix.
	printf("\n\nEnter elements of MatrixA: \n");
	for (int i=0; i<row1; i++)
		for (int j=0; j<column1; j++){
			printf("Element [%d][%d]: ", i+1, j+1);
			scanf("%d", &Matrix1[i][j]);
		}
	printf("\nEnter elements of MatrixB:\n");
	for (int i=0; i<row2; i++)
		for (int j=0; j<column2; j++){
			printf("Element [%d][%d]: ", i+1, j+1);
			scanf("%d", &Matrix2[i][j]);
		}

	printf("\nMatrix1 x Matrix2:\n");
	// Display both matrixes
	for (int i=0; i<row1; i++){
		printf("\n |");
		for (int j=0; j<column2; j++)
			printf("%3d ", Matrix1[i][j]);
		printf("| |");
		for (int k=0; k<column1; k++)
			printf("%3d ", Matrix2[i][k]);
		printf("|");
	}


	// Multiply the matrix.
	for (int i=0; i<row1; i++)
		for (int j=0; j<column1; j++)
			for (int k=0; k<row2; k++)
				ResultMatrix[i][j] += Matrix1[i][k] * Matrix1[k][j];

	printf("\n\nResultant Matrix:\n");
	for (int i=0; i<row1; i++){
		printf(" |");
		for (int j=0; j<column2; j++)
			printf("%3d ", ResultantMatrix[i][j]);
		printf("|\n");
	}

	return 0;
}
