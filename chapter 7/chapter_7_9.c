#include <stdio.h>
int main(void){
	
	int phone_fee[12] = { 36000, 42000, 38000, 40000, 28000, 30000, 31000, 45000, 55000, 50000, 60000, 65000};
	int month[12] = {1,2,3,4,5,6,7,8,9,10,11,12}, i, star,j;
	
	for(i = 0; i < 12; i++){
		printf("%2d¿ù %d:",month[i],phone_fee[i]);
		star = phone_fee[i] / 2000;
		for(j = 0; j < star; j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
