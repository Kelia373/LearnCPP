#include<iostream>
#include<cmath>
#include "Circle.h"
#include "Pint.h"
using namespace std;

int disRelationship(Circle &c, Point &p) {
	int dis = pow((c.getX() - p.getX()), 2) + pow((c.getY() - p.getY()), 2);
	if (dis == pow(c.getR(),2))
		return 0;
	else if (dis > c.getR())
		return 1;
	else
		return 2;
}
int main() {
	Circle c1;
	c1.setR(1);
	c1.setX(0);
	c1.setY(0);
	Point p1;
	p1.setX(1);
	p1.setY(0);
	int ret = disRelationship(c1,p1);
	if (ret == 0)
		cout << "Ô²ÉÏ" << endl;
	else if (ret == 1)
		cout << "Ô²Íâ" << endl; 
	else
		cout << "Ô²ÄÚ" << endl; 


	system("pause");
	return 0;
}