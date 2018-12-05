#include<iostream>
using namespace std;
int fun(int a, int b) {
	if (b == 0)
		throw a;
	return a / b;
}
int main() {
	int a[] = { 1,2,3,4 };
	int i = 0;
	
	try
	{
		for (i = 0; i < 5; i++)
			if (i < 0 || i>3)
				throw i;
			cout << "a[" << i << "]=" << a[i] << endl;
	}
	catch (int)
	{
		cout << "下标越界!" << endl;
	}
	catch (...) {
		cout << "其他异常!" << endl;
	}
	int x = 5;
	int y = 0;
	
	try
	{
		cout << fun(x,y);
	}
	catch (int )
	{
		cout << "除数为0异常!" << endl;
	}
	return 0;
}