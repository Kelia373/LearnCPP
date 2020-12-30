#include<iostream>
using namespace std;

class Building {
	friend void goodgay(Building* building);
public:
	Building() {
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}
	string m_SittingRoom;
private:
	string m_BedRoom;
};
void goodgay(Building* building) {
	cout << " 全局函数" << building->m_SittingRoom << endl;
	cout << " 全局函数" << building->m_BedRoom << endl;
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