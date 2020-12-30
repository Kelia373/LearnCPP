#include<iostream>
using namespace std;

int max01(int a,int  b);
int max02(int a, int b);

int main()
{
	int a = 4, b = 10;
	cout << max02(4, 10) << endl;

	system("pause");
	return 0;
}

int max01(int a, int b)
{
	if (a < b)
	{
		return b;
	}
	return a;
}

int max02(int a, int b)
{
	return a > b ? a : b;
}