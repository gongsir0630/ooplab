#include<iostream>
using namespace std;
//if���֦�ṹ���㺯��ֵ
int f_if(int x)
{
	if (x >= 0 && x < 100)
		return x;
	else if (x >= 100 && x < 200)
		return x*x - 1;
	else if (x >= 200 && x < 400)
		return 5 * x*x + 1;
	else if (x >= 400)
		return 4 * x - 1;
}
//switch�ṹ���㺯��ֵ
int f_switch(int x)
{
	int f;
	switch (x/100)
	{
	case 0:
		f = x;
		break;
	case 1:
		f = x*x - 1;
		break;
	case 2:
	case 3:
		f = 5 * x*x + 1;
		break;
	default:
		f = 4 * x - 1;
		break;
	}
	return f;
}
int main()
{
	int x;
	cin >> x;
	while (x < 0)
	{
		cout << "input error! please try again.\n";
		cin >> x;
	}
	cout << "if��������\n";
	cout << "f(" << x << ")=" << f_if(x) << endl;
	cout << "switch��������\n";
	cout << "f(" << x << ")=" << f_switch(x) << endl;
	return 0;
}