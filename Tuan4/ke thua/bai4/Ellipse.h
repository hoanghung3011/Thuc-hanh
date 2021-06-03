#pragma once
#include <iostream>
using namespace std;
class Ellipse
{
protected:
	float X, Y;
public:
	Ellipse(int x = 1, int y = 2) :X(x), Y(y) {}
	void set(int x = 1, int y = 2)
	{
		if (x != 1) X = x;
		if (y != 1) Y = y;
	}
	void xuat(Ellipse n)
	{
		cout << "(" << X << "," << Y << ")";
	}
	void dientich()
	{

	}
	~Ellipse();
};