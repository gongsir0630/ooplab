#include<iostream>
#include<string>
using namespace std;
class person {//person����
private:
	string name;
protected:
	int age;
public:
	void printname();
	void setvalue_p(string name1, int age1) { name = name1;  age = age1; }
	void print() { cout << "name=" << name << " age=" << age << endl; }
};
class student :protected person { //student ������
private:
	int no;
	float score;
public:
	void setvalue(string name1, int age1, int no1, float score1) {
		//name = name1;//˽�г�Ա�� �������в���ֱ�ӷ���
		//age = age1;  //���ﲻ����������Ա���������п�ֱ�ӷ���
		//�޸Ĵ���
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
	st1.setvalue("����", 20, 1011, 93.1);
	cout << "----" << endl;
	st1.output();
	cout << "----" << endl;
	// st1.print();
}
