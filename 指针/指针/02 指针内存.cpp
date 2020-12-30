#include<iostream>
using namespace std;

int main()
{
	//	定义	使用（解引用）
	int a = 10;
	int* p;
	p = &a;
	cout << "sizeof (int  *) = " << sizeof(int *) << endl;

	system("pause");
	return 0;
}