#include<iostream>
using namespace std;

int* fun() {
	int* p = new int(10);
	return p;
}

int main() {
	//
	int* p = fun();

	cout << *p << endl;
	cout << *p << endl;
	system("pause");
	return 0;
}