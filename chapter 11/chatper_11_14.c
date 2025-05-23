#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define Max 20

void InputRandomMatrix(int (*arr)[Max],int row,int col)
{
	int i, j, random = 0;
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			random = rand() % 10;
			arr[i][j] = random;
		}
	}
}

void PrintMatrix(int (*arr)[Max], int row, int col)
{
	int i, j, sum=0;
	int sum2[Max] = {0, };
	
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			sum2[j] += arr[i][j];
			sum += arr[i][j];
			printf("%d   ", arr[i][j]);	
		}
		printf("  ==>  %d\n", sum);
		sum = 0;
	}
	printf("\n");
	for(i=0; i<col; i++)
	{
		printf("-----");
	}
	printf("\n");
	for(i=0; i<col; i++)
	{
		printf("%d  ", sum2[i]);
	}
	
}

int main(void)
{
	srand(time(0));
	int **arr, row, col, i, j;
	
	printf("배열의 행 크기? "); scanf("%d", &row);  
	printf("배열의 열 크기? "); scanf("%d", &col); 
	
	arr = (int **)malloc(sizeof(int *) * row);
	for(i=0; i<row; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * col);
	}
	
	InputRandomMatrix(arr, row, col);
	
	PrintMatrix(arr, row, col);
	
	for(i=0; i<row; i++)
	{
		free(arr[i]);
	}
	free(arr);
	
	return 0;
}
