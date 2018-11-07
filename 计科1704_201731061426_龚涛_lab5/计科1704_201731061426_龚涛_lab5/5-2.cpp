#include <iostream>
#include <string>
using namespace std;
class Student {
public:
	void get_value() {  
		//添加代码 实现  num，name和sex的输入
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
	class Student1:public Student   //增加公有继承
	{
	public:
		void get_value_1() {
			//添加代码。实现基类继承的成员的输入以及本类新增的数据成员的输入
			get_value();
			cin >> age >> addr;
		}
		void display_1() {
			//添加代码。实现基类继承成员和新增age，addr的输出
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
