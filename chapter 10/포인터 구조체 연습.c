#include <stdio.h>
typedef struct movie {
	char title[40];
	int viewer;
	double rate;
}MOVIE;

int is_same_movie(MOVIE const *p1, MOVIE const *p2){
		printf("%s, %s\n",p1->title,p2->title);
		if(strcmp(p1->title, p2->title) == 0){ //0,0 1,0    1,0 2,0 
		return 1;
		}
		return 0;
}

int main(void){
	int save = 0; 
	MOVIE arr0[] = {"��ȭ1", 10000, 7.5}; 
	MOVIE arr1[] = {"��ȭ1", 20000, 8.9}; 
	MOVIE arr2[] = {"��ȭ3", 30000, 4.7};
	
	//MOVIE arr[] = { {"��ȭ1", 10000, 7.5}, {"��ȭ1", 20000, 8.9}, {"��ȭ3", 30000, 4.7},};
	//arr[i].title  �̷��� �μ��� �ϳ��� ����..  ex> int is_same_movie(MOVIE *p1){int i; } 
 
	save = is_same_movie(arr0,arr1);
	
	printf("%d\n",save);

	return 0;
}
