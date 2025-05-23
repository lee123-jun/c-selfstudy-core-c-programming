#include <stdio.h>
int electric_charge(int usage){
	
	int won;
	if(usage >= 0 && usage <= 200){ //기본요금 910, 전력량 요금 93.3 
		won = 910 + 93.3 * usage;
	}
	else if(usage >= 201 && usage <= 400){ //기본요금 1600, 전력량 요금 187.9 
		won = 1600 + (93.3 * 200) + 187.9 * (usage - 200);
	}
	else if(usage >= 401){ //기본요금 7300, 전력량 요금 280.6 
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
	printf("월 사용량 (KWh)? ");
	scanf("%d",&usage);
	won = electric_charge(usage);
	if(won == 0){
		break;
	}
	printf("전기 요금: %d\n",won);
	}
	return 0;
}
