#include<iostream>
using namespace std;
int f(int n) {
	if (n == 2)
		return 1;
	else
	{
		for (int i = 2; i < n; i++) {
			if (n%i == 0)
				return 0;
		}
		return 1;
	}
}
int main() {
	int i;
	int count = 0;
	for (i = 1; i <= 1000; i++)
	{
		if (f(i) == 1) {
			count++;
			cout << i << endl;
		}
	}
	cout << "1-1000中的质数个数： " << count << endl;
	return 0;
}