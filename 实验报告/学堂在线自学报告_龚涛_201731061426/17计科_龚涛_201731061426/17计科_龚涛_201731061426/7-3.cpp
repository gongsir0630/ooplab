//����Ĵ�����������������Base1��Base2��Ȼ������������ఴ�չ��з�ʽ��������Derived������������඼���԰���һ�����г�Աx��
//����Base1��Base2���н���һ�����Ͳ����Ĺ��캯����Derived�Ĺ��캯������Base1��Base2�Ķ�������a��b����ʼ��Derived�����
//����xΪBase1::x��Base2::x֮�͡��뽫����Ĵ��벹����ɣ�ʹ���������Ҫ��
#include <iostream>
using namespace std;

class Base1
{
public:
	int x;
	Base1(int x);
};

class Base2
{
public:
	int x;
	Base2(int x);
};

class Derived :public Base1, public Base2
{
public:
	int x;
	Derived(Base1& a, Base2& b);
};

//��ʵ��Base1��Base2, Derived�Ĺ��캯��
Base1::Base1(int x) {
	this->x = x;
}

Base2::Base2(int x) {
	this->x = x;
}

Derived::Derived(Base1& a, Base2& b) :Base1(a), Base2(b) {
	x = a.x + b.x;
}
int main()
{
	int x, y;
	cin >> x >> y;
	Base1 a(x);
	Base2 b(y);
	Derived d(a, b);
	cout << d.Base1::x << "+" << d.Base2::x << "=" << d.x << endl;
	return 0;
}