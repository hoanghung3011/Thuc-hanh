#pragma once
#include <iostream>
using namespace std;
class CTime
{
private:
	int gio, phut, giay;
public:
	CTime(int = 0, int = 0, int = 0);
	friend istream& operator>>(istream&, CTime&);
	friend ostream& operator<<(ostream&, CTime);
	CTime operator+(int);
	CTime operator-(int);
	CTime operator-(CTime&);
	CTime operator++();
	CTime operator--(int);
	~CTime();
};