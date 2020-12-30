#include<iostream>
using namespace std;

void swap02(int * p1, int* p2)
{
	int mid = *p1;
	*p1 = *p2;
	*p2 = mid;
	
}
int main()
{
	int a = 10, b = 20;
	cout << "a =" << a << endl;
	cout << "b =" << b << endl;
	swap02(&a, &b);

	cout << "a =" << a << endl;
	cout << "b =" << b << endl;
	system("pause");
	return 0;
}