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
	printf("�����Ϸ��� 0�� �Է�\n");
	while(1){
		printf("��� n �Է�:");
		scanf("%lf",&n);
		if(n==0){
			break;
		}
		result = MaxPower(n);

		printf("������ �����ϴ� k�� �ִ밪�� :%g \n",result);
	}
	return 0;
}
