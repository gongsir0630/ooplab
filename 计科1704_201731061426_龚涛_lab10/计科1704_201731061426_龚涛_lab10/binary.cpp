//#include<iostream>
//#include<fstream>
//using namespace std;
//int main() {
//	int i;
//
//	ofstream outfile("bfile1.dat", ios::out | ios::binary | ios::app);
//	cout << "ÊäÈëÐÅÏ¢£º" << endl;
//	for (i = 1; i <= 5; i++) {
//		float x;
//		cin >> x;
//		outfile.write((char*)&x, sizeof(x));
//	}
//	outfile.close();
//	return 0;
//}



//#include<iostream>
//#include<fstream>
//using namespace std;
//int main() {
//	float a[5];
//	ofstream outfile("bfile2.dat", ios::out | ios::app | ios::binary);
//	cout << "input information:" << endl;
//	for (int i = 0; i < 5; i++) {
//		cin >> a[i];
//		outfile.write((char*)(a + i), sizeof(a[i]));
//	}
//	outfile.close();
//	return 0;
//}

#include<iostream>
#include<fstream>
using namespace std;
int main() {
	ifstream infile("bfile1.dat",ios::in|ios::binary);
	if (infile.fail()) {
		cout << "Ê§°Ü!" << endl;
		return 0;
	}
	float x;
	for (int i = 0; i < 5; i++) {
		infile.read((char*)&x, sizeof(x));
		cout << x;
		cout << endl;
	}
	return 0;
}