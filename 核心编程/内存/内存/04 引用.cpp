#include<iostream>
using namespace std;

void swap01(int a,int b) {
	int temp = a;
	a = b;
	b = temp;

}
void swap02(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void swap03(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a = 10, b = 20;
	swap01(a, b);
	cout << a << " " << b << endl;
	//swap02(&a, &b);
	cout << a << " " << b << endl;
	swap03(a, b);
	cout << a << " " << b << endl;
	system("pause");
	return 0;
}