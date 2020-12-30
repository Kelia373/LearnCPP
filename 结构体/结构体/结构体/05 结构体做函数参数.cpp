#include<iostream>
using namespace std;

struct student {
	string name;
	int age;
	int score;
};

void printstudent(struct student s)
{
	s.age = 100;
	cout << s.name << " " << s.age << " " << s.score << endl;
}

void printstudent2(struct student *p)
{
	p->age = 200;
	cout << p->name << " " << p->age << " " << p->score << endl;
}

int main()
{
	student stu = { "zhangsan",20,100 };
	printstudent(stu);
	cout << stu.name << " " << stu.age << " " << stu.score << endl;
	printstudent2(&stu);
	cout << stu.name << " " << stu.age << " " << stu.score << endl;
	system("pause");
	return 0;
}