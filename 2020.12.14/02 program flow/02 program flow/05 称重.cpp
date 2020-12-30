#include<iostream>
using namespace std;

int main()
{
	int pig1 = 0, pig2 = 0, pig3 = 0;
	cout << "Please enter num.1 pig's weight "  << endl;
	cin >> pig1;
	cout << "Please enter num.2 pig's weight " << endl;
	cin >> pig2;
	cout << "Please enter num.3 pig's weight " << endl;
	cin >> pig3;

	if (pig1 > pig2)
	{
		if (pig1 > pig3)
		{
			cout << "pig1 is so fat ! " << endl;
		}
		else
		{
			cout << "pig3 is so fat ! " << endl;
		}
	}
	else
	{
		if (pig2 > pig3)
		{
			cout << "pig2 is so fat ! " << endl;
		}
		else
		{
			cout << "pig3 is so fat ! " << endl;
		}
	}

	system("pause");
	return 0;
}