#include <iostream>
using namespace std;
class MyClass {
public:
	MyClass(int i) {
		value = i;
		cout << "Constructor called of " << value << endl;
	}
	void Print() const { cout << "The value is " << value << endl; }
	~MyClass() { cout << "Destructor called of " << value << endl; }
private:
	int value = 0;
};
int main() {
	const MyClass obj(10);
	obj.Print();
	return 0;
}
