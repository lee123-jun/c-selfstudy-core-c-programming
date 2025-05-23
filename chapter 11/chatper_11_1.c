#include <stdio.h>
int cnt_digit(int num){
	int cnt=0;
	while(num != 0){
		num /= 10;
		cnt++;
	}
	return cnt;
}

int r_cnt_digit(num){
	if(num == 0) return;
	return r_cnt_digit(num/10)+1;
}

int main(void){
	
	int num;
	while(1){
	printf("Á¤¼ö? ");
	scanf("%d", &num);
	if(num==0) return 0;
	//printf("count of digit: %d\n", cnt_digit(num));		
	printf("count of digit: %d\n", r_cnt_digit(num));		
	}
	
	return 0;
}
