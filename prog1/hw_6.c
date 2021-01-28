#include <stdio.h>

void printTime(int a){
	int hour=0;
	int minute=0;
	int second=0;

	second= a%60;
	a=a/60;

	minute= a%60;
	hour=a/60;

	printf("[h:%d , m:%d , s:%d]",hour,minute,second);

	return ;
}

int main(void){
	int a;
	printf("초를 입력하시오\n");
	scanf("%d",&a);

	printTime(a);

	return 0;
}
