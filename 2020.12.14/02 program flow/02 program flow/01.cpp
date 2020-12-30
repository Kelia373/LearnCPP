#include<iostream>
using namespace std;

int main()
{
	//your value
	int number = 0;

	cout << "Please enter your value :" << endl;	
	cin >> number;
	if (number > 600)
	{
		if (number > 700)
		{
			cout << "Congraulation's for you , you get Pkeing university!" << endl;
		}
		else if ((number > 650) && (number < 700))
		{
			cout << "Congraulation's for you , you get Tuinghua university!" << endl;
		}
		else
		{
			cout << "Congraulation's for you , you get Renming university!" << endl;
		}
		//cout << "Congraulation's for you , you get first levals university!" << endl;
	}
	else if ((number >500)&&(number <600))
	{
		cout << "Congraulation's for you , you get scend levals university!" << endl;
	}
	else if ((number >400)&&(number <500))
	{
		cout << "Congraulation's for you , you get third levals university!" << endl;
	}
	else
	{
		cout << "I'm so sorry." << endl;
	}
	system("pause");
	return 0;
}