#include <stdio.h>

void printTitle(int dan,int end){
	// print title 	
	for(; dan <= end; dan++){
		printf("    <%d´Ü>       ",dan);
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

void gugudan(void){
	int num,dan,end;

	printTitle(2,5);
	for(num=1,dan=2,end=5 ; num <= 9 ; num++){
		printGugudan(dan,end,num);
	}
	printf("\n");

	printTitle(6,9);
	for(num=1,dan=6,end=9 ; num <= 9 ; num++){
		printGugudan(dan,end,num);
	}
	printf("\n");
}

int main(void){
	gugudan();	
}
