#include <iostream>
using namespace std;
class Point {
public:
	Point(int xx = 0, int yy = 0) { 
		X = xx;
		Y = yy;
		cout << "���캯��������" << endl;
	}
	Point(Point&  p);
	~Point();
	int GetX() { return X; }
	int GetY() { return Y; }
private:
	int  X, Y;
};
Point::Point(Point& p) {
	X = p.X;
	Y = p.Y;
	cout << "�������캯��������" << endl;
}
Point::~Point() { 
	cout << "��������������" << endl;
}

void fun1(Point p) {
	cout << p.GetX() << endl;
}
Point fun2() {
	Point A(1, 2);
	return A; //���ÿ������캯�� ������ʱ����
}
void main() {
	Point A(1, 2);//���캯��������
	Point B(A); //�������캯��������
	Point C = A;
	fun1(A); //���ÿ������캯��
	B = fun2();
	cout << B.GetX() << endl;
}
