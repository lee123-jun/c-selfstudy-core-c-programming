#include <stdio.h>
int main(){
	
	int index;
	int value; 
	int num[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37};
	int i;
	
	printf("배열: ");
	for(i = 0; i < 10; i++){
		printf("%d ",num[i]);
	} 
	printf("\n찾을 값? ");
	scanf("%d",&value);
	
	for(i = 0; i < 10; i++){
		if(num[i] == value){
			index = i;
		}
	}
	
	printf("%d는 %d번째 원소입니다.",value,index);
	return 0;
}
