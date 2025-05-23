#include <stdio.h>
int main(void){
	
	int arr[10];
	int num, i = 0;
	int input_cnt = 0;
	
	while(1){
	printf("배열에 추가할 원소? ");	
	if(scanf("%d",&num) == 1){
		arr[i] = num;
		i++;
		input_cnt++;
	}
	for(i = 0; i < input_cnt; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
  }
	
	
	return 0;
} 
