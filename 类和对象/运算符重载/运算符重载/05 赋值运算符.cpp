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
	// 先判断第二个类种栈区开辟得内存是否被释放了，先释放，再深拷贝
	Person & operator=(Person& p) {
		if (m_age != NULL) {
			delete m_age;
			m_age = NULL;
		}
		// 深拷贝
		m_age = new int(*p.m_age);
		//返回他自己 this指向自己得指针，解引用指向对象自己
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
	// 先判断第二个类种栈区开辟得内存是否被释放了，先释放，再深拷贝
	Person & operator=(Person& p) {
		if (m_age != NULL) {
			delete m_age;
			m_age = NULL;
		}
		// 深拷贝
		m_age = new int(*p.m_age);
		//返回他自己 this指向自己得指针，解引用指向对象自己
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