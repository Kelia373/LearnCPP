#include<iostream>
using namespace std;


class Base {
public:
	void header() {
		cout << " ������Ϣ" << endl;
	}
	void footer() {
		cout << " �ײ���Ϣ" << endl;
	}
	void left() {
		cout << " ���" << endl;
	}
};

class Java :public Base {
public:
	void content() {
		cout << " Java ѧ����Ƶ" << endl;
	}
};
class Python :public Base {
public:
	void content() {
		cout << " Python  ѧ����Ƶ" << endl;
	}
};
class CPP :public Base {
public:
	void content() {
		cout << " CPP  ѧ����Ƶ" << endl;
	}
};
void test01() {
	cout << "Java ��Ƶ : " << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	cout << "----------------------" << endl;
	cout << "Java ��Ƶ : " << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();
	cout << "----------------------" << endl;
	cout << "Java ��Ƶ : " << endl;
	CPP cpp;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.content();

}

int main() {
	test01();
	system("pause");
	return 0;
}