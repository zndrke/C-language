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
	

	printf("�ִ� ������� ���ϴ� ���α׷��Դϴ�. �� ���� �Է��Ͻÿ�\n");
	scanf("%d %d",&a,&b);

	printf("�ִ� ������� %d �Դϴ�\n",GCM(a,b));	

	return 0;
}
