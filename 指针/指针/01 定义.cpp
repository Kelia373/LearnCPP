#include<iostream>
using namespace std;

int main()
{
	//	����	ʹ�ã������ã�
	int a = 10;
	int * p;
	p = &a;
	*p = 1000;
	cout << "a is " << &a << endl;
	cout << "a is 02 " << a << endl;
	cout << "p is " << *p << endl;
	cout << "p is 02 " << p << endl;

	system("pause");
	return 0;
}