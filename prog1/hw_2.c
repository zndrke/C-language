#include <stdio.h>

void printTitle(int dan,int end){
	// print title 	
	for(; dan <= end; dan++){
		printf("    <%d단>       ",dan);
	}
	printf("\n");
	return ;
}

void printGugudan(int dan,int end,int num ){
	//print gugudan
	for(; dan <= end; dan++){
		printf("%d * %d = %2d      " ,dan,num,dan*num);
	}
	printf("\n");
	return ;
}

void gugudan(int s, int e){
	int num,dan,end;
	printTitle(s,e);
	for(num=1,dan=s,end=e ; num <= 9 ; num++){
		printGugudan(dan,end,num);
	}
}

int main(void){

	int a,b;

	printf("2~9중 두 수를 입력하시오");

	scanf("%d %d", &a,&b);

	if (a>b)
		gugudan(b,a);
	else
		gugudan(a,b);
	
	return 0;
}

