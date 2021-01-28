/***************************************************************
 *  
 *	Copyright (C) 2010 ITS Co., Ltd. All rights reserved.
 *    
 *  SubSystem Name : 
 *  Initial Author : cyshin
 *  Date : 2021-01-11
 *  Description:
 *  ���� ���α׷���3 5�� ���� 
 *  ���������� ����. ����ڰ� �� ������ �ϰ�, ���� ����� ���
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
	char szWin[20] = {"�̰���ϴ�!"};
	char szLose[20] = {"�����ϴ�!"};
	char szTie[20] = {"�����ϴ�!"};
	
	if ( p_iResult == WIN ){
		printf("����� %s ����, ��ǻ�ʹ� %s ����, %s\n",p_szMine,p_szComs,szWin);
	} else if ( p_iResult == LOSE ) {
		printf("����� %s ����, ��ǻ�ʹ� %s ����, %s\n",p_szMine,p_szComs,szLose);
	} else if (p_iResult == TIE ) {
		printf("����� %s ����, ��ǻ�ʹ� %s ����, %s\n",p_szMine,p_szComs,szTie);
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
	
	char szRock[10] = {"����"};
	char szScissors[10] = {"����"};
	char szPaper[10] = {"��"};
	char *pMine;
	char *pComs;

	const int Rock = 1;			//const�� prefix
	const int Scissors = 2;
	const int Paper = 3;

	while (1) {
		printf("\n������ 1, ������ 2, ���� 3 :");
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

	printf("\n������ ��� : %d�� , %d��\n",iWinResult,iTieResult);

	return 0;
}
