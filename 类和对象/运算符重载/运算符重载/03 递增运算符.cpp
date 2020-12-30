#include<iostream>
using namespace std;

class MyInteger {
	friend ostream& operator<<(ostream& cout, MyInteger myint);
public:
	MyInteger() {
		m_num = 0;
	}
	MyInteger& operator++() {
		m_num++;
		return *this;
	}
	// int 占位参数 区分前置和后置
	MyInteger operator++(int) {
		MyInteger temp = *this; 
		m_num++;
		return temp;
	}
private:
	int m_num;
};
ostream& operator<<(ostream& cout, MyInteger myint)
{
	cout << myint.m_num;
	return cout;
}


void test01() {
	MyInteger myint;

	cout << ++myint << endl;
}
void test02() {
	MyInteger myint;

	cout << myint++ << endl;
}
int main() {
	test01();
	system("pause");
	return 0;
}