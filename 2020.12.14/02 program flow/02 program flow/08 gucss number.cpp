#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	srand((unsigned int)time(NULL));
	int num = rand() % 100;
	int num2 = 0;
	cout << "Please enter you guess number " << endl;

	while (1)
	{		
		cin >> num2;
		if (num2 == num)
		{
			cout << "Right ! " << endl; 
				break;
		}
		else if (num2 > num)
		{
			cout << "Bigger" << endl;
		}
		else
		{
			cout << "Small" << endl;
		}
	}


	system("pause");
	return 0;
}