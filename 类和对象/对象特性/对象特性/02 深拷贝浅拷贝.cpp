#include<iostream>
using namespace std;

class Person{
public:
	Person() {
		cout << "�޲ι��캯������" << endl;
	}
	Person(int age, int high) {
		cout << "�вι��캯������" << endl;
		m_age = age;
		m_high = new int (high);// �����ڶ��� new ����Ȼ�󷵻�һ����ַ�������ַ��ָ�����
	}
	Person(const Person& p) {
		m_age = p.m_age;
		m_high = new int(*p.m_high);
		cout << "�������캯������" << endl;
	}
	~Person() {
		if (m_high != NULL) {
			delete m_high;
			m_high = NULL;
		}
		cout << "������������" << endl;
	}

	int m_age;
	int* m_high;
};
void test01() {
	Person p1(18, 160);
	cout << p1.m_age << endl;
	cout << *p1.m_high << endl;
	Person p2 = p1;
	cout << p2.m_age << endl;
	cout << *p2.m_high << endl;
}

int main() {
	test01();



	system("pause");
	return 0;
}