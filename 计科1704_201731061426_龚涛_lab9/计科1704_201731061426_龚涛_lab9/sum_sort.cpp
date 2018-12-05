#include<iostream>
#include<algorithm>
using namespace std;
template<class T>
class Sum_Sort {
	T *p;//��̬�������飬ָ��
	int length;//���鳤��
public:
	Sum_Sort() {};
	void set_length() {
		cout << "input the length of your array:" << endl;
		cin >> this->length;
		this->p = new T[this->length];
	}
	void Input() {
		cout << "����������Ԫ��:" << endl;
		for (int i = 0; i < length; i++)
			cin >> p[i];
	}
	T Ary_Sum() {
		T sum = 0;
		for (int i = 0; i < length; i++)
			sum += p[i];
		return sum;
	}

	T* Ary_Sort_less() {//��������
		sort(p, p + length, less<T>());
		return p;
	}

	T* Ary_Sort_greater() {//��������
		sort(p, p + length, greater<T>());
		return p;
	}

	void Output() {
		cout << "sum = " << Ary_Sum() << endl;
		cout << "��������:" << endl;
		p = Ary_Sort_less();
		for (int i = 0; i < length; i++)
			cout << p[i] << " ";
		cout << endl;
		cout << "��������:" << endl;
		p = Ary_Sort_greater();
		for (int i = 0; i < length; i++)
			cout << p[i] << " ";
	}
	~Sum_Sort()
	{
		delete[] p;
		cout << "���ͷŶ�̬���������" << endl;
	}
};

int main() {
	Sum_Sort<int> A;
	Sum_Sort<float> B;
	cout << "==========��������==========" << endl;
	A.set_length();
	A.Input();
	A.Output();
	cout << endl;
	cout << "==========����������==========" << endl;
	B.set_length();
	B.Input();
	B.Output();
	cout << endl;
	return 0;
}