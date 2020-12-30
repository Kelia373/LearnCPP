#include<iostream>
using namespace std;


class Base {
public:
	void header() {
		cout << " 顶部信息" << endl;
	}
	void footer() {
		cout << " 底部信息" << endl;
	}
	void left() {
		cout << " 左侧" << endl;
	}
};

class Java :public Base {
public:
	void content() {
		cout << " Java 学科视频" << endl;
	}
};
class Python :public Base {
public:
	void content() {
		cout << " Python  学科视频" << endl;
	}
};
class CPP :public Base {
public:
	void content() {
		cout << " CPP  学科视频" << endl;
	}
};
void test01() {
	cout << "Java 视频 : " << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	cout << "----------------------" << endl;
	cout << "Java 视频 : " << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();
	cout << "----------------------" << endl;
	cout << "Java 视频 : " << endl;
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