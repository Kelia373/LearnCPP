#include<iostream>
using namespace std;

class Person {
public:
	Person(int age) :m_a(20) {
		this->age = age;
	}
	Person& Personadd(Person& p) {
		//����ֵ��ͬһ���������Ӿ���ֵת�Ƶ����Ƶ�P2��ȥ��
		this->age += p.age;
		return *this;
	}
	void ShowPersonage() const {
		if (this == NULL)
			return;
		this->m_b = 100;
		cout << "age = " << this->age << endl;
	}
	void ShowClass() {
		cout << " Person class " << endl;
	}
	mutable int m_b;
	
	int age,m_a;
};
void test01() {
	Person p(18);
	//p���õĳ�Ա����ʱPerson����,Person��Person�ĳ�Ա������thisָ��Person
	//���������ն���Ҳ����һ���ڴ�ռ䣬Ϊ�����ֿն���ռ�ڴ��λ��
	//�ն���Ҳ��Ψһ�ĵ�ַ
	cout << p.age << endl;
}
void test02() {
	Person p1(10);
	Person p2(10);
	p2.Personadd(p1).Personadd(p1).Personadd(p1);
	cout << p2.age << endl;
}
void test03() {
	Person* p = NULL;
	p->ShowPersonage();
	p->ShowClass();
}
void test04() {
	const Person p(20);
	//p.m_a = 100;
}

int main() {
	//test01();
	//test02();
	test04();
	system("pause");
	return 0;
}