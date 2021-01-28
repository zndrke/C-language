/***************************************************************
 *  
 *	Copyright (C) 2010 ITS Co., Ltd. All rights reserved.
 *    
 *  SubSystem Name : 
 *  Initial Author : cyshin
 *  Date : 2021-01-11
 *  Description:
 *  도전 프로그래밍3 5번 문제 
 *  가위바위보 게임. 사용자가 질 때까지 하고, 지면 결과를 출력
 **************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define WIN 1
#define LOSE 2
#define TIE 3

void
PrintResult(char p_szMine[], char p_szComs[], int p_iResult)
{
	char szWin[20] = {"이겼습니다!"};
	char szLose[20] = {"졌습니다!"};
	char szTie[20] = {"비겼습니다!"};
	
	if ( p_iResult == WIN ){
		printf("당신은 %s 선택, 컴퓨터는 %s 선택, %s\n",p_szMine,p_szComs,szWin);
	} else if ( p_iResult == LOSE ) {
		printf("당신은 %s 선택, 컴퓨터는 %s 선택, %s\n",p_szMine,p_szComs,szLose);
	} else if (p_iResult == TIE ) {
		printf("당신은 %s 선택, 컴퓨터는 %s 선택, %s\n",p_szMine,p_szComs,szTie);
	}

	return ;
}

int 
main(void)
{
	int iInput;
	int iCom;
	srand((int)time(NULL));
	int iWinResult = 0;
	int iTieResult = 0;
	int iResult = 0;
	
	char szRock[10] = {"바위"};
	char szScissors[10] = {"가위"};
	char szPaper[10] = {"보"};
	char *pMine;
	char *pComs;

	const int Rock = 1;			//const도 prefix
	const int Scissors = 2;
	const int Paper = 3;

	while (1) {
		printf("\n바위는 1, 가위는 2, 보는 3 :");
		scanf("%d",&iInput);

		iCom = rand() % 3 + 1;	
		
		if ( iInput == Rock ) {
			pMine = szRock;
			if ( iCom == Scissors ) {
				pComs = szScissors;
				iResult = WIN;
				iWinResult++;
			} else if ( iCom == Paper){
				pComs = szPaper;
				iResult = LOSE;
				break;
			} else {
				pComs = szRock;
				iResult = TIE;
				iTieResult++;
			}
		} else if ( iInput == Scissors ) {
			pMine = szScissors;
			if ( iCom == Paper ) {
				pComs = szPaper;
				iResult = WIN;
				iWinResult++;
			} else if ( iCom == Rock ) {
				pComs = szRock;
				iResult = LOSE;
				break;
			} else {
				pComs = szScissors;
				iResult = TIE;
				iTieResult++;
			}
		} else if ( iInput == Paper ) {
			pMine = szPaper;
			if ( iCom == Rock ) {
				pComs = szRock;
				iResult = WIN;
				iWinResult++;
			} else if ( iCom == Scissors) {
				pComs = szScissors;
				iResult = LOSE;
				break;
			} else {
				pComs = szPaper;
				iResult = TIE;
				iTieResult++;
			}
		}
		PrintResult(pMine, pComs, iResult);
	}
	PrintResult(pMine, pComs, iResult);

	printf("\n게임의 결과 : %d승 , %d무\n",iWinResult,iTieResult);

	return 0;
}
