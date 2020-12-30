#include<iostream>
using namespace std;

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << arr[0] << endl;
	int* p = arr;
	cout << *p << endl;
	
	cout << *p << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << *p << " ";
		p++;
	}
	cout << endl;

	system("pause");
	return 0;
}