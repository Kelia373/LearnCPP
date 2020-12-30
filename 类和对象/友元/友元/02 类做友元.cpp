#include<iostream>
using namespace std;

class Building {
	friend class GoodGay;
public:
	Building();
	string m_SittingRoom;
private:
	string m_BedRoom;
};

class GoodGay {
public:
	GoodGay();
	void visit();
	Building* building;
};

Building::Building() {
	m_SittingRoom = "¿ÍÌü";
	m_BedRoom = "ÎÔÊÒ";
}

GoodGay::GoodGay() {
	building = new Building;
 }

void GoodGay:: visit() {
	cout << "  fangwen " << building->m_SittingRoom << endl;
	cout << "  fangwen " << building->m_BedRoom << endl;

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
