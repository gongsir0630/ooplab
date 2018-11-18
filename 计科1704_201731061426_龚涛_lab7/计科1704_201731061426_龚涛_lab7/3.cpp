//#include<iostream>
//using namespace std;
//class complex {
//private:
//	double real, imag;
//public:
//	complex(double r = 0, double i = 0) { real = r; imag = i; }
//	complex  &operator++();  //ǰ׺��ʽԭ��
//	complex  operator++(int);  //��׺��ʽԭ��
//	void print();
//};
//complex &complex::operator++() {//ǰ׺��ʽ����
//	++real;
//	++imag;
//	return (*this);
//}
//complex complex::operator++(int c) {//��׺��ʽ����
//	complex temp = *this;
//	++real;
//	++imag;
//	return temp;
//}
//void complex::print() {
//	cout << "real=" << real << endl;
//	cout << "imag=" << imag << endl;
//}
//void main() {
//	complex a(5.0, 6.0), b(4.0, 5.0);
//	complex c, d, f, g;
//	f = ++c; //�ȼ���ʽc.operator++();
//	g = d++; //�ȼ���ʽd.operator++(0);
//	f.print();
//	g.print();
//}
#include<iostream>
using namespace std;

class Point
{
public:
	Point();
	~Point();
	void setxy() {
		cout << "enter x,y:" << endl;
		cin >> x >> y;
	}
	Point operator++();
	Point operator--();
	Point operator++(int);
	Point operator--(int);
	void print() {
		cout << "(" << x << "," << y << ")" << endl;
	}
private:
	int x, y;
};

Point::Point()
{
	x = 0;
	y = 0;
}

Point::~Point()
{
}

Point Point::operator++() {
	++x;
	++y;
	return *this;
}

Point Point::operator++(int) {
	Point p = *this;
	++x;
	++y;
	return p;
}

Point Point::operator--() {
	--x;
	--y;
	return *this;
}

Point Point::operator--(int) {
	Point p = *this;
	--x;
	--y;
	return p;
}

int main() {
	Point A;
	A.setxy();
	cout << "A++:" << endl; (A++).print();
	A.setxy();
	cout << "A--:" << endl; (A--).print();
	A.setxy();
	cout << "++A:" << endl; (++A).print();
	A.setxy();
	cout << "--A:" << endl; (--A).print();
	return 0;
}