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
		cout << "�±�Խ��!" << endl;
	}
	catch (...) {
		cout << "�����쳣!" << endl;
	}
	int x = 5;
	int y = 0;
	
	try
	{
		cout << fun(x,y);
	}
	catch (int )
	{
		cout << "����Ϊ0�쳣!" << endl;
	}
	return 0;
}