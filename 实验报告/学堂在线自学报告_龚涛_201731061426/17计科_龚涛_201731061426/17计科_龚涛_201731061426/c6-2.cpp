#include<string>
#include<iostream>
using namespace std;
string str, creat = "";
int ans = 0;
bool used[20] = { false };
bool back_forward(string str)
{
	for (int i = 0; i<str.length() / 2; i++)
	{
		if (str[i] != str[str.length() - i - 1])
			return false;
	}
	return true;
}
void search(int len, int start)
{
	if (len <= 0)
	{
		if (back_forward(creat))
			ans++;
		return;
	}
	for (int i = start; i<str.length(); i++)
	{
		if (!used[i])
		{
			used[i] = true;
			creat.append(str, i, 1);
			search(len - 1, i + 1);
			used[i] = false;
			creat.erase(creat.length() - 1, 1);
		}
	}
}
int main(int argc, const char *argv[])
{
	cin >> str;
	for (int i = 1; i <= str.length(); i++)
		search(i, 0);
	cout << ans << endl;
	return 0;
}