#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
class Equation {
private:
	int _a, _b, _c, _x;
public:
	Equation(int a, int b, int c) {
		_a = a, _b = b, _c = c;
		_x = _b * _b - 4 * _a * _c;
	}
	void solve() {
		if (_x > 0 && _a != 0)
		{
			cout << 1 << endl;
			double x = -_b / 2.0 / (double)_a;
			double y = sqrt(_x) / 2.0 / (double)_a;
			printf("%.2f %.2f\n", x - y, x + y);
		}
		else if (_x == 0 && _a != 0)
		{
			cout << 2 << endl;
			double x = -_b / 2.0 / (double)_a;
			printf("%.2f\n", x);
		}
		else if (_x<0 && _a != 0)
		{
			cout << 3 << endl;
		}
		else if (_a == 0 && _b == 0 && _c != 0)
		{
			cout << 4 << endl;
		}
		else if (_a == 0 && _b == 0 && _c == 0)
		{
			cout << 5 << endl;
		}
		else if (_a == 0 && _b != 0)
		{
			cout << 6 << endl;
			double x = -_c / (double)_b;
			printf("%.2f\n", x);
		}
	}
};

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	Equation tmp(a, b, c);
	tmp.solve();
}