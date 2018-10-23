#include<iostream>
using namespace std;
int findmax(int a, int b, int c = 10)
{
	int max;
	max = a > b ? a : b;
	max = max > c ? max : c;
	return max;
}
int main()
{
	int x, y, z;
	cin >> x >> y >> z;
	cout << "传三个参数：\n";
	cout<<findmax(x,y,z)<<endl;
	cout << "传两个参数：\n";
	cout<<findmax(x, y)<<endl;
	return 0;
}