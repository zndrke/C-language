#include <stdio.h>
#include "word_cnt.h"


int
main(int argc, char *argv[])
{
	FILE *fp = fopen(argv[1], "r");	//read file
	if (fp == NULL) {
		puts("파일오픈 실패\n");
		return -1;
	}

	tNode *pHead = (tNode*)malloc(sizeof(tNode));
	pHead->pNext = NULL;

	int iCnt = 0;
	
	if (strcmp(argv[2], "A") == 0) {			//parameter A,D,M,I
		iCnt = FileReader(fp, pHead, 'A');
		PrintList(pHead, iCnt);
	} else if (strcmp(argv[2], "D") == 0) {
		iCnt = FileReader(fp, pHead, 'D');
		PrintList(pHead, iCnt);
	} else if (strcmp(argv[2], "M") == 0) {
		iCnt = FileReader(fp, pHead, 'M');
		SortList(pHead, 'M');
		PrintList(pHead, iCnt);
	} else if (strcmp(argv[2], "I") == 0) {
		iCnt = FileReader(fp, pHead, 'I');
		SortList(pHead, 'I');
		PrintList(pHead, iCnt);
	} else {
		puts("Error: sort_method 지정필요(A,D,M,I)\n");
	}

	fclose(fp);
	printf("\n파일 닫기\n");
	return 0;
}
