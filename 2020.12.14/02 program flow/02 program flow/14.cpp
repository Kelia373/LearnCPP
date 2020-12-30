#include<iostream>
using namespace std;

int main()
{
	int array[5];
	array[0] = 10;
	array[1] = 20;
	array[2] = 30;
	array[3] = 40;
	array[4] = 50;

	int array2[5] = { 101,201,301,401,501 };
	int array3[] = { 101,201,301,401,501,601,701 };
	for (int i = 0; i < length(array3); i++)
	{
		//cout << array2[i] << endl;
		cout << array3[i] << endl;
	}
	
	
	cout << array2[3] << endl;
	system("pause");
	return 0;
}