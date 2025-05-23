#include <stdio.h>
void plus_matrix(int x_num[][3], int y_num[][3]){ 
	int i,j;
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("%4d ",x_num[i][j] + y_num[i][j]);
		}
		printf("\n");
	}
}

void print_matrix(int matrix[][3]){
	int i,j;
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("%4d ",matrix[i][j]);
		}
		printf("\n");
	}
}

int main(void){
	
	int x_num[3][3] = { {10,20,30}, {40,50,60}, {70,80,90} }; 
	int y_num[3][3] = { {9,8,7}, {6,5,4}, {3,2,1} };
	
	printf("x 행렬:\n");
	print_matrix(x_num);
	
	printf("\ny 행렬:\n");
	print_matrix(y_num);
	
	printf("\nx + y 행렬:\n");
	plus_matrix(x_num, y_num);
	
	return 0;
}
