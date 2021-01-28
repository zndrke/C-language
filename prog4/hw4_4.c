/***************************************************************
 *  
 *	Copyright (C) 2010 ITS Co., Ltd. All rights reserved.
 *    
 *  SubSystem Name : 
 *  Initial Author : cyshin
 *  Date : 2021-01-19
 *  Description:
 *  도전 프로그래밍4 4번 문제 
 *  문자열을 저장하고 있는 파일을 열어서 
 *  A와 P로 시작하는 단어의 수를 세고 출력
 **************************************************************/

#include <stdio.h>

	
int
main(int argc, char* argv[])
{
	FILE *fp = fopen(argv[1], "r");			//read file

	int iAcnt = 0; //capital
	int iPcnt = 0;
	char szArr[50];
	if (fp == NULL) {
		puts("파일오픈 실패\n");
		return -1;
	} else {
		while (!feof(fp)) {
			fscanf(fp, "%s\n", &szArr);
			if (szArr[0] == 'A') {
				printf("%s ", szArr);
				iAcnt++;
			} else if (szArr[0] == 'P') {
				printf("%s ", szArr);
				iPcnt++;
			}
		}
	}
	printf("\n");

	printf("A로 시작하는 단어의 수: %d\n", iAcnt);
	printf("P로 시작하는 단어의 수: %d\n", iPcnt);

	fclose(fp);
	printf("\n파일 닫기\n");
	return 0;
}
