/* students please write your program here */
/*
��Ŀ����

����һ�������ε�3�߳��ȣ��жϸ��������Ƿ�Ϊֱ�������Σ����������True�������������False���Ƽ�����������һ����������������int����������bool����������������֮��


��������
ÿ�����������ɿո���������� a, b, c ����ʾ�����ε� 3 ���߳�

1 <= a,b ,c <= 10000

�������
����ÿһ�����룬���True����False�����Ƿ�Ϊֱ��������

��������
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