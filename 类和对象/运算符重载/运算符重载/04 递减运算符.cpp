#include<iostream>
using namespace std;

class Decrease {
	friend ostream& operator<<(ostream &cout, Decrease num);
public:
	Decrease(int a) {
		m_a = a;

	}
	Decrease & operator--() {
		m_a--;
		return *this;
	}
	// 先输出 在减小
	Decrease operator--(int) {
		Decrease temp = m_a;
		m_a--;
		return temp;
	}
private:
	int m_a;
};

ostream &operator<<(ostream &cout, Decrease num)
{
	cout << num.m_a;
	return cout;
}

void test01() {
	Decrease num(10);
	cout << --num << endl;;
	cout << num-- << endl;;
}
int main() {
	test01();
	system("pause");
	return 0;
}