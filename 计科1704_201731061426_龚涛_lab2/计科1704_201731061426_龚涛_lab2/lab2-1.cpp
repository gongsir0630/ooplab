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
	cout << "������������\n";
	cout<<findmax(x,y,z)<<endl;
	cout << "������������\n";
	cout<<findmax(x, y)<<endl;
	return 0;
}