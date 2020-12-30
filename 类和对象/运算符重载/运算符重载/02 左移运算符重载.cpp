#include<iostream>
using namespace std;
class Person;

class Person {
	friend ostream& operator<<(ostream& cout, Person p);
public:
	Person(int a,int b) {
		m_a = a;
		m_b = b;
	}
private:
	int m_a, m_b;

};
ostream &operator<<(ostream& cout, Person p) {
	cout << p.m_a << "  " << p.m_b << endl;
	return cout;
}
void test01() {
	Person p(10,10);


	cout << p << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}