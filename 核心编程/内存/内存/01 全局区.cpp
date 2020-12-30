#include<iostream>
using namespace std;

//全局变量
int c1 = 10, c2 = 10;
const int d1 = 10, d2 = 10;
int main()
{
	//局部变量
	int a1 = 10, a2 = 20;

	cout << "局部变量：" << (int)&a1 << endl;
	cout << "局部变量：" << (int)&a2 << endl;

	cout << "全局变量：" << (int)&c1 << endl;
	cout << "全局变量：" << (int)&c2 << endl;

	//静态变量
	static int b1 = 10, b2 = 10;
	cout << "静态变量：" << (int)&b1 << endl;
	cout << "静态变量：" << (int)&b2 << endl;

	//常量：字符串常量，const ：常量，变量
	cout << "字符串常量：" << (int)&"hello world" << endl;

	cout << "const 全局变量：" << (int)&d1 << endl;
	cout << "const 全局变量：" << (int)&d2 << endl;

	const int f1 = 10, f2 = 10;
	cout << "const 局部变量：" << (int)&f1 << endl;
	cout << "const 局部变量：" << (int)&f2 << endl;

	// 全局区：全局变量，静态变量，常量
	// 常量区：局部变量，const局部变量
	system("pause");
	return 0;
}