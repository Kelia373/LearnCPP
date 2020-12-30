#include<iostream>
using namespace std;
class GoodGay;
class Building;
class GoodGay {
public:
	GoodGay();
	Building* building;

	void visit();
	void visit2();
};

class Building {
	friend void GoodGay::visit();
public:
	Building();
	string m_BedRoom;
private:
	string m_SettingRoom;
};
GoodGay::GoodGay() {
	building = new Building;
}
Building::Building() {
	m_BedRoom = "Œ‘ “";
	m_SettingRoom = "øÕÃ¸";
}
void GoodGay::visit() {
	cout << building->m_BedRoom << endl;
	cout << building->m_SettingRoom << endl;
}
void GoodGay::visit2() {
	cout << building->m_BedRoom << endl;
}

void test01() {
	GoodGay gg;
	gg.visit();


}
int main() {
	test01();
	system("pause");
	return 0;
}
