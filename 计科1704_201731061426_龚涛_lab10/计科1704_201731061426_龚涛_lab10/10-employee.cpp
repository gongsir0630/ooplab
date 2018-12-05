#include<iostream>
#include<string>
#include<fstream>
#include<string.h>
using namespace std;

class employee {
private:
	int num;
	string name;
	int age;
public:
	employee() {};
	void input(int num1, string name1, int age1) {
		num = num1;
		name = name1;
		age = age1;
	}

	int get_num() {
		return num;
	}

	int get_age() {
		return age;
	}

	string get_name() {
		return name;
	}

	void show_information() {
		cout << "the information:" << endl;
		cout << "num = " << this->num << endl;
		cout << "name = " << name << endl;
		cout << "age = " << age << endl;
	}

	void write_to_file() {
		ofstream outfile("employee.txt", ios::app);
		if (outfile.fail()) {
			cout << "open file failure!" << endl;
			return;
		}
		outfile << this->get_num() << endl;
		outfile << this->get_name() << endl;
		outfile << this->get_age() << endl;
		cout << "文件写入成功!" << endl;
		return;
	}

	void read_information_from_file() {
		ifstream infile("employee.txt", ios::in);
		if (infile.fail()) {
			cout << "文件打开失败!" << endl;
			return;
		}
		infile >> this->num;
		infile >> this->name;
		infile >> this->age;
		cout << "数据读入成功!" << endl;
		return;
	}
};

int main() {
	employee work;
	int num;
	string name;
	int age;
	cout << "=====创建对象work=====" << endl;
	cout << "input your information:" << endl;
	cin >> num >> name >> age;
	work.input(num, name, age);
	work.show_information();
	work.write_to_file();
	cout << endl;
	
	cout << "=====创建对象work1=====" << endl;
	employee work1;
	work1.read_information_from_file();
	work1.show_information();
	return 0;
}