#include<iostream>
#include<string>
using namespace std;
class person  {  //person����
private:
	string name;
protected:
	int age;
public:
	void printname();
	void setname(string);
	person() {
		name = "����test";
		cout << "name=" << name << " ���๹�캯��ִ��" << endl;
	}
	person(string name1)  {
		name = name1;
		cout<<"name="<<name<<" ���๹�캯��ִ��"<<endl;
	}
	~person()  {
		cout<<"name="<<name<<"  ����person��������ִ��"<<endl;
	}
};
void person::printname()  { cout << "����name=" << name << endl; }
void person::setname(string name1)  { name = name1; }

class student :public person  {//student �̳�person ��������
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
		cout << "no=" << no << " �����๹�캯��ִ��" << endl;
	}
	~student()  {  
		cout<<"no="<<no<<"  "<<"��������������"<<endl; 
	}
};
void student::output()  {
		printname();
		cout << "age=" << age << endl;
}
void main()  {
		student st;  //˵���ڴ���st����ʱ���������ĸ����캯��
		//�Ƿ�����˻��๹�캯��������ǣ����õ����ĸ�����Ĺ��캯��
		cout << "st----" << endl;
		st.printname();
}