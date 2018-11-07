#include<iostream>
#include<string>
using namespace std;

class Person {
private:
	string name;
public:
	void RedName(string Name) {
		name = Name;
	}
	void PrintName() {
		cout << "name: " << name << endl;
	}
};

class Worker :public Person {
private:
	int number;
	char sex;
	int age;
	string addr;
public:
	void Redinfo(string name1, int number1, int age1, char sex1, string addr1) {
		RedName(name1);
		number = number1;
		age = age1;
		sex = sex1;
		addr = addr1;
	}
	void Print_info() {
		cout << "your information:" << endl;
		PrintName();
		cout << "No: " << number << endl;
		cout << "sex: " << sex << endl;
		cout << "age: " << age << endl;
		cout << "addr: " << addr << endl;
	}
};

int main() {
	string name, addr;
	int number, age;
	char sex;
	cout << "please enter your information:(including name、number、age、sex、addr)" << endl;
	cin >> name >> number >> age >> sex >> addr;
	Worker worker;
	worker.Redinfo(name, number, age, sex, addr);
	worker.Print_info();
	return 0;
}