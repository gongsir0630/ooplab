#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include<iostream>	//c++�������
using namespace std;	//c++�����ռ�

#define  M  5	//�����С
void  PrintData(double sum);	//�����������
void  ReadData(double tt[M]);	//������뺯������
double Acc(/*int k, */double dd[]) {//ʵ�ּ�������Ԫ�ص�С������֮��
								//д����Ĵ���
	double sum = 0;
	for (int i = 0; i < M; i++)
		sum += dd[i] - static_cast<int>(dd[i]);
	return sum;
}
void main() {
	//int m;
	double sm;
	double  tt[M];
	system("cls");	//�����Ļ����
	ReadData(tt);	//��ȡ����
	sm = Acc(tt);	//��С������֮�͵ĺ����������
	PrintData(sm);  //�����ʾ����Ļ��
	return;
}
void PrintData(double sum) {  //��sum�����������Ļ��
							  //д����Ĵ���
	printf("sum = %lf\n", sum);
}
void  ReadData(double tt[M]) {  //�Ӽ���������5��double���ݴ���tt������
								//д����Ĵ���
	printf("������%d��ʵ����\n",M);
	for (int i = 0; i < M; i++)
		cin >> tt[i];
}
