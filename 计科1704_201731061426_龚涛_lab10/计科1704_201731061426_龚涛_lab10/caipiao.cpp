#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
	ifstream infile("caipiao.txt");
	string s;
	int count = 0;
	int count_02 = 0, count_05 = 0;
	cout << "��������  ��������" << endl;
	while (infile>>s)
	{
		cout << s<<" ";
		if (s == "02")
			count_02++;
		else if(s == "05")
			count_05++;
		count++;
		if (count % 6 == 0)
			cout << endl;
	}
	cout << "\"02\"���ֵĴ�����" << count_02 << endl;
	cout << "\"05\"���ֵĴ�����" << count_05 << endl;
	infile.close();
	return 0;
}