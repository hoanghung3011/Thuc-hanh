#pragma once
#include "Ellipse.h"
#include <iostream>
using namespace std;
class Round :public Ellipse
{
public:
	Round(int x = 1) :Ellipse(x, x) {}
	void setRound(int x)
	{
		X = x;
		Y = x;
	}
	void xuatRound()
	{
		cout << "(" << X << "," << X << ")";
	}
	float dientich()
	{
		return (X/2)*(X/2)*3.14;
	}
	~Round();
};
int main()
{
	Round x(5);
	x.xuatRound();
	cout << "\nDien tich: " << x.dientich();
}