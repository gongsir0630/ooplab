/* students please write your program here */
/*
��Ŀ����
쳲���������f(n)�������¶��壺

f(0) = 1, f(1) = 1, f(n) = f(n-1) + f(n-2) (n >= 2)��

���õݹ�ķ�����д���������ڸ�����n�����쳲��������еĵ�n��f(n)


��������
ÿ������һ������ n

0 <= n<= 30


�������
����ÿһ�����룬���쳲��������е�n���ֵf(n)


��������
1
10
25
�������
1
89
121393
*/
#include<iostream>
using namespace std;
int f(int n) {
	if (n == 0 || n == 1)
		return 1;
	else
		return f(n - 1) + f(n - 2);
}

int main() {
	int x;
	cin >> x;
	while (x<0 || x>30)
	{
		cin >> x;
	}
	cout << f(x) << endl;

	return 0;
}