/***************************************************************
 *  
 *	Copyright (C) 2010 ITS Co., Ltd. All rights reserved.
 *    
 *  SubSystem Name : 
 *  Initial Author : cyshin
 *  Date : 2021-01-07
 *  Description:
 *  ���� ���α׷���2 1�� ���� 
 *  10���� ���ڸ� �Է� �ް� Ȧ,¦ ����� ���
 **************************************************************/

#include <stdio.h>


int main(void)
{

	int iaOdd[10];
	int iaEven[10];
	int iCnt=0;
	int iOddIdx=0;	//Ȧ
	int iEvenIdx=0;	//¦
	double dReal;
	int iNum;
	int i,j;
	
	printf("10���� ���� �Է�\n0�� �Է��ϸ� ����!");
	while ( iCnt<10 ) {
		printf("�Է� : ");
		scanf("%lf",&dReal);
		if ( dReal-(int)dReal != 0 ) {
			printf("�Ǽ��� Ȧ¦�� �����ϴ�! �ٽ� �Է��ϼ���!\n");
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

	printf("Ȧ�� ���:\n");
	for ( i = 0 ; i<iOddIdx ; i++ ) {
		if ( i == 0 ){
			printf("%d",iaOdd[i]);
		} else {
			printf(", %d",iaOdd[i]);
		}
	}
	printf("\n");

	printf("¦�� ���:\n");
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
