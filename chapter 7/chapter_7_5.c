#include <stdio.h>
int main(){
	
	int index;
	int value; 
	int num[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37};
	int i;
	
	printf("�迭: ");
	for(i = 0; i < 10; i++){
		printf("%d ",num[i]);
	} 
	printf("\nã�� ��? ");
	scanf("%d",&value);
	
	for(i = 0; i < 10; i++){
		if(num[i] == value){
			index = i;
		}
	}
	
	printf("%d�� %d��° �����Դϴ�.",value,index);
	return 0;
}
