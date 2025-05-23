#include <stdio.h>
int electric_charge(int usage){
	
	int won;
	if(usage >= 0 && usage <= 200){ //�⺻��� 910, ���·� ��� 93.3 
		won = 910 + 93.3 * usage;
	}
	else if(usage >= 201 && usage <= 400){ //�⺻��� 1600, ���·� ��� 187.9 
		won = 1600 + (93.3 * 200) + 187.9 * (usage - 200);
	}
	else if(usage >= 401){ //�⺻��� 7300, ���·� ��� 280.6 
		won = 7300 + (93.3 * 200) + (187.9 * 200) + 280.6 * (usage - 400);
	}
	else{
		return 0;
	}
	
	return won;
}
int main(void){
	
	int usage;
	int won = 0;
	while(1){
	printf("�� ��뷮 (KWh)? ");
	scanf("%d",&usage);
	won = electric_charge(usage);
	if(won == 0){
		break;
	}
	printf("���� ���: %d\n",won);
	}
	return 0;
}
