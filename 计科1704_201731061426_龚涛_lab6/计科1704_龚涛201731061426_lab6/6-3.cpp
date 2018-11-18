#include<iostream>
#include<string>
using namespace std;

class Teacher
{
public:
	Teacher();
	Teacher(int num, string name, char sex);
	~Teacher();
	void Input();
	void Output();
private:
	int num;
	string name;
	char sex;
};

Teacher::Teacher()
{
}

Teacher::Teacher(int num, string name, char sex)
{
	this->num = num;
	this->name = name;
	this->sex = sex;
}

Teacher::~Teacher()
{
}

void Teacher::Input() {
	cout << "pelase enter your num¡¢name¡¢sex:" << endl;
	cin >> num >> name >> sex;
}

void Teacher::Output() {
	cout << endl;
	cout << "num = " << num << endl;
	cout << "name = " << name << endl;
	cout << "sex = " << sex << endl;
}

class Professor:public Teacher
{
public:
	Professor();
	~Professor();
	void Pinput();
	void Poutput();
private:
	int rank;
};

Professor::Professor()
{
	Teacher();
	this->rank = rank;
}

Professor::~Professor()
{
}

void Professor::Pinput() {
	Input();
	cout << "next please rnter your rank:" << endl;
	cin >> rank;
}

void Professor::Poutput() {
	Output();
	cout << "rank = " << rank << endl;
}

void main() {
	Professor A;
	A.Pinput();
	A.Poutput();
}