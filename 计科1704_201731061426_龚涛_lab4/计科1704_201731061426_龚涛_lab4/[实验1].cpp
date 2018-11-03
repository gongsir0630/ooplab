#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include<iostream>	//c++输入输出
using namespace std;	//c++命名空间

#define  M  5	//数组大小
void  PrintData(double sum);	//输出函数声明
void  ReadData(double tt[M]);	//数组读入函数声明
double Acc(/*int k, */double dd[]) {//实现计算数组元素的小数部分之和
								//写入你的代码
	double sum = 0;
	for (int i = 0; i < M; i++)
		sum += dd[i] - static_cast<int>(dd[i]);
	return sum;
}
void main() {
	//int m;
	double sm;
	double  tt[M];
	system("cls");	//清除屏幕数据
	ReadData(tt);	//读取数据
	sm = Acc(tt);	//求小数部分之和的函数调用语句
	PrintData(sm);  //结果显示在屏幕上
	return;
}
void PrintData(double sum) {  //把sum数据输出到屏幕上
							  //写入你的代码
	printf("sum = %lf\n", sum);
}
void  ReadData(double tt[M]) {  //从键盘中输入5个double数据存于tt数据中
								//写入你的代码
	printf("请输入%d个实数：\n",M);
	for (int i = 0; i < M; i++)
		cin >> tt[i];
}
