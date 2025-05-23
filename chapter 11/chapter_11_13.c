#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//2차원 배열 할당하고 해제하기
int main(void)
{
	srand(time(0));
	
	int row, col, i, j, random = 0;
	int **matrix;
	
while(1)
{
	printf("배열의 행 크기? ");
	scanf("%d", &row);
	printf("배열의 열 크기? ");
	scanf("%d", &col);
	
	matrix =  (int **)malloc(sizeof(int*) * row);
	
	for(i=0; i<row; i++)
	{
		matrix[i] = (int *)malloc(sizeof(int) * col);
	}
	
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			random = rand() % 10;
			matrix[i][j] = random;
		}
	}
	
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			printf("%d ", matrix[i][j]); 
		}
		printf("\n\n");
	}
	
	for(i = 0; i < row; i++)
	{
		free(matrix[i]);
	}
	free(matrix);
	printf("heap memory free success...\n\n");
}
	
	
	return 0;
}
