#include <stdio.h>

int GCM(int a, int b){
	int tmp,n;

	if(a<b){
		tmp = a;
		a=b;
		b=tmp;
	}

	while(b!=0){
		n = a%b;
		a=b;
		b=n;
	}
	return a;
}


int main(void){
	
	int a,b;
	

	printf("최대 공약수를 구하는 프로그램입니다. 두 수를 입력하시오\n");
	scanf("%d %d",&a,&b);

	printf("최대 공약수는 %d 입니다\n",GCM(a,b));	

	return 0;
}
