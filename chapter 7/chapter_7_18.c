#include <stdio.h>
int main(void){
	
	int arr[10];
	int num, i = 0;
	int input_cnt = 0;
	int dis = 1; //�Ǻ�
	 
	while(1){
	printf("�迭�� �߰��� ����? ");	
	if(scanf("%d",&num) == 1){
		for(i = 0; i < input_cnt; i++){
		if(num == arr[i]){
			printf("�ش� ���Ұ� �̹� [%d]�� �����մϴ�.\n",i);	
			dis = 0;  
		}
	}
		if(dis == 1){
		arr[i] = num;
		i++;
		input_cnt++;
		}
		dis = 1;
	}
	
	for(i = 0; i < input_cnt; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
  }
	
	
	return 0;
} 
