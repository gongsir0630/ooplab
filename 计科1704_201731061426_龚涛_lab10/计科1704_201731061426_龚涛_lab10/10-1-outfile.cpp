//#include <iostream>
//#include <fstream>
//using  namespace std;
//int  main() {
//	ofstream  outfile("d:\\myfile2.txt", ios::app);  //��������ļ������ͬʱ��ָ���ļ�
//	if (outfile.fail()) {  //fail�����ж��Ƿ�򿪳ɹ�
//		cout << "D:\\file can not open" << endl;
//		return 0;
//	}
//	float x = 6, y = 7;
//	outfile << x << " " << y << endl;
//	outfile.close();
//	return 0;
//}
#include<iostream>
#include<fstream>
using namespace std;
int main() {
	fstream file_test("test_file.txt", ios::app);
	if (file_test.fail())
	{
		cout << "test_file can not open!" << endl;
		return 0;
	}
	cout << "please input 5 numbers:" << endl;
	int x;
	for (int i = 1; i < 6; i++) {
		cin >> x;
		file_test << x << endl;
	}
	return 0;
}