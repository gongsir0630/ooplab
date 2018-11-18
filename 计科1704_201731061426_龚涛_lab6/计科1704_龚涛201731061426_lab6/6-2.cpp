#include<iostream>
#include<string>
using namespace std;
class person  {  //person基类
private:
	string name;
protected:
	int age;
public:
	void printname();
	void setname(string);
	person() {
		name = "基类test";
		cout << "name=" << name << " 基类构造函数执行" << endl;
	}
	person(string name1)  {
		name = name1;
		cout<<"name="<<name<<" 基类构造函数执行"<<endl;
	}
	~person()  {
		cout<<"name="<<name<<"  基类person析构函数执行"<<endl;
	}
};
void person::printname()  { cout << "基类name=" << name << endl; }
void person::setname(string name1)  { name = name1; }

class student :public person  {//student 继承person 是派生类
private:
	int no;
	float score;
	person p1;
protected:
	string sex;
public:
	void output();
	student():person("mm"),p1("4")
	{
		no = 1;
		score = 80.0;
		age = 20;
		cout << "no=" << no << " 派生类构造函数执行" << endl;
	}
	~student()  {  
		cout<<"no="<<no<<"  "<<"派生类析构函数"<<endl; 
	}
};
void student::output()  {
		printname();
		cout << "age=" << age << endl;
}
void main()  {
		student st;  //说明在创建st对象时，调用了哪个构造函数
		//是否调用了基类构造函数？如果是，调用的是哪个基类的构造函数
		cout << "st----" << endl;
		st.printname();
}