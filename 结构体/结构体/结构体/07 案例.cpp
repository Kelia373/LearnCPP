#include<iostream>
#include<ctime>
using namespace std;

struct student {
	string name;
	int score;
};

struct teacher{
	string name;
	struct student sarray[5];
};

void allocatespacesy(struct teacher tarray[],int len)
{
	string names = "ABCDE";
	int scorearr[] = { 100,95,90,85,80 };
	for (int i = 0; i < len; i++)
	{
		tarray[i].name = "Teacher_";
		tarray[i].name += names[i];
		for (int j = 0; j < 5; j++)
		{
			tarray[i].sarray[j].name = " Student_";
			tarray[i].sarray[j].name += names[j];
			int random = rand() % 61 + 40;
			tarray[i].sarray[j].score = random;
		}
	}
}

void printall(struct teacher tarray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << " teacher's name " << tarray[i].name << " " << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << tarray[i].sarray[j].name << " " << tarray[i].sarray[j].score << " ";
		}
		cout << endl;
	}
}

void printall02(struct teacher* t, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << t->name << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << t->sarray[j].name << " " << t->sarray[j].score;
		}
		cout << endl;
		t++;
	}
}
int main()
{
	srand((unsigned int)time(NULL));

	teacher tarray[3];
	int len = sizeof(tarray) / sizeof(tarray[0]);
	allocatespacesy(tarray, len);
	//printall(tarray,len);
	printall02(tarray,len);
	//teacher* p = tarray;
	//指针 结构体数组
	//cout << p->name << endl;
	//string str1 = "ABCD";
	//cout << str1[1] << endl;

	system("pause");
	return 0;
}