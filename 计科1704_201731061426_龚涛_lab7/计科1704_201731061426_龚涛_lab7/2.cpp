//#include<iostream>
//using  namespace  std;
//class  complex;//��Ҫ���ԭ������ VC++�༭����Ҫ
//complex  operator+(int, complex);//��Ҫ��Ԫ��ͨ��������VC++�༭����Ҫ
//class complex {
//private:
//	double real, imag;
//public:
//	complex(double r = 0, double i = 0) { real = r; imag = i; }
//	friend  complex operator + (int, complex);  //�����������ͨ��Ԫ����ԭ��
//												//��������ֵ���� friend operator @(��������); ����@��ʾ�����
//	void print();
//};
///*�����������ͨ��Ԫ����ʵ�ֲ��ָ�ʽ��
//������������ operator @(��������)  {   //����  } */
//complex operator +(int c, complex d) {
//	complex sum;
//	sum.real = c + d.real;
//	sum.imag = d.imag;
//	return sum;
//}
//void complex::print() {
//	cout << "real=" << real << endl;
//	cout << "imag=" << imag << endl;
//}
//void main() {
//	complex a(5.0, 6.0), b;
//	b = 5 + a;   //+���õ����ĸ�����
//	b.print();
//}
#include<iostream>
#include<string>
using namespace std;
class People;
int operator==(People &a,People &b);
class People
{
public:
	People();
	People(string name1, string id1) {
		name = name1;
		id = id1;
	}
	~People();
	friend int operator==(People &a,People &b);
private:
	string name;
	string id;
};

People::People()
{
}

People::~People()
{
}

int operator==(People &a, People &b) {
	if (a.id == b.id)
		return 1;
	else
		return 0;
}

int main() {
	string name, id;
	cout << "please input name and id of people a:\n";
	cin >> name >> id;
	People a(name, id);
	cout << "please input name and id of people b:\n";
	cin >> name >> id;
	People b(name, id);
	if (a == b)
		cout << 1 << endl;
	else
		cout << 0 << endl;
	return 0;
}