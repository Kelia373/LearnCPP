#include<iostream>
using namespace std;

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int mid = 0;
	for (int a = 0; a < sizeof(arr) / sizeof(arr[1]); a++)
	{
		cout << arr[a] ;
	}
	cout << endl;

	for (int j = (sizeof(arr) / sizeof(arr[1])) -1; j > 0; j--)
	{
		for (int i = 0; i < j; i++)
		{
			mid = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = mid;

		}
	}
	for (int a = 0; a < sizeof(arr) / sizeof(arr[1]); a++)
	{
		cout << arr[a];
	}
	cout << endl;
	system("pause");
	return 0;
}