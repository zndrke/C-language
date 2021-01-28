/***************************************************************
 *  
 *	Copyright (C) 2010 ITS Co., Ltd. All rights reserved.
 *    
 *  SubSystem Name : 
 *  Initial Author : cyshin
 *  Date : 2021-01-07
 *  Description:
 *  ���� ���α׷���2 2�� ���� 
 *  10 ������ �Է¹޾� 2������ ���
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
	printf("�����Ϸ��� 0�� �Է��Ͻÿ�\n");
	while (1) {
		printf("10���� ���� �Է�:");
		scanf("%lf",&dInput);
		
		if ( dInput == 0 ) {
			return 0;
		} else if (dInput-(int)dInput != 0 ) {	//�����ƴ� �Ǽ�
			printf("�Ǽ� ���� ������ �Է�!\n");
			continue;
		}
		else {
			iNum = (int)dInput;	
			if ( iNum>0 ) {					//���
				PrintBinary(iNum);
				putchar('\n');
			}
			else{						//����
				printf("���� ���� ���� ���� �Է�!\n");
			}
		}
	}
	return 0;
}
