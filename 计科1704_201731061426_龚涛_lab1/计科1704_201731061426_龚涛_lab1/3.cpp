#include<iostream>
using namespace std;
int main()
{
	char op;
	do{
		//��ӡ�˵�
		cout << "**************************************" << endl;
		cout << "1.A(dd)" << endl;
		cout << "2.D(elete)" << endl;
		cout << "3.S(ort)" << endl;
		cout << "4.Q(uit)" << endl;
		cout << "**************************************" << endl;
		//��ʾ����
		cout << "Press the key(A,D,S,Q):	";
		cin >> op;	//��������
		system("cls");	//����
		if (op == 'A')
			cout << "ADD data\n";
		if (op == 'D')
			cout << "Delete data\n";
		if (op == 'S')
			cout << "Sort data\n";
		if (op == 'Q')
			cout << "��������\n";
	} while (op != 'Q');

	return 0;
}