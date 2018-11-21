//#include<iostream>
//#include<string>
//using namespace std;
//class A {
//private:
//	int a;
//public:
//	A(int x) { a = x; }
//	void setA(int x) { a = x; }
//	void show() { cout << "基类A=" << a << endl; }
//};
//class C :public A {  //公有继承 A
//private:
//	int c;
//public:
//	C(int a, int b, int c1) :A(a) { c = c1; }  //派生类构造函数
//	void setC(int x, int y) { c = x; }
//	void showC() { cout << "c=" << c << endl; }
//	void show() { 
//		A::show();
//		cout << "派生类C=" << c << endl; 
//	}
//};
//void main() {
//	A  ta(12);
//	C  tc(1, 2, 3);
//	//ta.show();
//	tc.show();
//}
//赋值兼容原则
#include<iostream>
#include<string>
using namespace std;
class A {
private:
	int a;
public:
	A(int x) { a = x; }
	void setA(int x) { a = x; }
	//void show() { cout << "基类A=" << a << endl; }
	virtual void show() { cout << "基类A=" << a << endl; }
};
class C :public A {  //公有继承A
private:
	int c;
public:
	C(int a, int c1) :A(a) { c = c1; }  //派生类构造函数
	void setC(int x) { c = x; }
	void showC() { cout << "c=" << c << endl; }
	void show() {  A::show();  cout<<"派生类C="<<c<<endl;  }
	};
	void main() {
		A  ta(12), *pa;
		C  tc(1, 3);
		A  &ya = tc;  //赋值兼容原则
		pa = &tc;
		cout << "pa-show" << endl;
		pa->show();  //输出什么结果
		cout << "ya.show" << endl;
		ya.show(); //输出什么结果
		ta = tc;
		cout << "ta.show" << endl;
		ta.show(); //输出什么结果
	}