//用函数模板实现函数max，用于找出2个整型数据的最大值和2个浮点型数据的最大值，
//在主函数中定义2个整型变量和两个浮点型变量，输入它们的数值，然后调用这两个函数。
#include<iostream>
using namespace std;
template<class T>
T max(T a, T b) {
	return(a > b ? a : b);
}

int main() {
	int a, b;
	float x, y;
	cout << "input two number(int):" << endl;
	cin >> a >> b;
	cout << "max = " << max(a, b) << endl;

	cout << "input two number(float):" << endl;
	cin >> x >> y;
	cout << "max = " << max(x, y) << endl;

	return 0;
}