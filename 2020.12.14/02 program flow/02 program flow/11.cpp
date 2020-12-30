#include<iostream>
using namespace std;

int main()
{
	for (int i = 0; i <= 100; i++)
	{
		if (i % 7 == 0 || i % 10 == 0 || i / 10 == 7)
		{
			cout << "qiao zhuo zi " << endl;
		}
		else
		{
			cout << i << endl;
		}

	}


	system("pause");
	return 0;
}