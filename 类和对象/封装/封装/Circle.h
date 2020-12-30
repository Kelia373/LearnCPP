#pragma once
#include<iostream>
#include "Pint.h"
class Circle {
private:
	int c_r, c_x, c_y;
	Point m_center;
public:
	void setR(int r);
	void setX(int x);
	void setY(int y);
	int getX();
	int getY();
	int getR();

};