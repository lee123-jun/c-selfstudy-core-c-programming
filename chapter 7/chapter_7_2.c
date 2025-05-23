#include <stdio.h>
#include <math.h>
void make_common_ratio(double *lsq, int cnt, int num){
	int i;
	
	for(i = 1; i < 10; i++){
		lsq[i] = lsq[0] * pow(num,i);
	}
	
	printf("등비수열: ");
	for(i = 0; i < 10; i++){
		if(lsq[i] > 1000000 || lsq[i] < -1000000){
			printf("%e ",lsq[i]);
		}
		else if(lsq[i] - (int)lsq[i] == 0){
			printf("%d ",(int)lsq[i]);
		}
		else{
			printf("%.1lf ",lsq[i]); 
		}
	}

}
int main(void){
	
	int num , i;
	double lsq[10] = {0};
	
	printf("첫 번째 항? ");
	scanf("%lf",&lsq[0]);
	printf("공비? ");
	scanf("%d",&num);
	
	make_common_ratio(lsq, 10, num);
	
	return 0;
}
