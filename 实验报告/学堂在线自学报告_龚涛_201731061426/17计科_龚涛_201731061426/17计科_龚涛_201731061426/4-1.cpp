/* students please write your program here */

#include <iostream>
using namespace std;
class Integer {
private:
	int _num;
public:
	//构造函数
	Integer(int num) {
		_num = num;
	}
	//计算当前Integer 和 b之间的最大公约数
	int gcd(Integer b) {
		if (_num < b._num) {
			int t = _num;
			_num = b._num;
			b._num = t;
		}

		int t;
		while (_num%b._num != 0)
		{
			t = _num%b._num;
			_num = b._num;
			b._num = t;
		}

		return b._num;
	}
};

int main() {
	int a, b;
	cin >> a >> b;
	Integer A(a);
	Integer B(b);
	cout << A.gcd(B) << endl;
	return 0;
}
