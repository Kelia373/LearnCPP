#include<iostream>
using namespace std;

int main()
{
	cout << "aaaa" << endl;
	int ge = 0, shi = 0, bai = 0;
	int num = 100;




	while (1)
	{		
	ge = num % 10;
	shi = num / 10 % 10;
	bai = num / 100;
	if (ge * ge * ge + shi * shi * shi + bai * bai * bai == num)
	{
		cout << num << endl;
	}
	num++;
	if (num > 1000)
	{
		break;
	}
	}
	system("pause");
	return 0;
}