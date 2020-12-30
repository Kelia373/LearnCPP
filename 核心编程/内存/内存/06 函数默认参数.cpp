#include<iostream>
using namespace std;

int func(int a, int b=2, int c=3) {
	return a + b + c;
}

int main()
{
	int num = 0;
	int a = 1, b = 2, c = 3;
	num = func(1, 3);

	cout << num << endl;
	system("pause");
	return 0;
}