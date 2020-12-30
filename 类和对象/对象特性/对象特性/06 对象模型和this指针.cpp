#include<iostream>
using namespace std;

class Person {
public:
	Person(int age) :m_a(20) {
		this->age = age;
	}
	Person& Personadd(Person& p) {
		//引用值得同一变量，不加就数值转移到复制得P2上去了
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
	//p调用的成员函数时Person函数,Person是Person的成员函数，this指向Person
	//编译器给空对象也分配一个内存空间，为了区分空对象占内存的位置
	//空对象也有唯一的地址
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