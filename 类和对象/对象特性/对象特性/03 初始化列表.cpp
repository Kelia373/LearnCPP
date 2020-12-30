#include<iostream>
using namespace std;

class Person {
public:
	//Person(int a, int b, int c) {
	//	m_a = a;
	//	m_b = b;
	//	m_c = c;
	//}
	Person(int a, int b, int c) :m_a(a), m_b(b), m_c(c) {

	}
	int m_a, m_b, m_c;
};

void test01() {
	Person p(30, 20, 10);
	cout << p.m_a << " " << p.m_b << " " << p.m_c << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}