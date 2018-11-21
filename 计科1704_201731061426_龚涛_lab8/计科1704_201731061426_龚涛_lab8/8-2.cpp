#include<iostream>
#include<string>
using namespace std;
class Shape {
public:
	virtual void draw() = 0; //���麯����ֻ��˵����û��ʵ�֡�����ʵ�����������У�
	~Shape() { cout << "shape" << endl; }
};
class Rectangle : public Shape {
public:
	void draw() { cout << "���ƾ���" << endl; }
};
class Circle : public Shape {
public:
	void draw() { cout << "����Բ" << endl; }
	~Circle() { cout << "circle" << endl; }
};
void main(void) {
	Shape *p;
	p = new Rectangle();
	p->draw();//����rectangle�е�draw����
	p = new Circle();
	p->draw();//����circle�е�draw����
	Rectangle r;
	r.draw();//����rectangle�е�draw����
	Circle c;
	c.draw();//����circle�е�draw����
	//       Shape s;			//����
	//       s.draw(); 			//����
}
