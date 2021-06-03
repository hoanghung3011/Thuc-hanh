#pragma once
#include <iostream>
#include <fstream>
using namespace std;
class classPoint
{
private:
	float x;
	float y;
public:
	friend istream& operator >>(istream&, classPoint&);
	friend ostream& operator <<(ostream&, classPoint);
	classPoint vector(classPoint);
	void translate(float = 0, float = 0);
	void rotative(float);
	float getX();
	float getY();
	void setOrd(float);
	void setAbs(float);
	void setOA(float, float);
	classPoint();
	classPoint(float, float);
	~classPoint();
};

