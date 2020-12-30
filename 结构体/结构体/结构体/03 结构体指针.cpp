#include<iostream>
using namespace std;

struct student {
	string name;
	int age;
	int score;
};

int main()
{
	student s = { "zhangsan",19,100 };
	student * p = & s;
	cout << p->name << " " << p->age << " " << p->score << " " << endl;


	system("pause");
	return 0;
}