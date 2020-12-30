#include<iostream>
using namespace std;

struct hero {
	string name;
	int age;
	string sex;
};

void tianchong(hero *he,int len)
{
	string name[] = { "liubei","guanyu","zhangfei","zhaoyun","diaochan" };
	int agearr[] = { 23,22,20,21,19 };
	string sexarr[] = { "man","man","man","man","woman" };
	for (int i = 0; i < len; i++)
	{
		he->name = name[i];
		he->age = agearr[i];
		he->sex = sexarr[i];
		he++;
	}
}

void printhero(hero* he, int len)
{
	for (int i = 0; i < 5; i++)
	{
		cout << he->name << " " << he->age << " " << he->sex << " " << endl;
		he++;
	}
}

void  bubblesort(struct hero *he,int len)
{
	for (int j = 0; j < len - 1; j++)
	{
		for (int i = 0; i < len - 1 - j; i++)
		{
			if (he[i].age > he[i + 1].age)
			{
				struct hero mid = he[i];
				he[i] = he[i + 1];
				he[i + 1] = mid;
			}
		}
	}
}

int main()
{
	hero he[5];
	int len = sizeof(he) / sizeof(he[0]);
	tianchong(he, len);
	//printhero(he, len);
	bubblesort(he, len);



	printhero(he, len);
	system("pause");
	return 0;
}