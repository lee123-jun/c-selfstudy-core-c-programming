#include <stdio.h>
int fibo(int n){
	if(n<=1) return 1;
	return fibo(n-1) + fibo(n-2);
}
int main(void){
	
	int i, n;
	printf("피보나치 수열 몇항까지? "); 
	scanf("%d",&n); 
	for(i=0; i< n; i++){
		printf("%d ", fibo(i));
	}
	
	return 0;
}
