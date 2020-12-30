#include<iostream>
using namespace std;
 
const double PI = 3.14;

class Cirle {
public:
	int m_r;
	
	double calcalateZC() {
		return 2 * PI * m_r;
	}

};

class Student {
public:
	int m_id;
	string m_name;
	void GetID(int id) {
		m_id = id;
	}
	void GetName(string name) {
		m_name = name;
	}
	void ShowStudent() {
		cout << "ÐÕÃû" << m_name << "\t" << "Ñ§ºÅ" << m_id << endl;
	}
};

class Person {
public:
	void setName(string name) {
		m_name = name;
	}
	string getName() {
		return m_name;
	}
	int getage() {
		m_age = 0;
		return m_age;
	}
	void setlover(string lover) {
		m_lover = lover;
	}
private:
	string m_name;
	int m_age;
	string m_lover;

};
int main() {
	//Cirle c1;
	//c1.m_r = 10;
	//cout << c1.calcalateZC() << endl;

	//Student stu1,stu2;
	//stu1.GetID(200511023);
	//stu1.GetName("ÔøÐÀìÏ");
	//stu2.GetID(200512135);
	//stu2.GetName("Å£Ñþ");
	//stu1.ShowStudent();
	//stu2.ShowStudent();

	Person p;

	p.setName("zhangsan");
	cout << p.getName() << endl;
	cout << p.getage() << endl;
	p.setlover("lisi");
	system("pause");
	return 0;
} 