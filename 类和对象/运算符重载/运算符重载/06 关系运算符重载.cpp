#include<iostream>
using namespace std;

class Person {
public:
	Person(int a,string name) {
		num = a;
		m_name = name;
	}
	bool operator==(Person& p) {
		if (this->m_name == p.m_name && this->num == p.num) {
			return true;
		}
		return false;
	 }
	bool operator!=(Person& p) {
		if (this->m_name != p.m_name || this->num != p.num) {
			return true;
		}
		return false;
	}
	int num;
	string m_name;
};

void test01() {
	Person p1(10, "zhangsan");
	Person p2(20, "lisi");
	Person p3(20, "lisi");
	if (p1 == p2) {
		cout << "p1 == p2" << endl;
	}
	else if (p2!= p3) {
		cout << "p1 != p2" << endl;
	}
	else {
		cout << "23333" << endl;
	}
}

int main() {
	test01();


	system("pause");
	return 0;
}