#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 50

typedef struct tNode {
	struct tNode *pNext;
	char szWord[MAX_LEN];
	int iCount;
} tNode;

void PrintList(tNode *p_pHead, int p_iTotalCnt);

void AddList(tNode *p_pHead, char szWord[MAX_LEN], int p_iMod);

int FileReader(FILE *fp, tNode *p_pHead, int p_iMod);

void SortList(tNode *p_pHead, int p_iMod); 

void ReverseList(tNode *p_pHead);
