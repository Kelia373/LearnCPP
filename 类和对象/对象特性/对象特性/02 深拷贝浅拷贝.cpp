#include<iostream>
using namespace std;

class Person{
public:
	Person() {
		cout << "无参构造函数调用" << endl;
	}
	Person(int age, int high) {
		cout << "有参构造函数调用" << endl;
		m_age = age;
		m_high = new int (high);// 创建在堆区 new 创建然后返回一个地址，这个地址用指针接收
	}
	Person(const Person& p) {
		m_age = p.m_age;
		m_high = new int(*p.m_high);
		cout << "拷贝构造函数调用" << endl;
	}
	~Person() {
		if (m_high != NULL) {
			delete m_high;
			m_high = NULL;
		}
		cout << "析构函数调用" << endl;
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