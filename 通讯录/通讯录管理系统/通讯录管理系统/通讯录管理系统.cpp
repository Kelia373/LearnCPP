#include<iostream>
#define MAX 1000
using namespace std;

struct Person {
	string m_name;
	int m_sex;
	int m_age;
	string m_phone;
	string m_addr;
};

struct Addressbooks {
	struct Person personArray[MAX];
	int m_Size;
};

void showPerson(Addressbooks* abs)
{
	if (abs->m_Size == 0) {
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else {
		for (int i = 0; i < abs->m_Size; i++) {
			cout << "������ " << abs->personArray[i].m_name << "\t";
			cout << "�Ա� " << (abs->personArray[i].m_sex == 1 ? "��" : "Ů") << "\t";
			cout << "���䣺 " << abs->personArray[i].m_age << "\t";
			cout << "�绰�� " << abs->personArray[i].m_phone << "\t";
			cout << "��ַ�� " << abs->personArray[i].m_addr << endl;
			
		}
	}
	system("pause");
	system("cls");
}

void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1�������ϵ��  *****" << endl;
	cout << "*****  2����ʾ��ϵ��  *****" << endl;
	cout << "*****  3��ɾ����ϵ��  *****" << endl;
	cout << "*****  4��������ϵ��  *****" << endl;
	cout << "*****  5���޸���ϵ��  *****" << endl;
	cout << "*****  6�������ϵ��  *****" << endl;
	cout << "*****  0���Ƴ�ͨѶ¼  *****" << endl;
	cout << "***************************" << endl;
}

void addPerson(Addressbooks* abs)
{
	if (abs->m_Size == MAX) {
		cout << "ͨѶ¼�������޷���ӣ�" << endl;
		return;
	}
	else {
		// �����ϵ��  ���� �Ա� ���� �绰 סַ
		string name;
		cout << "�������� �� ";
		cin >> name;
		abs->personArray[abs->m_Size].m_name = name;

		int sex;
		cout << "�����Ա� �� " << endl;
		cout << "1 --- ��" << endl;
		cout << "2 --- Ů" << endl;
		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[abs->m_Size].m_sex = sex;
				break;
			}
			cout << "��������" << endl;
		}

		int age;
		cout << "�������� �� ";
		cin >> age;
		abs->personArray[abs->m_Size].m_age = age;

		string phone;
		cout << "����绰 �� ";
		cin >> phone;
		abs->personArray[abs->m_Size].m_phone = phone;

		string addr;
		cout << "����סַ �� ";
		cin >> addr;
		abs->personArray[abs->m_Size].m_addr = addr;
		cout << "��ӳɹ�" << endl;

		system("pause");
		system("cls ");
		abs->m_Size++;
	};
}

int isExist(Addressbooks *abs,string name)
{
	for (int i = 0; i < abs->m_Size; i++) {
		if (abs->personArray[i].m_name == name) {
			return i;
		}
	}
	return -1;
}

void deletPerson(Addressbooks* abs)
{
	cout << "������Ҫɾ������ϵ�ˣ�" << endl;
	string name;
	cin >> name;
	//ret == -1 none
	//ret == 1 yes
	int ret = isExist(abs, name);
	if (ret != -1) {
		for (int t = ret; t < abs->m_Size; t++) {
			abs->personArray[t] = abs->personArray[t + 1];
		}
		abs->m_Size--;
		cout << "ɾ���ɹ�1" << endl;
	}
	else {
		cout << "���޴��ˣ�" << endl;
	}
	system("pause");
	system("cls");
}

void findPerson(Addressbooks* abs)
{
	cout << "������Ҫ���ҵ���ϵ�ˣ�" << "\t";
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {
		cout << "������ " << abs->personArray[ret].m_name << "\t";
		cout << "�Ա� " << (abs->personArray[ret].m_sex == 1 ? "��" : "Ů") << "\t";
		cout << "���䣺 " << abs->personArray[ret].m_age << "\t";
		cout << "�绰�� " << abs->personArray[ret].m_phone << "\t";
		cout << "��ַ�� " << abs->personArray[ret].m_addr << endl;
	}
	else {
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

void modifyPerson(Addressbooks* abs) {
	cout << "������Ҫ���ҵ���ϵ�ˣ�" << "\t";
	string name, phone, addr;
	int sex, age;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {
		cout << "������������" << "\t";
		cin >> name;
		abs->personArray[ret].m_name = name;

		cout << "�������Ա�" << "\t";
		cin >> sex;
		abs->personArray[ret].m_sex = sex;

		cout << "���������䣺" << "\t";
		cin >> age;
		abs->personArray[ret].m_age = age;

		cout << "������绰��" << "\t";
		cin >> phone;
		abs->personArray[ret].m_phone = phone;

		cout << "�������ַ��" << "\t";
		cin >> addr;
		abs->personArray[ret].m_addr = addr;
		cout << endl;
	}
	else {
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

void cleanPerson(Addressbooks* abs) {
	abs->m_Size = 0;
	cout << "" << endl;
	system("pause");
	system("cls");
}

int main()
{
	int select = 0;
	Addressbooks abs;
	abs.m_Size = 0;

	while (true)
	{
		showMenu();
		cin >> select;
		string name01;
		switch (select)
		{
		case 1://�����ϵ��
			addPerson(&abs);
			break;
		case 2://��ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3://ɾ����ϵ��
			deletPerson(&abs);
			// test code
			//cout << "  " << endl;
			//cin >> name01;
			//if (isExist(&abs, name01) == -1) {
			//	cout << "none" << endl;
			//}
			//else {
			//	cout << "yes" << endl;
			//}

			break;
		case 4://������ϵ��
			findPerson(&abs);
			break;
		case 5://�޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6://�����ϵ��
			cleanPerson(&abs);
			break;
		case 0://�˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
}