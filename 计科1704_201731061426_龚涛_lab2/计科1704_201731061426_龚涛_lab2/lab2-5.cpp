#include <iostream>
using namespace std;
bool symm(int x)
{
	int i = x;
	int u = 0;
	while (i > 0)
	{
		u = u * 10 + i % 10;
		i /= 10;
	}
	return x == u;
}
int main()
{
	int m = 1, sum = 0;
	for (m=1; m < 10000; m++)
	{
		if (symm(m) && symm(m*m) && symm(m*m*m)) {
			cout << m << endl;
			sum++;
		}
	}
	return 0;
}
