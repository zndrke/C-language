/***************************************************************
 *  
 *	Copyright (C) 2010 ITS Co., Ltd. All rights reserved.
 *    
 *  SubSystem Name : 
 *  Initial Author : cyshin
 *  Date : 2021-01-11
 *  Description:
 *  도전 프로그래밍3 1번 문제 
 *	4*4 배열을 90도씩 3번 돌려서 출력	
 **************************************************************/

#include <stdio.h>
#include <string.h>

void
PrintArr(int p_iaArr[][4])
{
	int i;
	int j;	
	int iSize = sizeof(p_iaArr[0])/sizeof(int);

	for ( i = 0 ; i<iSize ; i++) {
		for ( j = 0 ; j<iSize ; j++) {
			printf("%2d ", p_iaArr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	return ;
}

void
RotateArr(int p_iaArr[][4])
{
	int iSize = sizeof(p_iaArr[0])/sizeof(int);
	int i;
	int j;
	int k = 3;
	int iaSrc[iSize][iSize];
	int iaDest[iSize][iSize];
	memcpy(iaSrc,p_iaArr,sizeof(iaSrc));
	while ( k > 0) {
		for ( i = 0 ; i<iSize ; i++) {
			for ( j = 0 ; j<iSize ; j++) {
				iaDest[j][3-i] = iaSrc[i][j];
			}
		}
		PrintArr(iaDest);
		memcpy(iaSrc,iaDest,sizeof(iaSrc));
		k--;
	}
	return ;
}

int
main(void)
{
	int iSize = 4;

	int iaArr[iSize][iSize] ;
	int i;
	int j;
	int k = 1;

	for ( i = 0 ; i<iSize ; i++) {		//init number
		for( j = 0 ; j<iSize ; j++) {
			iaArr[i][j] = k++;
		}
	}

	for ( i = 0 ; i<iSize ; i++) {
		for( j = 0 ; j<iSize ; j++) {
			printf("%2d ", iaArr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	RotateArr(iaArr);
	return 0;
}
