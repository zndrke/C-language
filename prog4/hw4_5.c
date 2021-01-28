/***************************************************************
 *  
 *	Copyright (C) 2010 ITS Co., Ltd. All rights reserved.
 *    
 *  SubSystem Name : 
 *  Initial Author : cyshin
 *  Date : 2021-01-19
 *  Description:
 *  도전 프로그래밍4 5번 문제 
 *  두개의 텍스트 파일이 같은지 다른지 확인하는 프로그램 
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
		puts("fp1파일오픈 실패\n");
		bFlag = true;
	} 
	if(fp2 == NULL) {
		puts("fp2파일오픈 실패\n");
		bFlag = true;
	} 
	if( bFlag != true){
		while (!feof(fp1)) {
			ch1 = fgetc(fp1);
			ch2	= fgetc(fp2);
			printf("%c", ch2);
			if (ch1 != ch2) {
				printf("두 파일은 일치하지 않습니다\n");
				break;
			}
		}
		if (feof(fp2)) {
			printf("두 파일은 완전히 일치합니다\n");
		}
		fclose(fp1);
		fclose(fp2);
		printf("파일 닫기\n");
	}

	return 0;
}
