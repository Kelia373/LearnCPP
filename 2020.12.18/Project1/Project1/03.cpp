#include<iostream>
using namespace std;

int main()
{
	int arr[] = { 4,2,8,0,5,7,1,3,9,6 };
	int mid = 0;
	cout << "原序列 : ";
	for (int a = 0; a < sizeof(arr) / sizeof(arr[0]); a++)
	{
		cout << arr[a] << " ";
	}
	cout << endl;

	for (int j = sizeof(arr) / sizeof(arr[0]) - 1; j > 0; j--)
	{
		for (int i = 0; i < j; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				mid = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = mid;
			}
		}
	}

	cout << "现序列 : ";
	for (int a = 0; a < sizeof(arr) / sizeof(arr[0]); a++)
	{
		cout << arr[a] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}