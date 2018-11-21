#include<iostream>
using namespace std;

class vehicle {
public:
	virtual void Run() = 0;
	virtual void Stop() = 0;
};

class bicycle :public vehicle {
public:
	void Run() {
		cout << "bicycle is running." << endl;
	}
	void Stop() {
		cout << "bicycle is stopping." << endl;
	}
};

class motorcar :public vehicle {
public:
	void Run() { cout << "motorcar is running." << endl; }
	void Stop() { cout << "motorcar is stopping." << endl; }
};

class motorcycle:public motorcar,public bicycle,public vehicle {
public:
	void Run() { cout << "motorcycle is running." << endl; }
	void Stop() { cout << "motorcycle is stopping." << endl; }
};

int main() {
	bicycle a;
	motorcar b;
	motorcycle c;
	cout << "通过对象调用函数：" << endl;
	a.Run();
	a.Stop();
	b.Run();
	b.Stop();
	c.Run();
	c.Stop();
	vehicle *pa, *pb, *pc;
	cout << "通过基类指针调用函数：" << endl;
	pa = &a;
	pb = &b;
	pc = &c;
	pa->Run();
	pa->Stop();
	pb->Run();
	pb->Stop();
	pc->Run();
	pc->Stop();
	return 0;
}