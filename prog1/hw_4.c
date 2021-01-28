#include <stdio.h>

int main(void){

	int money =3500;
	int i,j,k;
	printf("현재 당신이 소유하고 있는 금액 : %d\n",money);
	for(i=0 ; i <= money/500 ; i++){
		for(j=0 ; j <= money/700 ; j++){
			for(k=0 ; k <= money/400 ; k++){
				if((500*i + 700*j + 400*k ==money) && i!=0 && j!=0 && k!=0 ){
					printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개\n",i,j,k);
				}
			}
		}
	}

	return 0;
}

