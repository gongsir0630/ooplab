#include<iostream>
using namespace std;
void sort(int &x, int &y, int &z)
{
	int max= ((x > y ? x : y) > z ? (x > y ? x : y) : z);
	int min= ((x < y ? x : y) < z ? (x < y ? x : y) : z);
	int sum = x + y + z;
	x = max;
	y = min;
	z = sum - max - min;
}
int main()
{
	int x, y, z;
	cin >> x >> y >> z;
	sort(x, y, z);
	cout << y << "<" << z << "<" << x << endl;
	return 0;
}