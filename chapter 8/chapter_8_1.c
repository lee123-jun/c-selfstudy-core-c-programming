#include <stdio.h>
int main(){
		
	double x[3] = {1, 2, 3};
	int i;
	int *p = x;
	
	for(i = 0; i < 3; i++){
		printf("x[%d]ÀÇ ÁÖ¼Ò: %p\n",i,p[i]);
	}
	
	return 0;
}
