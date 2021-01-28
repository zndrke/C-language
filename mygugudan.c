#include <stdio.h>

int main(void){
	int dan=0;
	int num=0;

	for(num = 0 ; num <= 9 ; num++){
		for(dan = 2 ; dan <= 5 ; dan++){
			if(num==0)
				printf("    <%d´Ü>       ",dan);
			else
				printf("%d * %d = %2d      " ,dan,num,dan*num);
		}
		printf("\n");
	}
	printf("\n");
	for(num = 0 ; num <= 9 ; num++){
		for(dan = 6; dan <= 9 ; dan++){
			if(num==0)
				printf("    <%d´Ü>       ",dan);
			else 
				printf("%d * %d = %2d      " ,dan,num,dan*num);
		}
		printf("\n");
	}
	return 0;
}
