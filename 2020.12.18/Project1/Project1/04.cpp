#include<iostream>
using namespace std;

int main()
{
	int scores[3][3] = {
		{100,100,100},{90,50,100},{60,70,80}
	};
	string names[3] = { "张三","李四","王五" };

	int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		cout << names[i] << " : ";
		for (int j = 0; j < 3; j++)
		{
			
			sum += scores[i][j];
			//cout << scores[i][j] << " ";
		}
		cout << sum <<  endl;
		sum = 0;
	}


	system("pause");
	return 0;
}