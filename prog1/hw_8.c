#include <stdio.h>


double recursivePow(double n){
	if(n==0)
		return 1;
	else if(n < 0) 
		return 0.5*recursivePow(n+1);
	else if(n > 0)
		return 2.0*recursivePow(n-1);
}

int main(void){
	double n;
	double result;
	printf("0을 입력하면 종료 \n");
	while(1){
		printf("정수입력: ");
		scanf("%lf",&n);
		if(n==0){
			break;
		}
		if((n-(int)n)==0){	//정수
			result=recursivePow(n);
			printf("2의 %g승은 %g\n",n,result);
		}
	}
	return 0;
}
