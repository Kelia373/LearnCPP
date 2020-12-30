#include<iostream>
using namespace std;

class Phone {
public:
	Phone(string pname) :m_pname(pname) {}
	string m_pname;
	~Phone() {
		cout << "out Phone" << endl;
	}
};

class Person {
public:
	Person(string name, string pname) :m_name(name), m_phone(pname) {}//Phone m_phone = pname;
	string m_name;
	Phone m_phone;
	~Person() {
		cout << "out Person" << endl;
	}
};
//构造时，先构造对象成员，再构造自身
//析构时，先析构自身，再析构对象成员
void test01() {
	Person p("zhangsan", "apple");
	cout << p.m_name << " " << p.m_phone.m_pname << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}