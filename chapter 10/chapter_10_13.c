#include <stdio.h>

typedef struct point{
	int x;
	int y;
}POINT;

void print_rect(POINT *pt, POINT *pt1){
	
	printf("[RECT ���ϴ���: (%d, %d) ������:(%d, %d)]",pt->x,pt->y,pt1->x,pt1->y);	
} 

int main(void){
	
	POINT left_bottom, right_top;
	printf("���簢���� ���ϴ���(x,y)? ");
	scanf("%d %d",&left_bottom.x,&left_bottom.y);
	getchar();
	printf("���簢���� ������(x,y)? ",right_top.x, right_top.y);
	scanf("%d %d",&right_top.x, &right_top.y);
	getchar();
	print_rect(&left_bottom,&right_top);
	
	return 0;
}
