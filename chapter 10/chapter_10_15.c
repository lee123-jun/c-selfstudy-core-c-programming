#include <stdio.h>
#define SIZE 10
typedef struct point{
	int x;
	int y;
}POINT;

void swap_point(POINT *pt, int cnt){
	int i, j, temp;
	
	for(i = 0; i < cnt - 1; i++){
		for(j = i+1; j < cnt; j++){
			if(pt[i].x > pt[j].x){
				temp = pt[i].x;
				pt[i].x = pt[j].x;
				pt[j].x = temp;
			}
		}
	}
	
	for(i = 0; i < cnt; i++){
		printf("(%d, %d)",pt[i].x,pt[i].y);
	}
}

int main(void){
	int i,j,temp;
	POINT arr[SIZE]={ {7, 4}, {12, 93}, {22, 31}, {1, 20}, {34, 53}, {41, 2}, {32, 9}, {21, 31}, {8, 2}, {3, 5} };
		 
	printf("<<정렬 전>>\n"); 
	for(i = 0; i < SIZE; i++){
		printf("(%d, %d)",arr[i].x,arr[i].y); 
	}
	printf("\n<<정렬 후>>\n");
	swap_point(arr,SIZE);
	
	return 0;
}
