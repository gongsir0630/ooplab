#include<iostream>
using namespace std;

class time
{
public:
	void set_time();
	void show_time();
private:
	int hour;
	int min;
	int sec;
};

void time::set_time()
{
	cin >> hour >> min >> sec;
}

void time::show_time()
{
	cout << hour << ":" << min << ":" << sec << endl;
}
int main() {
	time t;
	t.set_time();
	t.show_time();
	return 0;
}