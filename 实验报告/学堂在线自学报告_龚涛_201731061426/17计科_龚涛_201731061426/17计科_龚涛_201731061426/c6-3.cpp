#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int main(int argc, const char *argv[])
{
	int n, k;
	cin >> n >> k;
	vector<int>a(n, 0);
	for (int i = 0; i<n; i++)
	{
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	cout << a[k - 1]<<endl;
	return 0;
}