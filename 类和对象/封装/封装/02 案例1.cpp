#include<iostream>
using namespace std;

class Cude {
private:
	int m_L, m_H, m_W;

public:

	void setH(int h) {
		m_H = h;
	}
	void setL(int l) {
		m_L = l;
	} 
	void setW(int w) {
		m_W = w;
	}
	int  GetArea() {
		return (m_H * m_L + m_W * m_L + m_H * m_W)*2;
	}
	int GetVolume() {
		return m_L * m_H * m_W;
	}
	bool isSame(Cude& c) {
		if (c.GetArea() == GetArea() && c.GetVolume() == GetVolume())
			return true;
		return false;
	}
};

bool isSame(Cude &c1,Cude &c2) {
	if (c1.GetArea() == c2.GetArea() && c1.GetVolume() == c2.GetVolume())
		return true;
	return false;
}

int main() {
	Cude c1;
	c1.setH(10);
	c1.setW(10);
	c1.setL(10);
	cout << c1.GetArea() << endl;
	cout << c1.GetVolume() << endl;
	Cude c2;
	c2.setH(10);
	c2.setW(10);
	c2.setL(10);
	//bool ret = isSame(c1, c2);
	bool ret = c1.isSame(c2);
	if (ret)
		cout << "same" << endl;
	else
		cout << "None" << endl;
	system("pause");
	return 0;
}