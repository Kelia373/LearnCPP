#include<iostream>
using namespace std;

void bubbleSort(int *arr,int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int mid = arr[j];
				arr[j] = arr[j + 1];
				arr[j+1] = mid;
			}
		}
	}
}

void printArray(int* arr, int len)
{
	for (int i = 0; i < len ; i++)
	{
		cout << *arr << " ";
		arr++;
	}
	cout << endl;

}

int main()
{
	int arr[] = { 4,3,5,9,1,2,10,8,7,5 };
	int len = sizeof(arr) / sizeof(arr[0]);

	bubbleSort(arr, len);
	printArray(arr, len);

	system("pause");
	return 0;
}