/***************************************************************
 *  
 *	Copyright (C) 2010 ITS Co., Ltd. All rights reserved.
 *    
 *  SubSystem Name : 
 *  Initial Author : cyshin
 *  Date : 2021-01-19
 *  Description:
 *  ���� ���α׷���4 3�� ���� 
 *  ���Ҽ��� ��Ÿ���� ����ü�� ����� ���Ҽ��� ��&��
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
//�Ҵ� �ʿ�x
	printf("���Ҽ� �Է�1[�Ǽ� ���]:");
	scanf("%lf %lf", &(pComp1->dReal), &(pComp1->dImaginary));
	
	printf("���Ҽ� �Է�2[�Ǽ� ���]:");
	scanf("%lf %lf", &(pComp2->dReal), &(pComp2->dImaginary));
	
	SumComplex(pComp1, pComp2, pCompResult);
	printf("���� ���] �Ǽ�: %g, ��� :%g\n",pCompResult->dReal, pCompResult->dImaginary);
//�Է°� ������� ��ġ��Ű��
	MultiplyComplex(pComp1, pComp2, pCompResult);
	printf("���� ���] �Ǽ�: %g, ��� :%g\n",pCompResult->dReal, pCompResult->dImaginary);
	return 0;
}
