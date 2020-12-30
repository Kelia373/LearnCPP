#include<iostream>
using namespace std;

int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}

void test01()
{
	cout << "test 01 " << endl;
}

void test02(int a)
{
	cout << "test 02 : a = " << a << endl;
}
int  test03()
{
	cout << "test 03 " << endl;
	return 1000;
}
int test04(int a)
{
	cout << "this is test04 a = " << endl;
	return a;
}
int main()
{
	test01();
	test02(4);
	//test03();
	int num1 = test03();
	cout << num1 << endl;
	int num2 = test04(4000);
	cout << num2 << endl;

	system("pause");
	return 0;
}
