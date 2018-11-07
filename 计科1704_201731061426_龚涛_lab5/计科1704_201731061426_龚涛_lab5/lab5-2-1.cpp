#include<iostream>
#include<string>
using namespace std;
class person {//person基类
private:
	string name;
protected:
	int age;
public:
	void printname();
	void setvalue_p(string name1, int age1) { name = name1;  age = age1; }
	void print() { cout << "name=" << name << " age=" << age << endl; }
};
class student :protected person { //student 派生类
private:
	int no;
	float score;
public:
	void setvalue(string name1, int age1, int no1, float score1) {
		//name = name1;//私有成员在 派生类中不可直接访问
		//age = age1;  //这里不报错，保护成员在派生类中可直接访问
		//修改代码
		setvalue_p(name1, age1);
		no = no1;
		score = score1;
	}
	void output() {
		print();
		cout << "no=" << no << " score=" << score << endl;
	}
};
void main() {
	student st1;
	st1.setvalue("张三", 20, 1011, 93.1);
	cout << "----" << endl;
	st1.output();
	cout << "----" << endl;
	// st1.print();
}
