#include<iostream>
using namespace std;
class Block {
private:
	int length, width, height;
public:
	Block() = default;
	Block(int l, int w, int h);
	Block(Block& p);
	~Block()
	{
		cout << "对象已释放" << endl;
	}
	void input();
	int volume();
	void output();
};
Block::Block(int l, int w, int h) :length(l), width(w), height(h) {
}
void Block::input() {
	cout << "请输入长、宽、高：" << endl;
	cin >> length >> width >> height;
}
int Block::volume() {
	int volume = length*width*height;
	return volume;
}
void Block::output() {
	cout << "volume=" << volume() << endl;
}
Block::Block(Block& p) {
	length = p.length;
	width = p.width;
	length = p.length;
}
int main() {
	Block A(2, 2, 2);
	Block B;
	Block C(B);
	B.input();
	A.output();
	B.output();
	return 0;
}