#include<iostream>
using namespace std;

int main()
{
	cout << "Please enter your score in this movie £¡" << endl;
	int value = 0;
	cin >> value;
	switch (value)
	{
		case 10:
			cout << "nice!" << endl;
			break;
		case 8:
			cout << "great!" << endl; 
			break;
		case 7:
			cout << "so so!" << endl; 
			break;
		case 6:
			cout << "can see!" << endl; 
			break;
		default:
			cout << "shit!" << endl; 
			break;
	}


	system("pause");
	return 0;
}