//#include<iostream>
//using  namespace  std;
//class  complex;//需要类的原型声明 VC++编辑器需要
//complex  operator+(int, complex);//需要友元普通函数声明VC++编辑器需要
//class complex {
//private:
//	double real, imag;
//public:
//	complex(double r = 0, double i = 0) { real = r; imag = i; }
//	friend  complex operator + (int, complex);  //运算符重载普通友元函数原型
//												//函数返回值类型 friend operator @(参数表列); 其中@表示运算符
//	void print();
//};
///*运算符重载普通友元函数实现部分格式：
//函数返回类型 operator @(参数表列)  {   //代码  } */
//complex operator +(int c, complex d) {
//	complex sum;
//	sum.real = c + d.real;
//	sum.imag = d.imag;
//	return sum;
//}
//void complex::print() {
//	cout << "real=" << real << endl;
//	cout << "imag=" << imag << endl;
//}
//void main() {
//	complex a(5.0, 6.0), b;
//	b = 5 + a;   //+调用的是哪个函数
//	b.print();
//}
#include<iostream>
#include<string>
using namespace std;
class People;
int operator==(People &a,People &b);
class People
{
public:
	People();
	People(string name1, string id1) {
		name = name1;
		id = id1;
	}
	~People();
	friend int operator==(People &a,People &b);
private:
	string name;
	string id;
};

People::People()
{
}

People::~People()
{
}

int operator==(People &a, People &b) {
	if (a.id == b.id)
		return 1;
	else
		return 0;
}

int main() {
	string name, id;
	cout << "please input name and id of people a:\n";
	cin >> name >> id;
	People a(name, id);
	cout << "please input name and id of people b:\n";
	cin >> name >> id;
	People b(name, id);
	if (a == b)
		cout << 1 << endl;
	else
		cout << 0 << endl;
	return 0;
}