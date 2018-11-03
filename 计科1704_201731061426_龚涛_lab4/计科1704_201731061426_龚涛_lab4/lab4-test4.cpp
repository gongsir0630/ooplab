#include <iostream>
using namespace std;
class ArrayData {
private:
	int count;
	int *arr;
public:
	void setdata(int ar[], int m) {//��������
		int i;
		count = m;
		arr = new int[count];
		for (i = 0; i < count; i++)
			arr[i] = ar[i];
	}
	int sum() {  //���
		int sum = 0;
		for (int i = 0; i < count; i++)
			sum += arr[i];
		return sum;
	}
	void sort() {  //����
		for (int i = 0; i < count; i++) {
			for (int j = i + 1; j < count; j++) {
				if (arr[i] > arr[j]) {
					int t = arr[i];
					arr[i] = arr[j];
					arr[j] = t;
				}
			}
		}
	}
	void output(){	//������
		for (int i = 0; i < count; i++)  
			cout << arr[i] << "  "; 
	}
	~ArrayData() { delete[] arr; }	//��������
};
void main() {
	int a[5], i;
	ArrayData X;
	cout << "input data" << endl;
	for (i = 0; i < 5; i++)   cin >> a[i];
	X.setdata(a, 5);
	X.sort();
	X.output();
	cout << "sum = " << X.sum() << endl;
}