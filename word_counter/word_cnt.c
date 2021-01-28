/***************************************************************
 *  
 *	Copyright (C) 2010 ITS Co., Ltd. All rights reserved.
 *    
 *  SubSystem Name : 
 *  Initial Author : cyshin
 *  Date : 2021-01-08 
 *  Description:
 *  Word Counter 프로그램
 *  파일을 입력받아 단어의 개수를 세고 단어를 정렬해주는 프로그램!
 *  사전순 : A , 사전역순 : D , 빈도순 : I , 빈도역순 : M 
 **************************************************************/

#include "word_cnt.h"

/*
void 
ReverseList(tNode* p_pHead)
{
	tNode *pCur;
	tNode *pPrev;
	tNode *pNext;

	pNext = p_pHead->pNext;

	pCur = NULL;
	pPrev = NULL;

	while (pNext != NULL) {
		pPrev = pCur;
		pCur = pNext;
		pNext = pNext->pNext;

		pCur->pNext = pPrev;
	}
	p_pHead->pNext = pCur;
	return ;
}*/

/*
void 
Sort_M(tNode *p_tHead)
{													//selection
	tNode* tMax = (tNode*)malloc(sizeof(tNode));
	tNode* tTmp = (tNode*)malloc(sizeof(tNode));
	tNode* i; 
	tNode* j;

	for (i = p_tHead->pNext; i->pNext != NULL ; i = i->pNext) {
		tMax = i;
		for (j = i->pNext ; j != NULL ; j = j->pNext ) {
			if (j->iCount > tMax->iCount) {
				tMax = j ;
			}
		}
		strcpy(tTmp->szWord , tMax->szWord);
		tTmp->iCount = tMax->iCount;
		strcpy(tMax->szWord , i->szWord);
		tMax->iCount = i->iCount;
		strcpy(i->szWord , tTmp->szWord);
		i->iCount = tTmp->iCount;
	}
	return ;
}

*/

void 
PrintList(tNode *p_pHead, int p_iTotalCnt)
{
	int iCnt = 0;
	tNode *pCurr;
	tNode *pFree;
	for (pCurr = p_pHead; pCurr->pNext != NULL;) {	
		printf("%-16s: %d\n", pCurr->pNext->szWord, pCurr->pNext->iCount);
		iCnt++;
		pFree = pCurr;
		pCurr = pCurr->pNext;
		free(pFree);
	}
	free(pCurr);
	printf("----------------------\n");
	printf("distinct Word cnt : %d\n", iCnt);
	printf("total Word cnt : %d\n", p_iTotalCnt);

	return ;
}

void 
SortList(tNode *p_pHead, int p_iMod){						//bubble
	tNode *pTmp;
	tNode *i; 
	tNode *j;
	tNode *pSorted = NULL;
	i = p_pHead;
	while (i->pNext->pNext != pSorted) {
		j = i->pNext;
		while (j->pNext != pSorted) {
 			if (i->pNext->iCount < j->pNext->iCount) {
				if (p_iMod == 'M') {
					//swp
					pTmp = j->pNext;
					j->pNext = pTmp->pNext;
					pTmp->pNext = j;
					i->pNext = pTmp;
				}
			} else {
				if (p_iMod == 'I') {
					//swp
					pTmp = j->pNext;
					j->pNext = pTmp->pNext;
					pTmp->pNext = j;
					i->pNext = pTmp;
				}
			}
			i = i->pNext;
			j = i->pNext;
		}
		pSorted = j; 
		i = p_pHead;
	}
}

void 
AddList(tNode *p_pHead, char p_szWord[MAX_LEN], int p_iMod)
{
	tNode *pNewNode = (tNode*)malloc(sizeof(tNode));	// make node

	pNewNode->pNext = NULL;
	strcpy(pNewNode->szWord, p_szWord);
	pNewNode->iCount = 1;
	tNode *pCurr = p_pHead;
	
	while (pCurr->pNext != NULL) {
		if (strcmp(pCurr->pNext->szWord, pNewNode->szWord) < 0) {			
			if (p_iMod == 'D') {											//stop
				pNewNode->pNext = pCurr->pNext;
				pCurr->pNext = pNewNode;
				break;
			} else { 
				pCurr = pCurr->pNext;										//continue
			}
		} else if (strcmp(pCurr->pNext->szWord, pNewNode->szWord) > 0) {	
			if (p_iMod == 'D') {											//continue
				pCurr = pCurr->pNext;
			} else {
				pNewNode->pNext = pCurr->pNext;								//stop
				pCurr->pNext = pNewNode;
				break;
			}
		} else if (strcmp(pCurr->pNext->szWord, pNewNode->szWord) == 0) {	// same Word
			pCurr->pNext->iCount++;
			//newnode free
			break;
		}
	}
	if (pCurr->pNext == NULL) {			// end of the list
		pNewNode->pNext = NULL;
		pCurr->pNext = pNewNode;
	}
	return ;
}

int 
FileReader(FILE *fp, tNode *p_pHead, int p_iMod)
{
	int ch;
	int i = 0;
	char szWord[MAX_LEN];
	int iCnt = 0;

	while ((ch = fgetc(fp)) != EOF) {
		if (ch >= 'A' && ch <= 'Z') {			// upper to lower
			ch += 32;
		}
		if (ch >= 'a' && ch <= 'z') {			// make szWord array
			szWord[i] = ch;
			i++;
		} else {
			if (i != 0) {
				szWord[i] = '\0';
				AddList(p_pHead, szWord, p_iMod);
				i = 0;
				iCnt++;
			}
		}
	}
	return iCnt;
}


