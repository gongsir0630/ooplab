#include<iostream>
#include<cmath>
using namespace std;

const double pi = 3.1415;

class Point
{
public:
	Point() {
		x = 1;
		y = 1;
	}
	void showpoint() {
		cout << "(" << getx() << "," << gety() << ")" << endl;
	}
	void setxy(int xx, int yy) {
		x = xx;
		y = yy;
	}
	int getx()const{ return x; }
	int gety()const{ return y; }
private:
	int x, y;
};

class Radius{
private:
	int r;
public:
	Radius() {
		r = 1;
	}
	void setr(int r1) {
		r = r1;
	}
	int getr()const{ return r; }
};

class Circle:public Radius,public Point
{
public:
	Circle() {
		Point();
		Radius();
	}
	double area() {
		return pi*getr()*getr();
	}
	void showcircle() {
		cout << "Point:	"; showpoint();
		cout << "circle_area:	" << area() << endl;
	}
};

void main() {
	Circle mycircle;
	int x, y;
	int r;
	cout << "set point(x,y):\n";
	cin >> x >> y;
	mycircle.setxy(x,y);
	cout << "set r:\n";
	cin >> r;
	mycircle.setr(r);
	mycircle.showcircle();
}