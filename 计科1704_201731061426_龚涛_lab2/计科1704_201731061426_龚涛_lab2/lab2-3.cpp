#include <iostream>
using namespace std;
void main()
{
	int num = 500, b;
	int &ref = num; //ref��num�ı��� �������õ�&���Ų��ǵ�ַ����� ����������int���ͺ�����//��֮�� ����һ�����ñ�����г�ʼ����֮�����ٽ����µ�����
	b = 5;
	ref = ref + 100;
	cout << "num=" << num << endl;
	cout << "ref=" << ref << endl;
	num = num + 50;
	cout << "ref=" << ref << endl;
	ref = b;
	cout << "ref=" << ref << endl;
	cout << "num=" << num << endl;
	cin.get();
}
