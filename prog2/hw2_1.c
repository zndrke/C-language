/***************************************************************
 *  
 *	Copyright (C) 2010 ITS Co., Ltd. All rights reserved.
 *    
 *  SubSystem Name : 
 *  Initial Author : cyshin
 *  Date : 2021-01-07
 *  Description:
 *  도전 프로그래밍2 1번 문제 
 *  10개의 숫자를 입력 받고 홀,짝 나누어서 출력
 **************************************************************/

#include <stdio.h>


int main(void)
{

	int iaOdd[10];
	int iaEven[10];
	int iCnt=0;
	int iOddIdx=0;	//홀
	int iEvenIdx=0;	//짝
	double dReal;
	int iNum;
	int i,j;
	
	printf("10개의 숫자 입력\n0을 입력하면 종료!");
	while ( iCnt<10 ) {
		printf("입력 : ");
		scanf("%lf",&dReal);
		if ( dReal-(int)dReal != 0 ) {
			printf("실수는 홀짝이 없습니다! 다시 입력하세요!\n");
			continue;
		} else {
			iNum = (int)dReal;
		}

		if ( iNum % 2 == 0 ){
			iaEven[iEvenIdx++] = iNum;
		} else {
			iaOdd[iOddIdx++] = iNum;
		}
		iCnt++;
	}

	printf("홀수 출력:\n");
	for ( i = 0 ; i<iOddIdx ; i++ ) {
		if ( i == 0 ){
			printf("%d",iaOdd[i]);
		} else {
			printf(", %d",iaOdd[i]);
		}
	}
	printf("\n");

	printf("짝수 출력:\n");
	for ( j = 0 ; j<iEvenIdx ; j++ ) {
		if ( j == 0 ){
			printf("%d",iaEven[j]);
		} else{
			printf(", %d",iaEven[j]);
		}
	}
	printf("\n");
	return 0;
}
