#include<iostream>
using namespace std;
//函数声明
int MAX(int x, int y);
float MAX(float x, float y);
int MAX(int x, int y,int z);
float MAX(float x, float y, float z);
//主函数
int main() {
	int op;
	int x, y, z;
	float a, b, c;
	do {
		//打印菜单
		cout << "**************************************" << endl;
		cout << "1.两个整数比大小" << endl;
		cout << "2.两个实数比大小" << endl;
		cout << "3.三个整数比大小" << endl;
		cout << "4.三个实数比大小" << endl;
		cout << "0.退出程序" << endl;
		cout << "**************************************" << endl;
		//提示输入
		cout << "Press the key(1,2,3,4,0):	";
		cin >> op;	//接收输入
		system("cls");	//清屏
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
			cout << "结束程序\n";
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