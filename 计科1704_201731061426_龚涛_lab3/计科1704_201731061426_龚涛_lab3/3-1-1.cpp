#include<iostream>
#include<string>
using namespace std;

class student
{
private:
	int no;
	string name;
	float score;

public:
	void input(int no1, string name1, float score1) {
		no = no1;
		name = name1;
		score = score1;
	}

	void output() {
		cout << "no=" << no << endl;
		cout << "name=" << name << endl;
		cout << "score=" << score << endl;
	}

	void deal(int no1, string name1, float score1) {
		input(no1, name1, score1);
		output();
	}
};
int main() {
	student st;
	int no1;
	string name1;
	float score1;
	cin >> no1 >> name1 >> score1;
	st.input(no1, name1, score1);
	st.output();
	st.deal(no1, name1, score1);
	return 0;
}