//#include<iostream>
//using namespace std;
//class Point
//{
//public:
//	Point() {
//		X = Y = 0;
//		cout << "Default Constructor called." << endl;		
//	}
//	Point(int xx, int yy) {
//		X = xx;
//		Y = yy;
//		cout << "Constructor called." << endl;
//	}
//	~Point() {
//		cout << "Destructor called." << endl;
//	}
//	int getX() { return X; }
//
//	int getY() { return Y; }
//
//private:
//	int X, Y;
//};
//
//int main() {
//	cout << "Step One:" << endl;
//	Point *Ptr1 = new Point();
//	delete Ptr1;
//
//	cout << "Step Two:" << endl;
//	Ptr1 = new Point(1, 2);
//	cout << Ptr1->getX() << endl;
//	delete Ptr1;
//	return 0;
//
//}

//����⣺�������ϵ�new��delete��ʹ�ã���Ƴ�������Crectangle���������ݳ�Ա��length��width���ֱ�ͨ�����캯����ֵ����Ա����void setvalue(int x, int y)�ֱ�Գ�Աlength��width��ֵ��float area()���������Ҫ���ö�̬���䷽ʽ����������ָ����ó�Ա����
//ע�⣺һ��Ҫ��delete�ͷŶ���
#include<iostream>
using namespace std;
class Crectangle
{
public:
	Crectangle();
	Crectangle(int l, int w) {
		length = l;
		width = w;
	}
	~Crectangle();

	void setvalue(int x, int y);
	float area();

private:
	int length;
	int width;
};

Crectangle::Crectangle()
{
	width = 0;
	length = 0;
}

Crectangle::~Crectangle()
{
	cout << "Desconstructor called." << endl;
}

void Crectangle::setvalue(int x, int y) {
	length = x;
	width = y;
}

float Crectangle::area() {
	return length*width;
}

int main() {
	int a, b;
	cout << "һ��Ĭ�ϲ�����" << endl;
	Crectangle *p1 = new Crectangle();
	cout << "area = " << static_cast<float>(p1->area()) << endl;
	delete p1;

	cout << "�������캯����������" << endl;
	Crectangle *p2 = new Crectangle(10,20);
	cout << "area = " << static_cast<float>(p2->area()) << endl;
	delete p2;

	cout << "����ͨ����ֵ����setvalue���ò�����" << endl;
	Crectangle *p3 = new Crectangle();
	cout << "enter height and width:\n";
	cin >> a >> b;
	p3->setvalue(a, b);
	cout << "area = " << static_cast<float>(p3->area()) << endl;
	delete p3;

	return 0;
}