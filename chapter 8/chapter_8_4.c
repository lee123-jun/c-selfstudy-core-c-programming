#include <stdio.h>
int main(void){
	
	double arr[10] = {0.1, 2, 3.4, 5.2, 4.5, 7.8, 9.7, 1.4, 6.6, 7.2};
	double *p = arr; // == &arr[0]
	double ave = 0; 
	int i;
	
	printf("¹è¿­: ");
	for(i = 0; i < 10; i++){
		printf("%.2lf ",p[i]); 
		ave += p[i];
	}
	
	ave /= 10;
	printf("\nÆò±Õ: %lf",ave); 

	
	return 0;
} 
