#include<iostream>
using namespace std;

int & test01() {
	int a = 10;
	return a;
}

int& test02() {
	static int a = 10;
	return a;//作为引用被返回，可以作为左值
}
void print(const int* a) {
	cout << *a << endl;
}
int main()
{
	//int& ref = test01();
	//cout << ref << endl;
	//cout << ref << endl;  
	int& ref2 = test02();
	cout << ref2 << endl;
	test02() = 1000;
	cout << ref2 << endl;

	int a = 10;
	print(&a);
	system("pause");
	return 0;
}