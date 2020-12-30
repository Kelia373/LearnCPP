#include<iostream>
using namespace std;
class Person;
Person operator+(Person& p1, Person& p2);

class Person {
public:
	int m_a;
	int m_b;
	//Person operator+ (Person& p) {
	//	Person temp;
	//	temp.m_a = this->m_a + p.m_a;
	//	temp.m_b = this->m_b + p.m_b;
	//	return temp;
	//}
};
Person operator+(Person& p1, Person& p2) {
	Person temp;
	temp.m_a = p1.m_a + p2.m_a;
	temp.m_b = p1.m_b + p2.m_b;
	return temp;
}
int main() {
	Person p1;
	p1.m_a = 10;
	p1.m_b = 20;
	Person p2;
	p2.m_a = 15;
	p2.m_b = 25;
	Person p3 = p1 + p2;
	cout << p3.m_a << "  " << p3.m_b << endl;
	system("pause");
	return 0;
}