#include<iostream>
#include "swap.h"
using namespace std;

void swap(int a, int b)
{
	int mid = a;
	a = b;
	b = mid;
	cout << "first num is " << a << endl;
	cout << "secound num is " << b << endl;

}