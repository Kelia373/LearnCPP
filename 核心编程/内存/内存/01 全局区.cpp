#include<iostream>
using namespace std;

//ȫ�ֱ���
int c1 = 10, c2 = 10;
const int d1 = 10, d2 = 10;
int main()
{
	//�ֲ�����
	int a1 = 10, a2 = 20;

	cout << "�ֲ�������" << (int)&a1 << endl;
	cout << "�ֲ�������" << (int)&a2 << endl;

	cout << "ȫ�ֱ�����" << (int)&c1 << endl;
	cout << "ȫ�ֱ�����" << (int)&c2 << endl;

	//��̬����
	static int b1 = 10, b2 = 10;
	cout << "��̬������" << (int)&b1 << endl;
	cout << "��̬������" << (int)&b2 << endl;

	//�������ַ���������const ������������
	cout << "�ַ���������" << (int)&"hello world" << endl;

	cout << "const ȫ�ֱ�����" << (int)&d1 << endl;
	cout << "const ȫ�ֱ�����" << (int)&d2 << endl;

	const int f1 = 10, f2 = 10;
	cout << "const �ֲ�������" << (int)&f1 << endl;
	cout << "const �ֲ�������" << (int)&f2 << endl;

	// ȫ������ȫ�ֱ�������̬����������
	// ���������ֲ�������const�ֲ�����
	system("pause");
	return 0;
}