/***************************************************************
 *  
 *	Copyright (C) 2010 ITS Co., Ltd. All rights reserved.
 *    
 *  SubSystem Name : 
 *  Initial Author : cyshin
 *  Date : 2021-01-07
 *  Description:
 *  ���� ���α׷���2 3�� ���� 
 *  10���� ���ڸ� �Է� �ް� Ȧ,¦ ����� ���
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
	printf("�� 10���� ���� �Է�\n");
	while ( iCnt>0 ) {
		scanf("%lf",&dInput);
		if ( dInput - (int)dInput != 0 ) {
			printf("�Ǽ��� Ȧ¦�� �����ϴ�! �ٽ� �Է��ϼ���!\n");
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
	printf("�迭�� ��� ��� : ");
	for (k = 0 ; k<10 ; k++) {
		printf("%d ", iaArr[k]);
	}
	putchar('\n');

	return;
}


