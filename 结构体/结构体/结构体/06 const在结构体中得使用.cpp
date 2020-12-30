#include<iostream>
using namespace std;

struct student {
	string name;
	int age;
	int score;
};

void printstudent(const student *p)
{
	cout << p->name << " " << p->age << " " << p->score << endl;

}
int main()
{
	student stu = { "zhangsan",20,100 };
	printstudent(&stu);
	system("pause");
	return 0;
}