//#include<iostream>
//using namespace std;
//class complex {
//	double real, imag;
//public:
//	complex(double r = 0, double i = 0) { real = r; imag = i; }
//	complex operator + (complex &);  //��������صĳ�Ա����ԭ��
//									 //������������ operator @(��������);  ���У�@��ʾ�����
//	void print();
//};
///*���������ʵ�֣�
//������������ ����::operator @(��������)
//{
////����
//}*/
//complex  complex::operator+(complex &c) {  //operator+ ����complex�ĳ�Ա����
//	complex sum;
//	sum.real = real + c.real;
//	sum.imag = imag + c.imag;
//	return sum;
//}
//void complex::print() {
//	cout << "real=" << real << endl;
//	cout << "imag=" << imag << endl;
//}
//void main() {
//	complex  a(5.0, 6.0), b(4.0, 5.0);
//	complex  c;
//	c = a + b;
//	//c=5+a;
//	c.print();
//}
#include<iostream>
#include<string>
using namespace std;
class People
{
public:
	People() {};
	People(string namw1,string id1);
	~People();
	int operator==(People &);
private:
	string name;
	string id;
};

People::People(string name1,string id1)
{
	name = name1;
	id = id1;
}

People::~People()
{
}

int People::operator==(People &c) {
	if (name == c.name && id == c.id)
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