#include<stdio.h>
#include<iostream>
using namespace std;

int maxSum(int *a, int n)
{
	int max = -1;
	int i, j, sum;
	for (i = 0; i<n; i++)
	{
		sum = 0;
		for (j = i; j<n; j++)
		{
			sum += a[j];
			if (sum>max)
				max = sum;
		}
	}
	return max;
}
int main(int argc, const char *argv[])
{
	int len;
	cin >> len;
	int i;
	int *a = new int[len];
	for (i = 0; i < len; i++)
		cin >> a[i];
	printf("%d\n", maxSum(a, len));
	return 0;
}