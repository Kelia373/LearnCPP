#include<iostream>
using namespace std;


class MyPrint {
public:
	void operator()(string test) {
		cout << test << endl;
	}
};

class MyAdd {
public:
	int operator()(int a, int b) {
		return a + b;
	}
};

void test01() {
	MyPrint mp;
	mp("hello world!");
	MyAdd ma;
	cout << MyAdd()(10, 20) << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}