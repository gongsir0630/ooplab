#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

class Base {
public:
	virtual double area() {
		cout << "计算图形的面积" << endl;
		return 0;
	}
};

class Triangle :public Base {
private:
	int a, b, c;
public:
	double area() {
		int p = (a + b + c) / 2;
		double s = sqrt(p*(p - a)*(p - b)*(p - c));
		return s;
	}
	void set_abc() {
		cout << "input a,b,c:" << endl;
		cin >> a >> b >> c;
	}
};

class Circle :public Base {
	int r;
public:
	double area() {
		const double pi = 3.1415;
		return pi*r*r;
	}
	void set_r() {
		cout << "input r:" << endl;
		cin >> r;
	}
};

int main() {
	//定义三角形对象并计算面积
	Triangle *pa = new Triangle();
	pa->set_abc();
	cout << "area = " << pa->area() << endl;

	//定义圆类对象并计算面积
	Circle *pb = new Circle();
	pb->set_r();
	cout << "arae = " << pb->area() << endl;

	return 0;
}