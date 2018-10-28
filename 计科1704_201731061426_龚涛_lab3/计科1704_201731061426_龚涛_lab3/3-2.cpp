#include <iostream>
using namespace std;
class Point {
public:
	Point(int xx = 0, int yy = 0) { 
		X = xx;
		Y = yy;
		cout << "构造函数被调用" << endl;
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
	cout << "拷贝构造函数被调用" << endl;
}
Point::~Point() { 
	cout << "析构函数被调用" << endl;
}

void fun1(Point p) {
	cout << p.GetX() << endl;
}
Point fun2() {
	Point A(1, 2);
	return A; //调用拷贝构造函数 生成临时对象
}
void main() {
	Point A(1, 2);//构造函数被调用
	Point B(A); //拷贝构造函数被调用
	Point C = A;
	fun1(A); //调用拷贝构造函数
	B = fun2();
	cout << B.GetX() << endl;
}
