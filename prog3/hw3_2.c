/***************************************************************
 *  
 *	Copyright (C) 2010 ITS Co., Ltd. All rights reserved.
 *    
 *  SubSystem Name : 
 *  Initial Author : cyshin
 *  Date : 2021-01-12
 *  Description:
 *  ���� ���α׷���3 2�� ����
 *  ������ �Է¹����� �����̸�� 2���� �迭�� ���� ���
 **************************************************************/

#include <stdio.h>
#include <stdbool.h>

void 
PrintSnail(int p_iNum)
{
	int i = 0;
	int j = 0;
	int iCnt = 0;
	int iDirect = 0;		//flag�� 0 �̸� j++, 1 �̸� i++, 2 �̸� j--, 3 �̸� i--
	int iaArr[p_iNum][p_iNum]={0,0};
	bool iaFlag[p_iNum][p_iNum]={false,false};
/*
	for ( i = 0 ; i<p_iNum ; i++) {			//init
		for( j = 0 ; j<p_iNum ; j++ ) {
			iaArr[i][j] = 0;
			iaFlag[i][j] = false;
		}
	}
*/
	i = 0;
	j = 0;

	while (iCnt < p_iNum * p_iNum ) {
		if (iDirect == 0 ) {
			if ( iaFlag[i][j] != true && j < p_iNum ) {
				iaArr[i][j] = iCnt+1;
				iaFlag[i][j] = true;
				iCnt++;
				j++;
			} else {
				iDirect = 1;
				j--;					//��ġ ����
				i++;
				if (iaFlag[i][j] == true) {
					break;
				}
			}
		} else if (iDirect == 1) {
			if ( iaFlag[i][j] != true && i < p_iNum ) {
				iaArr[i][j] = iCnt+1;
				iaFlag[i][j] = true;
				iCnt++;
				i++;
			} else {
				iDirect = 2;
				i--;
				j--;
				if (iaFlag[i][j] == true) {
					break;
				}
			}
		} else if (iDirect == 2) {
			if ( iaFlag[i][j] != true && j >= 0 ) {
				iaArr[i][j] = iCnt+1;
				iaFlag[i][j] = 1;
				iCnt++;
				j--;
			} else {
				iDirect = 3;
				j++;
				i--;
				if (iaFlag[i][j] == true) {
					break;
				}
			}
		} else if (iDirect == 3) {
			if ( iaFlag[i][j] != true && i >= 0 ) {
				iaArr[i][j] = iCnt+1;
				iaFlag[i][j] = true;
				iCnt++;
				i--;
			} else {
				iDirect = 0;
				i++;
				j++;
				if (iaFlag[i][j] == true) {
					break;
				}
			}
		}
	}

	for ( i = 0 ; i<p_iNum ; i++) {
		for( j = 0 ; j<p_iNum ; j++ ) {
			printf("%3d",iaArr[i][j]);	
		}
		printf("\n");
	}

	return ;
}


int
main(void)
{
	int iNum;
	
	printf("������ �Է��Ͻÿ�");
	scanf("%d",&iNum);
	PrintSnail(iNum);
	return 0;
}
