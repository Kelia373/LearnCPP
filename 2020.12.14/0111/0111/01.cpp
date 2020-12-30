#include<iostream>
using namespace std;
#include<string>
//常量
//#define 全局
//const

#define day 7
const int mounth=12;
int main()
{
	int a = 10;
	//cout << "The weakend has " << day << " days !"<<  endl;
	//cout << "The year has " << mounth << " mounths !" << endl;
	//cout << "short " << sizeof(day) << endl;
	//cout << "mouneh"<< sizeof(mounth) << endl;
	float f1 = 3.14123123123123f;
	cout << "f1 = " << f1 << endl;
	double f2 = 3.14123123123;
	cout << "f2 = " << f2 << endl;

	cout << "f1 space " << sizeof(f1) << endl;
	cout << "f1 space " << sizeof(f2) << endl;

	float f3 = 3e2;
	cout << "f3 = " << f3 << endl;
	float f4 = 3e-2;
	cout << "f4 = " << f4 << endl;

	char ch = 'a';
	// a-97
	// A-65
	cout << ch << endl;
	cout << "char space " << sizeof(ch) << endl;

	cout << (int)ch << "   "<<sizeof(ch) << endl;

	cout << "aaaaaaaaa\t" << endl;

	char str1[] = "hello world";
	cout << str1 << endl;

	string str2 = "Hello World";
	cout << str2 << endl;

	bool flag = true;
	flag = false;
	cout << flag << endl;
	cout << "bool value " << sizeof(flag) << endl;

	/*
	int q = 0;
	cout << "please inter int : " << endl;
	cin >> q;
	cout << q << endl;

	float f = 3.14f;
	cout << "please inter float : " << endl;
	cin >> f;
	cout << "float = " << f << endl;
	*/
	//char ch_1 = 'a';
	//cout << "please inter char : " << endl;
	//cin >> ch_1;
	//cout << "char = " <<ch_1<< endl;
	//string str_1 = "hello";
	//cout << "please intet str : " << endl;
	//cin >> str_1;
	//cout << "str is :" << str_1 << endl;
	int a1 = 10;
	int b1 = 3;
	cout << "a1+b1 = " << a1 + b1 << endl;
	cout << "a1 - 1 = " << a1 - b1 << endl;
	cout << "a1Xb1 = " << a1 * b1 << endl;
	cout << "a1/ba=" << a1 / b1 << endl;//取整
	int a2 = 10;
	int b2 = 0;
	//cout << "a2/b2=" << a2 / b2 << endl;
	double a3 = 0.3,b3=0.11;
	cout << "a3/b3=" << a3 / b3 << endl;

	int a5 = 2;
	cout << "a=" << a5 << endl;
	++a5;
	cout << "a=" << a5 << endl;

	int b5 = 2;
	cout << "a=" << b5 << endl;
	b5++;
	cout << "a=" << b5 << endl;
	int a6 = 10, b6 = 9;
	cout << (a6 | b6) << endl;
	int a7 = 0, b7 = 0;
	cout << (a7 | b7) << endl;

	system("pause");
	return 0;
}