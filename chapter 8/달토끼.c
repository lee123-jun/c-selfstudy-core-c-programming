/*달나라 토끼 1원 2원 5원 7원 있음 
수를 적어서 큰 수부터 계속 출력 
12 = [7,5] 이런식으로 
*/

#include <stdio.h> //12 , 17, 21,25
void legal_payment(int price){ 
	int i;
	int cnt_7 = 0, cnt_5 = 0, cnt_2 = 0, cnt_1 = 0;
	
	while(1){
	if(price >= 7){ //7원이상 
		price -= 7;
		cnt_7++;
		continue;
	}
	if(price < 7 && price >= 5){// 5, 6원 
		price -= 5;
		cnt_5++;
		continue;
	}
	if(price < 5 && price >= 2){// 4,3,2 원 
		price -= 2;
		cnt_2++;
		continue;
	}
	if(price == 1){// 1원 
		price -= 1;
		cnt_1++;
		continue;
	}
	if(price == 0){
		break;
	}
  }
    
	printf("[");
	while(1){
	if(cnt_7 > 0){
		if(cnt_7 == 1 && cnt_5 == 0 && cnt_2 == 0 && cnt_1 == 0){
			printf("%d",7);
			break;
		}
		else{
			printf("%d,",7);
			cnt_7--;
			continue;
		}
	}
	break;
}

	while(1){
	if(cnt_5 > 0){
		if(cnt_7 == 0 && cnt_5 == 1 && cnt_2 == 0 && cnt_1 == 0){
			printf("%d",5);
			break;
		}
		else{
			printf("%d,",5);
			cnt_5--;
			continue;
		}
	}
	break;
}

	while(1){
	if(cnt_2 > 0){
		if(cnt_7 == 0 && cnt_5 == 0 && cnt_2 == 1 && cnt_1 == 0){
			printf("%d",2);
			break;
		}
		else{
			printf("%d,",2);
			cnt_2--;
			continue;
		}
	}
	break;
}

	while(1){
	if(cnt_1 > 0){
		if(cnt_7 == 0 && cnt_5 == 0 && cnt_2 == 0 && cnt_1 == 1){
			printf("%d",1);
			break;
		}
		else{
			printf("%d,",1);
			cnt_1--;
			continue;
		}
	}
	break;
}
	printf("]\n");
}

int main(void){
	int num;
	while(1){
		scanf("%d",&num);	
		legal_payment(num);
	}
	
	return 0;
} 
