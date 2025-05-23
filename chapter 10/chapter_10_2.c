#include <stdio.h>
#include <string.h>
typedef struct LOGIN{
	char id[20], pw[20]; //최대 10자 정도의 아이디, 비번 
}login;

void make_lower(login *pt);

void print_login(login *pt1);

int main(void){
	
	login infor[3]; 
	int i = 0,len,print_cnt = 3, lower_cnt = 3;
	
	while(1){
	printf("\nID? ");
	gets(infor[i].id);
	
	printf("PW? ");
	gets(infor[i].pw);
	
	lower_cnt--;
	while(lower_cnt >= 0){
		make_lower(&infor[i]);
		break;
	}
		
	print_cnt--;
	while(print_cnt >= 0){
		print_login(&infor[i]);
		break;
	}
	
	i++;
  	}
	return 0;
}

void make_lower(login *pt){ //
	int i;
	for(i = 0; i < 20; i++){
		pt->id[i] = tolower(pt->id[i]);
		pt->pw[i] = tolower(pt->pw[i]);
	}
}

void print_login(login *pt1){
	int i, len;
	len = strlen(pt1->pw);
	
		printf("ID: %s\n",pt1->id);
		printf("PW: ");
		for(i = 0; i < len; i++){
			printf("%c",'*');
		}
}

