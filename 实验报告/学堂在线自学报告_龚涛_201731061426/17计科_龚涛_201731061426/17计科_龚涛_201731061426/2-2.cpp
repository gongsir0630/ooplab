/* students please write your program here */
#include<iostream>
using namespace std;
int function(int n) {
	int p = 1, i;
	for (i = 1; i <= n; i++)
		p *= 2;
	return p;
}
int main() {
	long x;
	cin >> x;		//x=110

	int sum = 0;
	long m;
	int i = 0;
	do {	// 11,ÔËÐÐ
		m = x % 10;		//m=0
		sum += (function(i) * m); //sum = 0+0*1 
		x = x / 10;		//x=11
		i++;		//i=1
	} while (x);
	cout << sum << endl;
	return 0;
}