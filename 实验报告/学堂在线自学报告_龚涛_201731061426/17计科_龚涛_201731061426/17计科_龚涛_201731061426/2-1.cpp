/* students please write your program here */
#include <iostream>
using namespace std;
int main() {
	int n, x;
	cin >> n;
	int sum;
	int max, min;
	cin >> x;
	sum = max = min = x;
	int i = 1;
	while (i < n) {
		cin >> x;
		sum += x;
		max = (max > x) ? max : x;
		min = (min < x) ? min : x;
		i++;
	}
	cout << sum << ' ' << min << ' ' << max << endl;
	return 0;
}