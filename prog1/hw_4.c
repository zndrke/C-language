#include <stdio.h>

int main(void){

	int money =3500;
	int i,j,k;
	printf("���� ����� �����ϰ� �ִ� �ݾ� : %d\n",money);
	for(i=0 ; i <= money/500 ; i++){
		for(j=0 ; j <= money/700 ; j++){
			for(k=0 ; k <= money/400 ; k++){
				if((500*i + 700*j + 400*k ==money) && i!=0 && j!=0 && k!=0 ){
					printf("ũ���� %d��, ����� %d��, �ݶ� %d��\n",i,j,k);
				}
			}
		}
	}

	return 0;
}

