#include<iostream>
using namespace std;

class Matrix {  //����Matrix��
public:
	int &operator [] (int i);   //�����±������[]
	void input();               //�������ݺ���
	void display();             //������ݺ���
private:
	int mat[5];
};
int &Matrix::operator[](int i) {
	return this->mat[i];
}

void Matrix::input() {
	for (int i = 0; i < 5; i++)
		cin >> mat[i];
}

void Matrix::display() {
	for (int i = 0; i < 5; i++)
		cout << (*this)[i] << " ";
	cout << endl;
}

int main() {
	Matrix m;
	m.input();
	m.display();
	return 0;
}