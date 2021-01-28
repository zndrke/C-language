/***************************************************************
 *  
 *	Copyright (C) 2010 ITS Co., Ltd. All rights reserved.
 *    
 *  SubSystem Name : 
 *  Initial Author : cyshin
 *  Date : 2021-01-19
 *  Description:
 *  ���� ���α׷���4 5�� ���� 
 *  �ΰ��� �ؽ�Ʈ ������ ������ �ٸ��� Ȯ���ϴ� ���α׷� 
 **************************************************************/

#include <stdio.h>
#include <stdbool.h>
	
int
main(int argc, char* argv[])
{
	FILE *fp1 = fopen(argv[1], "r");			
	FILE *fp2 = fopen(argv[2], "r");		
	
	bool bFlag = false;

	int ch1;
	int ch2;

	if (fp1 == NULL ) {
		puts("fp1���Ͽ��� ����\n");
		bFlag = true;
	} 
	if(fp2 == NULL) {
		puts("fp2���Ͽ��� ����\n");
		bFlag = true;
	} 
	if( bFlag != true){
		while (!feof(fp1)) {
			ch1 = fgetc(fp1);
			ch2	= fgetc(fp2);
			printf("%c", ch2);
			if (ch1 != ch2) {
				printf("�� ������ ��ġ���� �ʽ��ϴ�\n");
				break;
			}
		}
		if (feof(fp2)) {
			printf("�� ������ ������ ��ġ�մϴ�\n");
		}
		fclose(fp1);
		fclose(fp2);
		printf("���� �ݱ�\n");
	}

	return 0;
}
