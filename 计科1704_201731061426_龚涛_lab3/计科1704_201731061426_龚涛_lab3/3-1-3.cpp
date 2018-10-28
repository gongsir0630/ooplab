#include<iostream>
using namespace std;
class Time {
public:
	void input();
	void output();

private:
	int h;
	int m;
	int s;
};

void Time::input() {
	cin >> h >> m >> s;
}
void Time::output() {
	cout << h << ":" << m << ":" << s << endl;
}
int main() {
	Time t;
	t.input();
	t.output();
	return 0;
}