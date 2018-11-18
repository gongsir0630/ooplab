#include<iostream>
using namespace std;

class Matrix {  //定义Matrix类
public:
	int &operator [] (int i);   //重载下标运算符[]
	void input();               //输入数据函数
	void display();             //输出数据函数
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