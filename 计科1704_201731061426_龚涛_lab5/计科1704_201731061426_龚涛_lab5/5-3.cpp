#include <iostream>
using namespace std;
class B0 { //����B0����
public:
	void display() { cout << "B0::display()" << endl; }  //���г�Ա����
};

class B1 : public B0 {
public:
	void display() { cout << "B1::display()" << endl; }
};
void fun(B0 *ptr) {
	ptr->display();	//"����ָ��->��Ա��"  
}
void main() {  //������
	B0 b0;	//����B0�����
	B1 b1;	//����B1�����
	B0 *p;	//����B0��ָ��
	p = &b0;	//B0��ָ��ָ��B0�����
	fun(p);
	p = &b1;	//B0��ָ��ָ��B1���������
	fun(p);
	b0 = b1;//���������ֵ���������
	b0.display();
	B0 &x = b1; //����������ʼ��������������
	x.display();
	b1.display();
}
