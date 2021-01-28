/***************************************************************
 *  
 *	Copyright (C) 2010 ITS Co., Ltd. All rights reserved.
 *    
 *  SubSystem Name : 
 *  Initial Author : cyshin
 *  Date : 2021-01-07
 *  Description:
 *  도전 프로그래밍2 2번 문제 
 *  10 진수를 입력받아 2진수로 출력
 **************************************************************/


#include <stdio.h>

void 
PrintBinary(int p_Num)
{
	int iQuotient;
	int iRemainder;
	
	if ( p_Num == 1 ) {
		printf("%d",p_Num);
		return;
	}

	iQuotient = p_Num/2;
	iRemainder = p_Num%2;

	if ( iQuotient == 1 ) {
		printf("%d",iQuotient);
		printf("%d",iRemainder);
		return ;
	} else {
		PrintBinary(iQuotient);
		printf("%d",iRemainder);
		return ;
	}
}

int 
main(void)
{
	double dInput;
	int iNum;
	printf("종료하려면 0을 입력하시오\n");
	while (1) {
		printf("10진수 정수 입력:");
		scanf("%lf",&dInput);
		
		if ( dInput == 0 ) {
			return 0;
		} else if (dInput-(int)dInput != 0 ) {	//정수아닌 실수
			printf("실수 말고 정수를 입력!\n");
			continue;
		}
		else {
			iNum = (int)dInput;	
			if ( iNum>0 ) {					//양수
				PrintBinary(iNum);
				putchar('\n');
			}
			else{						//음수
				printf("음수 말고 양의 정수 입력!\n");
			}
		}
	}
	return 0;
}
