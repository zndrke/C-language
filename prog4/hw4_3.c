/***************************************************************
 *  
 *	Copyright (C) 2010 ITS Co., Ltd. All rights reserved.
 *    
 *  SubSystem Name : 
 *  Initial Author : cyshin
 *  Date : 2021-01-19
 *  Description:
 *  도전 프로그래밍4 3번 문제 
 *  복소수를 나타내는 구조체를 만들고 복소수의 합&곱
 **************************************************************/

#include <stdio.h>
#include <stdlib.h>
typedef struct tComplex{
	double dReal;
	double dImaginary;
}tComplex;

void
SumComplex(tComplex *p_pComp1, tComplex *p_pComp2, tComplex *p_pCompResult)
{
	p_pCompResult->dReal = p_pComp1->dReal + p_pComp2->dReal;
	p_pCompResult->dImaginary = p_pComp1->dImaginary + p_pComp2->dImaginary;
	return;
}

void
MultiplyComplex(tComplex *p_pComp1, tComplex *p_pComp2, tComplex *p_pCompResult)
{
	p_pCompResult->dReal = p_pComp1->dReal * p_pComp2->dReal - p_pComp1->dImaginary * p_pComp2->dImaginary;
	p_pCompResult->dImaginary = p_pComp1->dImaginary * p_pComp2->dReal + p_pComp1->dReal * p_pComp2->dImaginary  ;
	return;
}

int
main(void)
{
	tComplex *pComp1 = (tComplex*)malloc(sizeof(tComplex));
	tComplex *pComp2 = (tComplex*)malloc(sizeof(tComplex));
	tComplex *pCompResult = (tComplex*)malloc(sizeof(tComplex));
//할당 필요x
	printf("복소수 입력1[실수 허수]:");
	scanf("%lf %lf", &(pComp1->dReal), &(pComp1->dImaginary));
	
	printf("복소수 입력2[실수 허수]:");
	scanf("%lf %lf", &(pComp2->dReal), &(pComp2->dImaginary));
	
	SumComplex(pComp1, pComp2, pCompResult);
	printf("합의 결과] 실수: %g, 허수 :%g\n",pCompResult->dReal, pCompResult->dImaginary);
//입력과 출력형태 일치시키기
	MultiplyComplex(pComp1, pComp2, pCompResult);
	printf("곱의 결과] 실수: %g, 허수 :%g\n",pCompResult->dReal, pCompResult->dImaginary);
	return 0;
}
