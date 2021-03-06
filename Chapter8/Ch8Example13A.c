/* Chapter-8 Example-13A Multidimensional variable length arrays
* Vasanth [10 September 2014] */

#include <stdio.h>

int main (void)
{
	void scalarMultiply(int nRows, int nCols, int matrix[nRows] [nCols], int scalar);
	void displayMatrix(int nRows, int nCols, int matrix[nRows][nCols]);
	
	int sampleMatrix[3][5] = {
							  {7, 16, 55, 13, 12},
							  {12, 10, 52, 0, 7},
							  {-2, 1, 2, 4, 9},
							 };
	printf("Original matrix:\n");
	displayMatrix(3, 5, sampleMatrix);
	
	scalarMultiply(3, 5, sampleMatrix, 2);
	printf("\nMultiplied by 2:\n");
	displayMatrix(3, 5, sampleMatrix);
	
	scalarMultiply(3, 5, sampleMatrix, -1);
	printf("\nThe multiplied by -1:\n");
	displayMatrix(3, 5, sampleMatrix);
	
	return 0;
}

/* Function to multiply a matrix by scalar */

void scalarMultiply(int nRows, int nCols, int matrix[nRows][nCols], int scalar)
{
	int row;
	int column;
	
	for (row = 0; row < nRows; ++row)
		for (column = 0; column < nCols; ++column)
			matrix[row][column] *= scalar;
			
}

void displayMatrix(int nRows, int nCols, int matrix[nRows][nCols])
{
	int row;
	int column;
	
	for (row = 0; row < nRows; ++row)
	{
		for (column = 0; column < nCols; ++column)
			printf("%5i", matrix[row][column]);
			
		printf("\n");		
	}
}

/*
Output:
	Original Matrix:
	7	16	55	13	12
	12	10	52	0	7
	-2	1	2	4	9
	
	Multiplied by 2:
	14	32	110	26	24
	24	20	104	0	14
	-4	2	4	8	18
	
	Then multiplied by -1:
	-14	-32	-110  -26 -24
	-24	-20	-104   0  -14
	4	 -2	 -4	  -8  -18
*/	

