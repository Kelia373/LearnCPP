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
		cout << "当前记录为空" << endl;
	}
	else {
		for (int i = 0; i < abs->m_Size; i++) {
			cout << "姓名： " << abs->personArray[i].m_name << "\t";
			cout << "性别： " << (abs->personArray[i].m_sex == 1 ? "男" : "女") << "\t";
			cout << "年龄： " << abs->personArray[i].m_age << "\t";
			cout << "电话： " << abs->personArray[i].m_phone << "\t";
			cout << "地址： " << abs->personArray[i].m_addr << endl;
			
		}
	}
	system("pause");
	system("cls");
}

void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1、添加联系人  *****" << endl;
	cout << "*****  2、显示联系人  *****" << endl;
	cout << "*****  3、删除联系人  *****" << endl;
	cout << "*****  4、查找联系人  *****" << endl;
	cout << "*****  5、修改联系人  *****" << endl;
	cout << "*****  6、清空联系人  *****" << endl;
	cout << "*****  0、推出通讯录  *****" << endl;
	cout << "***************************" << endl;
}

void addPerson(Addressbooks* abs)
{
	if (abs->m_Size == MAX) {
		cout << "通讯录已满，无法添加！" << endl;
		return;
	}
	else {
		// 添加联系人  姓名 性别 年龄 电话 住址
		string name;
		cout << "输入姓名 ： ";
		cin >> name;
		abs->personArray[abs->m_Size].m_name = name;

		int sex;
		cout << "输入性别 ： " << endl;
		cout << "1 --- 男" << endl;
		cout << "2 --- 女" << endl;
		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[abs->m_Size].m_sex = sex;
				break;
			}
			cout << "重新输入" << endl;
		}

		int age;
		cout << "输入年龄 ： ";
		cin >> age;
		abs->personArray[abs->m_Size].m_age = age;

		string phone;
		cout << "输入电话 ： ";
		cin >> phone;
		abs->personArray[abs->m_Size].m_phone = phone;

		string addr;
		cout << "输入住址 ： ";
		cin >> addr;
		abs->personArray[abs->m_Size].m_addr = addr;
		cout << "添加成功" << endl;

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
	cout << "输入你要删除得联系人：" << endl;
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
		cout << "删除成功1" << endl;
	}
	else {
		cout << "查无此人！" << endl;
	}
	system("pause");
	system("cls");
}

void findPerson(Addressbooks* abs)
{
	cout << "输入你要查找得联系人：" << "\t";
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {
		cout << "姓名： " << abs->personArray[ret].m_name << "\t";
		cout << "性别： " << (abs->personArray[ret].m_sex == 1 ? "男" : "女") << "\t";
		cout << "年龄： " << abs->personArray[ret].m_age << "\t";
		cout << "电话： " << abs->personArray[ret].m_phone << "\t";
		cout << "地址： " << abs->personArray[ret].m_addr << endl;
	}
	else {
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}

void modifyPerson(Addressbooks* abs) {
	cout << "输入你要查找得联系人：" << "\t";
	string name, phone, addr;
	int sex, age;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {
		cout << "请输入姓名：" << "\t";
		cin >> name;
		abs->personArray[ret].m_name = name;

		cout << "请输入性别：" << "\t";
		cin >> sex;
		abs->personArray[ret].m_sex = sex;

		cout << "请输入年龄：" << "\t";
		cin >> age;
		abs->personArray[ret].m_age = age;

		cout << "请输入电话：" << "\t";
		cin >> phone;
		abs->personArray[ret].m_phone = phone;

		cout << "请输入地址：" << "\t";
		cin >> addr;
		abs->personArray[ret].m_addr = addr;
		cout << endl;
	}
	else {
		cout << "查无此人" << endl;
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
		case 1://添加联系人
			addPerson(&abs);
			break;
		case 2://显示联系人
			showPerson(&abs);
			break;
		case 3://删除联系人
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
		case 4://查找联系人
			findPerson(&abs);
			break;
		case 5://修改联系人
			modifyPerson(&abs);
			break;
		case 6://清空联系人
			cleanPerson(&abs);
			break;
		case 0://退出通讯录
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
}