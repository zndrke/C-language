#include <stdio.h>

int main(void){
	int num;

	printf("10진수 정수를 입력하시오 \n");
	scanf("%d",&num);
	
	printf("10 진수 : %d | 16진수 %x \n", num,num);
	return 0;
}
