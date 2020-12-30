#include<iostream>
using namespace std;

struct student {
	string name;
	int age;
	int score;
};

struct teacher {
	int id;
	string name;
	int age;
	struct student stu;
};
int main()
{
	teacher te01;
	te01.id = 100;
	te01.name = "laowang";
	te01.age = 50;
	te01.stu.name = "zhangsan";
	te01.stu.age = 19;
	te01.stu.score = 100;

	cout << te01.name << "  " << te01.id << " " << te01.age << " " << endl;
	cout << "teacher is student" << endl;
	cout << te01.stu.name << " " << te01.stu.age << " " << te01.stu.score << endl;

	system("pause");
	return 0;
}