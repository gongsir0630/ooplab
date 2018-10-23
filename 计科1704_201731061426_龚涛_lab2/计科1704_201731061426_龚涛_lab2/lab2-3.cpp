#include <iostream>
using namespace std;
void main()
{
	int num = 500, b;
	int &ref = num; //ref是num的别名 代表引用的&符号不是地址运算符 ，它出现在int类型和引用//名之间 声明一个引用必须进行初始化，之后不能再进行新的引用
	b = 5;
	ref = ref + 100;
	cout << "num=" << num << endl;
	cout << "ref=" << ref << endl;
	num = num + 50;
	cout << "ref=" << ref << endl;
	ref = b;
	cout << "ref=" << ref << endl;
	cout << "num=" << num << endl;
	cin.get();
}
