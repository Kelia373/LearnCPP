#include<iostream>
using namespace std;

struct student {
	string name;
	int age;
	int score;

};


int main()
{
	student stuArray[3] = {
		{"zhangsan",19,100},
		{"lisi",18,80},
		{"wangwu",17,70}
	};
	stuArray[2].name = "zhaoliu";
	for (int i = 0; i < 3; i++)
	{
		cout << stuArray[i].name << " " << stuArray[i].age << " " << stuArray[i].score << " " << endl;

	}



	system("pause");
	return 0;
}