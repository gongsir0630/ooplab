//#include<iostream>
//#include<string>
//using namespace std;
//class A {
//private:
//	int a;
//public:
//	A(int x) { a = x; }
//	void setA(int x) { a = x; }
//	void show() { cout << "����A=" << a << endl; }
//};
//class C :public A {  //���м̳� A
//private:
//	int c;
//public:
//	C(int a, int b, int c1) :A(a) { c = c1; }  //�����๹�캯��
//	void setC(int x, int y) { c = x; }
//	void showC() { cout << "c=" << c << endl; }
//	void show() { 
//		A::show();
//		cout << "������C=" << c << endl; 
//	}
//};
//void main() {
//	A  ta(12);
//	C  tc(1, 2, 3);
//	//ta.show();
//	tc.show();
//}
//��ֵ����ԭ��
#include<iostream>
#include<string>
using namespace std;
class A {
private:
	int a;
public:
	A(int x) { a = x; }
	void setA(int x) { a = x; }
	//void show() { cout << "����A=" << a << endl; }
	virtual void show() { cout << "����A=" << a << endl; }
};
class C :public A {  //���м̳�A
private:
	int c;
public:
	C(int a, int c1) :A(a) { c = c1; }  //�����๹�캯��
	void setC(int x) { c = x; }
	void showC() { cout << "c=" << c << endl; }
	void show() {  A::show();  cout<<"������C="<<c<<endl;  }
	};
	void main() {
		A  ta(12), *pa;
		C  tc(1, 3);
		A  &ya = tc;  //��ֵ����ԭ��
		pa = &tc;
		cout << "pa-show" << endl;
		pa->show();  //���ʲô���
		cout << "ya.show" << endl;
		ya.show(); //���ʲô���
		ta = tc;
		cout << "ta.show" << endl;
		ta.show(); //���ʲô���
	}