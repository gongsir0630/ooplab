#include <iostream>
#include <cstring>
using namespace std;
class Base {
protected:
	char* msg;
public:
	Base() { msg = NULL; }
	void setvalue(char* str) {
		msg = new char[strlen(str)+1];
		strcpy_s(msg,strlen(str)+1,str);
		cout << "Base:" << msg << endl;
	}
	~Base() {
		if (msg != NULL)
			delete[] msg;
	}
};
class Derived :public Base {
public:
	void Show() { cout << "Derived:" << msg << endl; }
};
int main() {
	Derived obj;
	obj.setvalue("Good Luck!");
	obj.Show();
	return 0;
}
