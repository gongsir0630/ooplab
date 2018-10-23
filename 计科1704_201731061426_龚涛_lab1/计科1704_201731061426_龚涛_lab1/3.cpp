#include<iostream>
using namespace std;
int main()
{
	char op;
	do{
		//打印菜单
		cout << "**************************************" << endl;
		cout << "1.A(dd)" << endl;
		cout << "2.D(elete)" << endl;
		cout << "3.S(ort)" << endl;
		cout << "4.Q(uit)" << endl;
		cout << "**************************************" << endl;
		//提示输入
		cout << "Press the key(A,D,S,Q):	";
		cin >> op;	//接收输入
		system("cls");	//清屏
		if (op == 'A')
			cout << "ADD data\n";
		if (op == 'D')
			cout << "Delete data\n";
		if (op == 'S')
			cout << "Sort data\n";
		if (op == 'Q')
			cout << "结束程序\n";
	} while (op != 'Q');

	return 0;
}