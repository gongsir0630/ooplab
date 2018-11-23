/* students please write your program here */
#include<iostream>
using namespace std;
void IsUgly(int num)
{
	if (num == 1)
		cout << "False" << endl;
	else
	{
		while (num % 2 == 0)
			num /= 2;
		while (num % 3 == 0)
			num /= 3;
		while (num % 5 == 0)
			num /= 5;
		if (num == 1)
			cout << "True" << endl;
		else
			cout << "False" << endl;
	}
}
int main(int argc, const char *argv[])
{
	int n;
	cin >> n;
	IsUgly(n);
	return 0;
}