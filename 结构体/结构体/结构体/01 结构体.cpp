#include<iostream>
using namespace std;

struct student {
	string name;
	int age;
	int score;
} ;

	
int main()
{
	student s1;
	s1.name = "zhangsan";
	s1.age = 18;
	s1.score = 100;

	cout << "name is " << s1.name << endl;
	cout << "age is " << s1.age << endl;
	cout << "score is " << s1.score << endl;

	struct student s2 = { "lisi",19,90 };
	cout << "name is " << s2.name << endl;
	cout << "age is " << s2.age << endl;
	cout << "score is " << s2.score << endl;

	s3.name = "wangwu";
	s3.age = 20;
	s3.score = 80;
	cout << "name is " << s3.name << endl;
	cout << "age is " << s3.age << endl;
	cout << "score is " << s3.score << endl;

	system("pause");
	return 0;
}