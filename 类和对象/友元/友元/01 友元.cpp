#include<iostream>
using namespace std;

class Building {
	friend void goodgay(Building* building);
public:
	Building() {
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}
	string m_SittingRoom;
private:
	string m_BedRoom;
};
void goodgay(Building* building) {
	cout << " ȫ�ֺ���" << building->m_SittingRoom << endl;
	cout << " ȫ�ֺ���" << building->m_BedRoom << endl;
}

void test01() {
	Building b1;
	goodgay(&b1);

}
int main() {
	test01();

	system("pause");
	return 0;
}