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
//����ʱ���ȹ�������Ա���ٹ�������
//����ʱ�����������������������Ա
void test01() {
	Person p("zhangsan", "apple");
	cout << p.m_name << " " << p.m_phone.m_pname << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}