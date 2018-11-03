#include<iostream>
using namespace std;
class Point	//定义Point类
{
public:
	Point();
	~Point();
	Point(int xx, int yy);

	void move(int X, int Y);
	int getX() { return x; }
	int getY() { return y; }

private:
	int x, y;
};

Point::Point()
{
	x = y = 0;
	cout << "Default Constructor called." << endl;
}

Point::~Point()
{
	cout << "Destructor called." << endl;
}

Point::Point(int xx, int yy) {
	x = xx;
	y = yy;
	cout << "Constructor called." << endl;
}

void Point::move(int X, int Y) {
	cout << "Moving the point to (" << X << "," << Y << ")" << endl;
	x = X;
	y = Y;
}

int main() {
	int i;
	cout << "Entering main..." << endl;
	Point A[2];	//定义point类型的对象数组
	for (i = 0; i < 2; i++) {
		A[i].move(i + 10, i + 20);
	}
	cout << "print A..." << endl;
	Point B[2] = { Point(),Point(1,2) };	//定义时初始化
	for (i = 0; i < 2; i++)
		B[i].move(i + 10, i + 20);
	cout << "Exiting main..." << endl;
	return 0;
}