#include<iostream>
using namespace std;
const float	PI = 3.14;

class Cirlce
{
public:
	Cirlce();
	Cirlce(float radius);
	~Cirlce();
	float area();
private:
	float r;
};

Cirlce::Cirlce()
{
	cout << "Default constructor called." << endl;
}

Cirlce::~Cirlce()
{
	cout << "Destructor called." << endl;
}

Cirlce::Cirlce(float radius) {
	r = radius;
}

float Cirlce::area() {
	return PI*r*r;
}

int main() {
	float r[2];
	for (int i = 0; i < 2; i++)
		cin >> r[i];
	Cirlce test[2];
	for (int i = 0; i < 2; i++) {
		test[i] = Cirlce(r[i]);
		cout << "area = " << test[i].area() << endl;
	}

	return 0;
}