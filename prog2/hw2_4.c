/***************************************************************
 *  
 *	Copyright (C) 2010 ITS Co., Ltd. All rights reserved.
 *    
 *  SubSystem Name : 
 *  Initial Author : cyshin
 *  Date : 2021-01-07 
 *  Description:
 *  ���� ���α׷���2 4�� ���� 
 *  �Է��� ���ڿ��� ȸ������ Ȯ���ϴ� ���α׷�!
 **************************************************************/

#include <stdio.h>

void
Palindrome(char p_szArr[], int p_len)
{
	int i = 0;
	int j = p_len-1;
	if (p_len == 1) {
		printf(" ��/�� ȸ���� �ƴմϴ�\n");
		return;
	}
	while (i <= j) {
		if (p_szArr[i] != p_szArr[j]) {
			printf(" ��/�� ȸ���� �ƴմϴ�\n");
			return;
		} else{
			i++;
			j--;
		}
	}
	printf(" ��/�� ȸ���Դϴ�\n");
	return;
}

int 
main (void)
{
	char szArr[100];
	int ch;
	int i = 0;
	printf("�Է��� �ܾ ȸ������ Ȯ���ϴ� ���α׷� �Դϴ�.\n�����Ϸ��� 0�� �Է��ϼ���\n");
	printf("���ڿ� �Է�:");
	while ( (ch = getchar()) != '0' ) {
		if ( (ch == '\n') || (ch == '\t') || (ch == ' ')) {
			Palindrome(szArr, i);
			i = 0;
			printf("���ڿ� �Է�:");
		} else{
			putchar(ch);
			szArr[i] = ch;
			i++;
		}
	
	}
	return 0;
}

