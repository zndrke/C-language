/***************************************************************
 *  
 *	Copyright (C) 2010 ITS Co., Ltd. All rights reserved.
 *    
 *  SubSystem Name : 
 *  Initial Author : cyshin
 *  Date : 2021-01-19
 *  Description:
 *  ���� ���α׷���4 4�� ���� 
 *  ���ڿ��� �����ϰ� �ִ� ������ ��� 
 *  A�� P�� �����ϴ� �ܾ��� ���� ���� ���
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
		puts("���Ͽ��� ����\n");
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

	printf("A�� �����ϴ� �ܾ��� ��: %d\n", iAcnt);
	printf("P�� �����ϴ� �ܾ��� ��: %d\n", iPcnt);

	fclose(fp);
	printf("\n���� �ݱ�\n");
	return 0;
}
