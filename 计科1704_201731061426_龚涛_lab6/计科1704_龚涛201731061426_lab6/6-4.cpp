#include<iostream>
#include<string>
using namespace std;
class A  {
private:
	int a;
public:
	A(int x)  { a = x; }
	void setA(int x){ a = x; }
	void showA(){ cout << "a=" << a << endl; }
};
class B  {
private:
	int b;
public:
	B(int x)  { b = x; }
	void setB(int x){ b = x; }
	void showB(){ cout << "b=" << b << endl; }
};
class C :public A, private B   //���м̳�A��˽�м̳�B
{
private:
	int c;
public:
	C(int a, int b, int c1) :A(a), B(b) //�����๹�캯����ʼ��
	{
		c = c1;
	}
	void setC(int x, int y)  {
		c = x;
		setB(y);  //ͨ��B��ĳ�Ա����setB()ΪB���˽�г�Աb��ֵ
	}
	void showC()  { cout << "c=" << c << endl; }
	void showABC()  {
		showA();    //�ܷ�ĳ�  cout<<"a="<<a<<endl;
		showB();    //�ܷ�ĳ�  cout<<"b="<<b<<endl;   
		cout << "c=" << c << endl;
	}
};
void main()  {
	C obj(1, 2, 3);
	cout << "��ʾa,b,c" << endl;
	obj.showABC();
	cout<<"��ʾa"<<endl;
	obj.showA();
	cout<<"��ʾb"<<endl;
	//obj.showB();            
}
