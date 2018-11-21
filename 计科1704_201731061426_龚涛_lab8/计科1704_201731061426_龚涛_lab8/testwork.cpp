//#include<iostream>
//using namespace std;
//class GA { public:   virtual int f() { return 1; } };
//class GB :public GA { public:   virtual int f() { return 2; } };
//void show(GA g) { cout << g.f(); }
//void display(GA &g) { cout << g.f(); }
//int main() {
//	GA a;
//	show(a);
//	display(a);
//	GB b;
//	show(b);
//	display(b);
//	return 0;
//}
//#include <iostream>
//using namespace std;
//class B { public:   virtual void show() { cout << "B"; } };
//class D : public B { public:   void show() { cout << "D"; } };
//void fun1(B *ptr) { ptr->show(); }
//void fun2(B &ref) { ref.show(); }
//void fun3(B b) { b.show(); }
//int main() {
//	B  b, *p = new D;
//	D  d;
//	fun1(p);
//	fun2(b);
//	fun3(d);
//	return 0;
//}

//#include <iostream>
//using namespace std;
//class Base {
//public:
//	void output() { cout << 1; }
//	virtual void Print() { cout << 'B'; }
//};
//class Derived : public Base {
//public:
//	void output() { cout << 2; }
//	void Print() { cout << 'D'; }
//};
//int main() {
//	Base *ptr = new Derived;
//	ptr->output();
//	ptr->Print();
//	delete ptr;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Base {
//public:
//	virtual void f() { cout << "f0+"; }
//	void g() { cout << "g0+"; }
//};
//class Derived :public Base {
//public:
//	void f() { cout << "f+"; }
//	void g() { cout << "g+"; }
//};
//int main() {
//	Derived d;
//	Base *p = &d;
//	p->f();  p->g();
//	return 0;
//}

#include <iostream>
using namespace std;
class Base {
public:
	void fun1() { cout << "Base\n"; }
	virtual void fun2() { cout << "Base\n"; }
};
class Derived : public Base {
public:
	void fun1() { cout << "Derived\n"; }
	void fun2() { cout << "Derived\n"; }
};
void f(Base& b) { b.fun1();  b.fun2(); }
int main() {
	Derived obj;
	f(obj);
	return 0;
}
