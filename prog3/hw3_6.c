/***************************************************************
 *  
 *	Copyright (C) 2010 ITS Co., Ltd. All rights reserved.
 *    
 *  SubSystem Name : 
 *  Initial Author : cyshin
 *  Date : 2021-01-12
 *  Description:
 *  도전 프로그래밍3 6번 문제 
 *	야구게임. 3개의 숫자를 입력받아 모두 맞추면 종료	
 **************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define SIZE 3

bool
CheckBaseball(int p_iaArr[], int p_iaCheck[], int iTry)
{
	int i;
	int j;
	int iStrike = 0;
	int iBall = 0;

	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {
			if (p_iaArr[i] == p_iaCheck[j] && i == j) {
				iStrike++;
			} else if (p_iaArr[i] == p_iaCheck[j]) {
				iBall++;
			}
		} 
	}

	printf("%d번쨰 도전 결과: %dstrike, %dball!\n", iTry, iStrike, iBall);

	if (iStrike == SIZE ) {
		return true;
	}

	return false;
}

int 
main(void)
{
	int i;
	int j;
	int iTry = 1;
	int iaArr[SIZE];
	int iaCheck[SIZE];
	bool bResult = false;

	srand((int)time(NULL));

	for ( i = 0 ; i<SIZE ; i++) {
		iaCheck[i] = rand() % 10;
		for (j = 0 ; j < i ; j++) {				//중복제거
			if ( iaCheck[i] == iaCheck[j]) {
				i--;
				break;
			}
		}
		printf("%d ", iaCheck[i]);
	}

	printf("Start Game!\n");
	
	while (1) {
		printf("3개의 숫자 선택:");
		scanf("%d %d %d", &iaArr[0], &iaArr[1], &iaArr[2]);
		if ( iaArr[0] == iaArr[1] || iaArr[1] == iaArr[2] || iaArr[2] == iaArr[0]) {
			printf("중복되지 않은 숫자 입력!\n");
			continue;
		} else if (iaArr[0] < 0 || iaArr[0] > 9 || iaArr[1] < 0 || iaArr[1] > 9 || iaArr[2] < 0 || iaArr[2] > 9 ) {
			printf("0~9의 숫자를 입력!\n");
			continue;
		}

		bResult = CheckBaseball(iaArr, iaCheck, iTry);
		iTry++;

		if ( bResult == true ) {
			printf("Game Over\n");
			break;
		}
	}

	return 0;
}
