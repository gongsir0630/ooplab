//#include <iostream>
//#include <fstream>
//#include<string>
//using namespace std;
//int  main() {
//	ifstream  infile("myfile2.txt");  //定义输入文件类对象
//	float  x, y;
//	infile >> x >> y;
//	cout << x << " " << y;
//	infile.close();
//	return 0;
//}
#include<iostream>
#include<fstream>
using namespace std;
int main() {
	fstream outfile1("outfile1.txt", ios::app);
	if (outfile1.fail())
	{
		cout << "open file failure!" << endl;
		return 0;
	}
	ifstream inflile("test_file.txt");
	int *a = new int[5];
	inflile >> a[0];
	int i = 1;
	while (!inflile.eof())
	{
		inflile >> a[i++];
	}
	int n = i-1;
	int sum = 0;
	cout << "the value from test_file:" << endl;
	for (i = 0; i < n; i++) {
		sum += a[i];
		cout << a[i] << " ";
	}
	cout << endl;
	cout << "sum = " << sum << endl;
	delete[] a;
	inflile.close();
	return 0;
}