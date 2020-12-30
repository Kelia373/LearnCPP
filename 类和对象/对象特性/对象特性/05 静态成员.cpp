#include<iostream>
using namespace std;


class Person {
public:
	static void func() {
		m_a = 100; 
		cout << "static func" << endl;
	}
	static int m_a;
	int m_b;
};
int Person::m_a = 0;
void test01() {
	Person p;
	p.func();
	//ÀàÃû·ÃÎÊ
	Person::func();
}

int main() {
	test01();
	system("pause");
	return 0;
}