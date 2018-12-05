//#include<iostream>
//using namespace std;
//template<class T>
//class max {
//private:
//	T x, y;
//public:
//	max(T x1, T y1) {
//		x = x1;
//		y = y1;
//	}
//	T showmax() { return x > y ? x : y; }
//	T showmin() { return x < y ? x : y; }
//};
//void main(void) {
//	max<int> a(3, 5);
//	max<float> b(5.0f, 6.7f);
//	cout << "a.max=" << a.showmax() << endl;
//	cout << "b.max=" << b.showmax() << endl;
//}


//类外实现成员函数
#include<iostream>
using namespace std;
template<class T>
class max {
private:
	T x, y;
public:
	max(T x1, T y1);
	T showmax();
	T showmin();
};

template<class T>
max<T>::max(T x1, T y1) {
	x = x1;
	y = y1;
}

template<class T>
T max<T>::showmax() {
	return x > y ? x : y;
}

template<class T>
T max<T>::showmin() {
	return x < y ? x : y;
}

void main(void) {
	max<int> a(3, 5);
	max<float> b(5.0f, 6.7f);
	cout << "a.max=" << a.showmax() << endl;
	cout << "b.max=" << b.showmax() << endl;
}