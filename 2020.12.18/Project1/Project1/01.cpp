#include<iostream>
using namespace std;

int main()
{
	int arr[5] = { 300,350,400,200,250 };
	int max = 0;
	for (int i = 0; i < 5; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];

		}
	}
	cout << max << endl;

	system("pause");
	return 0;
}