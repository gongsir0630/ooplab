#include<iostream>
using namespace std;

class Student
{
public:
	Student();
	~Student();
	void display();
private:
	long num;
	char *name;
	int age;
};

Student::Student()
{
	cout << "please input your student number:\n";
	cin >> num;
	cout << "next input your name:" << endl;
	name = new char[10];
	cin >> name;
	cout << "then,input your age:" << endl;
	cin >> age;
}

Student::~Student()
{
	delete[] name;
}

void Student::display() {
	cout << "\n\n*****INFORMATION*****\n" << endl;
	cout << "number:	" << num << endl;
	cout << "name:	" << name << endl;
	cout << "age:	" << age << endl;
	cout << "**********************\n" << endl;
}

int main() {
	Student stu1;
	stu1.display();
	return 0;
}