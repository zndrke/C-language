#include <stdio.h>
#include <math.h>

double MaxPower(double n){
	
	double k=1;

	while(pow(2.0,k) <= n){
		k++;
	}
	
	return k=k-1;
}


int main(void){
	double n;
	double result;
	printf("종료하려면 0을 입력\n");
	while(1){
		printf("상수 n 입력:");
		scanf("%lf",&n);
		if(n==0){
			break;
		}
		result = MaxPower(n);

		printf("공식을 만족하는 k의 최대값은 :%g \n",result);
	}
	return 0;
}
