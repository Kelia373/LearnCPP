#include<iostream>
using namespace std;

class Person {
public:
	Person(int a) {
		age = a;
		cout << "有参构造函数调用" << endl;
	}
	Person() {
		cout << "无参构造函数调用" << endl;
	}
	//Person(const Person &p) {
	//	age = p.age;
	//	cout << "拷贝构造函数调用" << endl;
	//}
	~Person() {
		cout << "析构函数调用" << endl;
	}
	int age;
	int num;
};

void test01() {
	//Person p;
	//Person p2(10);
	//Person p3(p2);

	//Person p1;
	//Person p2 = Person(10);
	//Person P3 = Person(p2);

	//Person p4 = 10;

	Person p1(20);
	Person p2(p1);

	cout << p2.age << endl;
}
void dowrok(Person p) {

}
void test02() {
	Person p;
	dowrok(p);
}

Person dowork2() {
	Person p1;
	return p1;
}

void test03() {
	Person p = dowork2();
}

void test04() {
	Person p;
	p.age = 19;
	cout <<endl;
	Person p1 = 10;
	cout << endl;
	Person p2 = p1;
	cout << endl;
	cout << p2.age << endl;
}
int main()
{
	test04();
	system("pause");
	return 0;
}