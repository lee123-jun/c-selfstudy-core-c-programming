#include <stdio.h>
void Calucator(double a,double b, char op)
{
	if(op == '+'){
		printf("%lf\n",a+b);
	}
	else if(op = '-'){
		printf("%lf\n",a-b);
	}
	else if(op = '*'){
		printf("%lf\n",a*b);
	}
	else if(op = '/'){
		printf("%lf\n",a/b);
	}
}

int main(void)
{
	double a,b;
	char op;
	while(1){
	printf("���� ( 0 0 0 �Է� �� ����)? ");
	scanf("%lf %c %lf",&a,&b,&op); 
	if(a == 0 && b == 0 && op == 0){
		break;
	}
	Calucator(a,b,op);
  }
	
	
	
	return 0;
}
