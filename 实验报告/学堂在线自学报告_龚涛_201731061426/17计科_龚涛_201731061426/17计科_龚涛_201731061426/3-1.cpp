/* students please write your program here */
/*
题目描述

输入一个三角形的3边长度，判断该三角形是否为直角三角形，若是则输出True，若不是则输出False。推荐做法：定义一个函数，接受三个int参数，返回bool，再用主函数调用之。


输入描述
每行输入三个由空格隔开的整数 a, b, c ，表示三角形的 3 条边长

1 <= a,b ,c <= 10000

输出描述
对于每一行输入，输出True或者False表明是否为直角三角形

样例输入
3 4 5
6 7 8
1 1 1
*/
#include<iostream>
using namespace std;
bool f(int a, int b, int c) {
	int A = a*a;
	int B = b*b;
	int C = c*c;
	if (A + B == C || A + C == B || B + C == A)
		return true;
	else
		return false;
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	while (a<1 || a>10000 || b<1 || b>10000 || c<1 || c>10000)
	{
		cin >> a >> b >> c;
	}
	if (f(a, b, c))
		cout << "True" << endl;
	else
	{
		cout << "False" << endl;
	}

	return 0;
}