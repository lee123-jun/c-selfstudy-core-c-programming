#include <stdio.h>
int main(void){
	
	int std[5][4] = { {28,28,26,9}, {30,27,30,10}, {25,26,24,8}, {18,22,22,5}, {24,25,30,10} };
	int i,j,sum = 0;
	double col_ave[4] = {0}; //세로 
	
	for(i = 1; i <= 5; i++){
		printf("학 생   %d번:",i);
		for(j = 0; j < 4; j++){
			printf(" %4d ",std[i - 1][j]);
			sum += std[i - 1][j];
		}
		printf("==> %d\n",sum);
		sum = 0;
	}
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 5; j++){
			col_ave[i] += std[j][i];
		}
	}
	
	printf("항목별 평균:");
	for(i = 0; i < 4; i++){
		col_ave[i] /= 5;
		printf("  %.2lf  ",col_ave[i]);
	}
	
	return 0;
}
