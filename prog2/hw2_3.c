/***************************************************************
 *  
 *	Copyright (C) 2010 ITS Co., Ltd. All rights reserved.
 *    
 *  SubSystem Name : 
 *  Initial Author : cyshin
 *  Date : 2021-01-07
 *  Description:
 *  도전 프로그래밍2 3번 문제 
 *  10개의 숫자를 입력 받고 홀,짝 나누어서 출력
 **************************************************************/

#include <stdio.h>

int
main(void)
{
	double dInput;
	int iaArr[10];
	int iNum;
	int iCnt = 10;
	int i = 0;
	int j = 9;
	int k;
	printf("총 10개의 숫자 입력\n");
	while ( iCnt>0 ) {
		scanf("%lf",&dInput);
		if ( dInput - (int)dInput != 0 ) {
			printf("실수는 홀짝이 없습니다! 다시 입력하세요!\n");
		}else {
			iNum = (int)dInput;
			if ( iNum%2 == 0) {
				iaArr[j] = iNum;
				j--;
			} else {
				iaArr[i] = iNum;
				i++;
			}
			iCnt--;
		}
	}
	printf("배열의 요소 출력 : ");
	for (k = 0 ; k<10 ; k++) {
		printf("%d ", iaArr[k]);
	}
	putchar('\n');

	return;
}


