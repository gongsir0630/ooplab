//�ú���ģ��ʵ�ֺ���max�������ҳ�2���������ݵ����ֵ��2�����������ݵ����ֵ��
//���������ж���2�����ͱ��������������ͱ������������ǵ���ֵ��Ȼ�����������������
#include<iostream>
using namespace std;
template<class T>
T max(T a, T b) {
	return(a > b ? a : b);
}

int main() {
	int a, b;
	float x, y;
	cout << "input two number(int):" << endl;
	cin >> a >> b;
	cout << "max = " << max(a, b) << endl;

	cout << "input two number(float):" << endl;
	cin >> x >> y;
	cout << "max = " << max(x, y) << endl;

	return 0;
}