#include <stdio.h>
int sum_of_digit(int num){
	int sum=0;
	while(num!=0){
		sum += num%10;
		num/=10;
	}
	return sum;
}

int r_sum_of_digit(int num){
	if(num==0) return;
	return r_sum_of_digit(num/10)+num%10;
}	

int main(void){
	
	int num;
	while(1){
	printf("Á¤¼ö? ");
	scanf("%d", &num);
	if(num==0) return 0;
	//printf("count of digit: %d\n", sum_of_digit(num));		
	printf("count of digit: %d\n", r_sum_of_digit(num));		
	}
	
	return 0;
}
