/***************************************************************
 *  
 *	Copyright (C) 2010 ITS Co., Ltd. All rights reserved.
 *    
 *  SubSystem Name : 
 *  Initial Author : cyshin
 *  Date : 2021-01-07 
 *  Description:
 *  도전 프로그래밍2 4번 문제 
 *  입력한 문자열이 회문인지 확인하는 프로그램!
 **************************************************************/

#include <stdio.h>

void
Palindrome(char p_szArr[], int p_len)
{
	int i = 0;
	int j = p_len-1;
	if (p_len == 1) {
		printf(" 은/는 회문이 아닙니다\n");
		return;
	}
	while (i <= j) {
		if (p_szArr[i] != p_szArr[j]) {
			printf(" 은/는 회문이 아닙니다\n");
			return;
		} else{
			i++;
			j--;
		}
	}
	printf(" 은/는 회문입니다\n");
	return;
}

int 
main (void)
{
	char szArr[100];
	int ch;
	int i = 0;
	printf("입력한 단어가 회문인지 확인하는 프로그램 입니다.\n종료하려면 0을 입력하세요\n");
	printf("문자열 입력:");
	while ( (ch = getchar()) != '0' ) {
		if ( (ch == '\n') || (ch == '\t') || (ch == ' ')) {
			Palindrome(szArr, i);
			i = 0;
			printf("문자열 입력:");
		} else{
			putchar(ch);
			szArr[i] = ch;
			i++;
		}
	
	}
	return 0;
}

