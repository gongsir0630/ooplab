/* students please write your program here */

#include <iostream>
using namespace std;

class Integer {
private:
	int _num;
	//getLength()函数获取_num长度
	int getLength() {
	}
public:
	//Integer类构造函数
	Integer(int num) {
		_num = num;
	}
	//反转_num
	int inversed() {
		int sum = 0;
		while (_num)
		{
			sum = sum * 10 + _num % 10;
			_num /= 10;
		}
		return sum;
	}
};

int main() {
	int n;
	cin >> n;
	Integer integer(n);
	cout << integer.inversed() << endl;
	return 0;
}
