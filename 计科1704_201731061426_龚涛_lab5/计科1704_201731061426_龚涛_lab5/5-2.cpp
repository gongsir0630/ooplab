#include <iostream>
#include <string>
using namespace std;
class Student {
public:
	void get_value() {  
		//��Ӵ��� ʵ��  num��name��sex������
		cin >> num;
		cin >> name;
		cin >> sex;
	}
		void display() {
			cout << "num: " << num << endl;
			cout << "name: " << name << endl;
			cout << "sex: " << sex << endl;
		}
private:
	int num;
	string name;
	char sex;
};
	class Student1:public Student   //���ӹ��м̳�
	{
	public:
		void get_value_1() {
			//��Ӵ��롣ʵ�ֻ���̳еĳ�Ա�������Լ��������������ݳ�Ա������
			get_value();
			cin >> age >> addr;
		}
		void display_1() {
			//��Ӵ��롣ʵ�ֻ���̳г�Ա������age��addr�����
			display();
			cout << "age: " << age << endl;
			cout << "addr: " << addr << endl;
		}
	private:
		int age;
		string addr;
	};
	void main() {
		Student1 stud1;
		//stud1.get_value();
		stud1.get_value_1();
		//stud1.display();
		stud1.display_1();
	}
