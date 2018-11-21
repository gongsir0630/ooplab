#include<iostream>
#include<string>
using namespace std;
class Shape {
public:
	virtual void draw() = 0; //纯虚函数（只有说明，没有实现。具体实现在派生类中）
	~Shape() { cout << "shape" << endl; }
};
class Rectangle : public Shape {
public:
	void draw() { cout << "绘制矩形" << endl; }
};
class Circle : public Shape {
public:
	void draw() { cout << "绘制圆" << endl; }
	~Circle() { cout << "circle" << endl; }
};
void main(void) {
	Shape *p;
	p = new Rectangle();
	p->draw();//调用rectangle中的draw函数
	p = new Circle();
	p->draw();//调用circle中的draw函数
	Rectangle r;
	r.draw();//调用rectangle中的draw函数
	Circle c;
	c.draw();//调用circle中的draw函数
	//       Shape s;			//错误
	//       s.draw(); 			//错误
}
