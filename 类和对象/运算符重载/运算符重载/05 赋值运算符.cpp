#include<iostream>
using namespace std;

class Person {
public:
	Person(int age) {
		m_age = new int(age);
	}
	~Person() {
		if (m_age != NULL) {
			delete m_age;
			m_age = NULL;
		}#include<iostream>
using namespace std;

class Person {
public:
	Person(int age) {
		m_age = new int(age);
	}
	~Person() {
		if (m_age != NULL) {
			delete m_age;
			m_age = NULL;
		}
	}
	// ���жϵڶ�������ջ�����ٵ��ڴ��Ƿ��ͷ��ˣ����ͷţ������
	Person & operator=(Person& p) {
		if (m_age != NULL) {
			delete m_age;
			m_age = NULL;
		}
		// ���
		m_age = new int(*p.m_age);
		//�������Լ� thisָ���Լ���ָ�룬������ָ������Լ�
		return *this;
	}

	int *m_age;
};

void test01() {
	Person p1(18);
	Person p2(20);
	p2 = p1;
	cout << *p1.m_age << endl;
	cout << *p2.m_age << endl;
}

int main() {
	test01();


	system("pause");
	return 0;
}
	}
	// ���жϵڶ�������ջ�����ٵ��ڴ��Ƿ��ͷ��ˣ����ͷţ������
	Person & operator=(Person& p) {
		if (m_age != NULL) {
			delete m_age;
			m_age = NULL;
		}
		// ���
		m_age = new int(*p.m_age);
		//�������Լ� thisָ���Լ���ָ�룬������ָ������Լ�
		return *this;
	}

	int *m_age;
};

void test01() {
	Person p1(18);
	Person p2(20);
	p2 = p1;
	cout << *p1.m_age << endl;
	cout << *p2.m_age << endl;
}

int main() {
	test01();


	system("pause");
	return 0;
}