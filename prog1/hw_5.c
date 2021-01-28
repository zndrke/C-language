#include <stdio.h>
#include <math.h>

int isPrimeNum(int num){
	
	int i;

	for(i=2; i<num ; i++){
		if(i<=sqrt(num)){
			if( num%i==0)
				return 0;
		}
	}
	

	return 1;
}


int main(void){

	int cnt=20;
	int i=2;
	while(cnt>0){
		if(isPrimeNum(i)==1){
			printf("%d ",i);
			cnt--;
		}
		i++;
	}
	putchar('\n');

	return 0;
}
