#include<iostream>
using namespace std;
//��������
int MAX(int x, int y);
float MAX(float x, float y);
int MAX(int x, int y,int z);
float MAX(float x, float y, float z);
//������
int main() {
	int op;
	int x, y, z;
	float a, b, c;
	do {
		//��ӡ�˵�
		cout << "**************************************" << endl;
		cout << "1.���������ȴ�С" << endl;
		cout << "2.����ʵ���ȴ�С" << endl;
		cout << "3.���������ȴ�С" << endl;
		cout << "4.����ʵ���ȴ�С" << endl;
		cout << "0.�˳�����" << endl;
		cout << "**************************************" << endl;
		//��ʾ����
		cout << "Press the key(1,2,3,4,0):	";
		cin >> op;	//��������
		system("cls");	//����
		if (op == 1) {
			cout << "input 2 number(int):  ";
			cin >> x >> y;
			cout << "max = " << MAX(x, y)<<endl;
		}
		if (op == 2) {
			cout << "input 2 number(float):  ";
			cin >> a >> b;
			cout << "max = " << MAX(a, b)<<endl;
		}
		if (op == 3) {
			cout << "input 3 number(int):  ";
			cin >> x >> y>>z;
			cout << "max = " << MAX(x, y, z)<<endl;
		}
		if (op == 4) {
			cout << "input 3 number(float):  ";
			cin >> a >> b>> c;
			cout << "max = " << MAX(a, b, c)<<endl;
		}
		if (op == 0)
			cout << "��������\n";
	} while (op != 0);

	return 0;
}
int MAX(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}
int MAX(int x, int y, int z) {
	int max;
	max = x > y ? x : y;
	return (max > z ? max : z);
}
float MAX(float x, float y) {
	if (x > y)
		return x;
	else
		return y;
}
float MAX(float x, float y, float z) {
	float max;
	max = x > y ? x : y;
	return (max > z ? max : z);
}