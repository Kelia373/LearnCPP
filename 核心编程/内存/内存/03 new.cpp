#include<iostream>
using namespace std;
int* func() {
	int* p = new int(10);
	return p;
}

void test01() {
	int* p = func();
	cout << *p << endl;
	delete p;
	//cout << *p << endl;
}

void test02() {
	int* arr = new int[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
	delete[] arr;
	//for (int i = 0; i < 10; i++) {
	//	cout << arr[i] << endl;
	//}
}

int main() {
	test02();
	//delete

	system("pause");
	return 0;
}